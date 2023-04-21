#include <am.h>
#include <soc.h>
#include <uart.h>


#define UART0_IRQ   (10)
#define UART_FREQ    46000000

#define UART_DEFAULT_BAUDRATE               115200
// UART_FREQ/(16*UART_DEFAULT_BAUDRATE)
#define UART_CONFIG_NUM 3

#define UART_BASE            (0x10000000L)

#define RHR 0    // Receive Holding Register (read mode)
#define THR 0    // Transmit Holding Register (write mode)
#define DLL 0    // LSB of Divisor Latch (write mode)
#define IER 1    // Interrupt Enable Register (write mode)
#define DLM 1    // MSB of Divisor Latch (write mode)
#define FCR 2    // FIFO Control Register (write mode)
#define ISR 2    // Interrupt Status Register (read mode)
#define LCR 3    // Line Control Register
#define MCR 4    // Modem Control Register
#define LSR 5    // Line Status Register
#define MSR 6    // Modem Status Register
#define SPR 7    // ScratchPad Register

#define UART_REG(reg) ((volatile uint8_t *)(UART_BASE + reg))

#define LSR_RX_READY (1 << 0)
#define LSR_TX_IDLE  (1 << 5)

#define uart_read_reg(reg) (*(UART_REG(reg)))
#define uart_write_reg(reg, v) (*(UART_REG(reg)) = (v))



struct device_uart
{
    rt_ubase_t  hw_base;
    rt_uint32_t irqno;
};

static rt_err_t  rt_uart_configure(struct rt_serial_device *serial, struct serial_configure *cfg);
static rt_err_t uart_control(struct rt_serial_device *serial, int cmd, void *arg);
static int       drv_uart_putc(struct rt_serial_device *serial, char c);
static int       drv_uart_getc(struct rt_serial_device *serial);


void virt_uart_init(void)
{
    //http://byterunner.com/16550.html
    uart_write_reg(IER, 0x00);

    uint8_t lcr = uart_read_reg(LCR);
    uart_write_reg(LCR, lcr | (1 << 7));
    // UART_CONFIG_NUM

    uart_write_reg(DLM,(UART_CONFIG_NUM & (0xff00)) >> 8 );
    uart_write_reg(DLL,UART_CONFIG_NUM & (0x00ff) );
    

    lcr = 0;
    uart_write_reg(LCR, lcr | (3 << 0));

    /*
     * enable receive interrupts.
     */
    uint8_t ier = uart_read_reg(IER);
    uart_write_reg(IER, ier | (1 << 0));
}

/*
 * UART interface
 */
static rt_err_t rt_uart_configure(struct rt_serial_device *serial, struct serial_configure *cfg)
{
    // struct device_uart *uart;

    // RT_ASSERT(serial != RT_NULL);
    serial->config = *cfg;

    return (RT_EOK);
}

static rt_err_t uart_control(struct rt_serial_device *serial, int cmd, void *arg)
{
    // struct device_uart *uart;

    // uart = serial->parent.user_data;
    // rt_uint32_t channel = 1;

    // RT_ASSERT(uart != RT_NULL);
    // RT_ASSERT(channel != 3);

    switch (cmd)
    {
    case RT_DEVICE_CTRL_CLR_INT:
        break;

    case RT_DEVICE_CTRL_SET_INT:
        break;
    }

    return (RT_EOK);
}

static int drv_uart_putc(struct rt_serial_device *serial, char c)
{
    while ((uart_read_reg(LSR) & LSR_TX_IDLE) == 0);
    return uart_write_reg(THR, c);
}

static int drv_uart_getc(struct rt_serial_device *serial)
{
    if (uart_read_reg(LSR) & LSR_RX_READY){
        return uart_read_reg(RHR);
    } else {
        return -1;
    }
    //return sbi_console_getchar();
}

// static void rt_hw_uart_isr(int irqno, void *param)
// {
//     struct rt_serial_device *serial = (struct rt_serial_device*)param;
//     rt_hw_serial_isr(serial, RT_SERIAL_EVENT_RX_IND);
// }

struct rt_serial_device  serial1;
struct device_uart       uart1;

const struct rt_uart_ops _uart_ops =
{
    rt_uart_configure,
    uart_control,
    drv_uart_putc,
    drv_uart_getc,
    RT_NULL
};

/*
 * UART Initiation
 */
int rt_hw_uart_init(void)
{
    struct rt_serial_device *serial;
    struct device_uart      *uart;
    struct serial_configure config = RT_SERIAL_CONFIG_DEFAULT;
    {
        serial  = &serial1;
        uart    = &uart1;

        serial->ops              = &_uart_ops;
        serial->config           = config;
        serial->config.baud_rate = UART_DEFAULT_BAUDRATE;

        uart->hw_base   = UART_BASE;
        uart->irqno     = UART0_IRQ;

        virt_uart_init();

        // rt_hw_serial_register(serial,
        //                       "uart",
        //                       RT_DEVICE_FLAG_STREAM | RT_DEVICE_FLAG_RDWR, // | RT_DEVICE_FLAG_INT_RX,
        //                       uart);

    }

    return 0;
}


int uart_putchar(char ch) {
    while ((uart_read_reg(LSR) & LSR_TX_IDLE) == 0);
    return uart_write_reg(THR, ch);
}
void __am_uart_init(){
    // rt_hw_uart_init();
    virt_uart_init();
}

void __am_uart_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->present = false;
}

void __am_uart_ctrl(AM_AUDIO_CTRL_T *ctrl) {
}

void __am_uart_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = 0;
}

