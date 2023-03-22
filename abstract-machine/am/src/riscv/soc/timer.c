#include <am.h>
#include <soc.h>
#include <stdio.h>
// #include <time.h>
// static uint64_t boot_time = 0;

// static uint64_t get_time_internal() {
//   struct timespec now;
//   clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
//   uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
//   return us;
// }

// uint64_t get_time() {
//   if (boot_time == 0) boot_time = get_time_internal();
//   uint64_t now = get_time_internal();
//   return now - boot_time;
// }


void __am_timer_init() {
  // if (boot_time == 0) boot_time = get_time_internal();
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t low = inl(RTC_ADDR ); 
  uint32_t hi  = inl(RTC_ADDR + 4);
  // printf("low = %d, hi = %d\n", low, hi);
  uptime->us = (((uint64_t)hi) << 32) + (uint64_t)low;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
