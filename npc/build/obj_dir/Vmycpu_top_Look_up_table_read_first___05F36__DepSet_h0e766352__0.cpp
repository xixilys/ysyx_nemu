// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_Look_up_table_read_first___05F36.h"
#include "Vmycpu_top__Syms.h"

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first___05F36___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___1018(Vmycpu_top_Look_up_table_read_first___05F36* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_Look_up_table_read_first___05F36___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___1018\n"); );
    // Body
    vlSelf->__PVT__io_out = ((0x1ffU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? vlSelf->__PVT__btb_511
                              : vlSelf->__PVT___GEN_510);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__io_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__btb_data_ram_0_io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0.__PVT__io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__io_rdata 
        = VL_EXTEND_QI(64,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__btb_data_ram_0_io_doutb);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_data_with_block_ram_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_banks_0_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_data_with_block_ram_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first___05F36___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___65(Vmycpu_top_Look_up_table_read_first___05F36* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_Look_up_table_read_first___05F36___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___65\n"); );
    // Body
    vlSelf->__PVT___GEN_353 = ((0x161U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_353
                                : vlSelf->__PVT___GEN_352);
    vlSelf->__PVT___GEN_354 = ((0x162U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_354
                                : vlSelf->__PVT___GEN_353);
    vlSelf->__PVT___GEN_355 = ((0x163U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_355
                                : vlSelf->__PVT___GEN_354);
    vlSelf->__PVT___GEN_356 = ((0x164U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_356
                                : vlSelf->__PVT___GEN_355);
    vlSelf->__PVT___GEN_357 = ((0x165U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_357
                                : vlSelf->__PVT___GEN_356);
    vlSelf->__PVT___GEN_358 = ((0x166U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_358
                                : vlSelf->__PVT___GEN_357);
    vlSelf->__PVT___GEN_359 = ((0x167U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_359
                                : vlSelf->__PVT___GEN_358);
    vlSelf->__PVT___GEN_360 = ((0x168U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_360
                                : vlSelf->__PVT___GEN_359);
    vlSelf->__PVT___GEN_361 = ((0x169U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_361
                                : vlSelf->__PVT___GEN_360);
    vlSelf->__PVT___GEN_362 = ((0x16aU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_362
                                : vlSelf->__PVT___GEN_361);
    vlSelf->__PVT___GEN_363 = ((0x16bU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_363
                                : vlSelf->__PVT___GEN_362);
    vlSelf->__PVT___GEN_364 = ((0x16cU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_364
                                : vlSelf->__PVT___GEN_363);
    vlSelf->__PVT___GEN_365 = ((0x16dU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_365
                                : vlSelf->__PVT___GEN_364);
    vlSelf->__PVT___GEN_366 = ((0x16eU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_366
                                : vlSelf->__PVT___GEN_365);
    vlSelf->__PVT___GEN_367 = ((0x16fU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_367
                                : vlSelf->__PVT___GEN_366);
    vlSelf->__PVT___GEN_368 = ((0x170U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_368
                                : vlSelf->__PVT___GEN_367);
    vlSelf->__PVT___GEN_369 = ((0x171U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_369
                                : vlSelf->__PVT___GEN_368);
    vlSelf->__PVT___GEN_370 = ((0x172U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_370
                                : vlSelf->__PVT___GEN_369);
    vlSelf->__PVT___GEN_371 = ((0x173U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_371
                                : vlSelf->__PVT___GEN_370);
    vlSelf->__PVT___GEN_372 = ((0x174U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_372
                                : vlSelf->__PVT___GEN_371);
    vlSelf->__PVT___GEN_373 = ((0x175U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_373
                                : vlSelf->__PVT___GEN_372);
    vlSelf->__PVT___GEN_374 = ((0x176U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_374
                                : vlSelf->__PVT___GEN_373);
    vlSelf->__PVT___GEN_375 = ((0x177U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_375
                                : vlSelf->__PVT___GEN_374);
    vlSelf->__PVT___GEN_376 = ((0x178U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_376
                                : vlSelf->__PVT___GEN_375);
    vlSelf->__PVT___GEN_377 = ((0x179U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_377
                                : vlSelf->__PVT___GEN_376);
    vlSelf->__PVT___GEN_378 = ((0x17aU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_378
                                : vlSelf->__PVT___GEN_377);
    vlSelf->__PVT___GEN_379 = ((0x17bU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_379
                                : vlSelf->__PVT___GEN_378);
    vlSelf->__PVT___GEN_380 = ((0x17cU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_380
                                : vlSelf->__PVT___GEN_379);
    vlSelf->__PVT___GEN_381 = ((0x17dU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_381
                                : vlSelf->__PVT___GEN_380);
    vlSelf->__PVT___GEN_382 = ((0x17eU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_382
                                : vlSelf->__PVT___GEN_381);
    vlSelf->__PVT___GEN_383 = ((0x17fU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_383
                                : vlSelf->__PVT___GEN_382);
    vlSelf->__PVT___GEN_384 = ((0x180U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_384
                                : vlSelf->__PVT___GEN_383);
    vlSelf->__PVT___GEN_385 = ((0x181U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_385
                                : vlSelf->__PVT___GEN_384);
    vlSelf->__PVT___GEN_386 = ((0x182U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_386
                                : vlSelf->__PVT___GEN_385);
    vlSelf->__PVT___GEN_387 = ((0x183U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_387
                                : vlSelf->__PVT___GEN_386);
    vlSelf->__PVT___GEN_388 = ((0x184U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_388
                                : vlSelf->__PVT___GEN_387);
    vlSelf->__PVT___GEN_389 = ((0x185U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_389
                                : vlSelf->__PVT___GEN_388);
    vlSelf->__PVT___GEN_390 = ((0x186U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_390
                                : vlSelf->__PVT___GEN_389);
    vlSelf->__PVT___GEN_391 = ((0x187U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_391
                                : vlSelf->__PVT___GEN_390);
    vlSelf->__PVT___GEN_392 = ((0x188U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_392
                                : vlSelf->__PVT___GEN_391);
    vlSelf->__PVT___GEN_393 = ((0x189U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_393
                                : vlSelf->__PVT___GEN_392);
    vlSelf->__PVT___GEN_394 = ((0x18aU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_394
                                : vlSelf->__PVT___GEN_393);
    vlSelf->__PVT___GEN_395 = ((0x18bU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_395
                                : vlSelf->__PVT___GEN_394);
    vlSelf->__PVT___GEN_396 = ((0x18cU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_396
                                : vlSelf->__PVT___GEN_395);
    vlSelf->__PVT___GEN_397 = ((0x18dU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_397
                                : vlSelf->__PVT___GEN_396);
    vlSelf->__PVT___GEN_398 = ((0x18eU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_398
                                : vlSelf->__PVT___GEN_397);
    vlSelf->__PVT___GEN_399 = ((0x18fU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_399
                                : vlSelf->__PVT___GEN_398);
    vlSelf->__PVT___GEN_400 = ((0x190U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_400
                                : vlSelf->__PVT___GEN_399);
    vlSelf->__PVT___GEN_401 = ((0x191U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_401
                                : vlSelf->__PVT___GEN_400);
    vlSelf->__PVT___GEN_402 = ((0x192U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_402
                                : vlSelf->__PVT___GEN_401);
    vlSelf->__PVT___GEN_403 = ((0x193U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_403
                                : vlSelf->__PVT___GEN_402);
    vlSelf->__PVT___GEN_404 = ((0x194U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_404
                                : vlSelf->__PVT___GEN_403);
    vlSelf->__PVT___GEN_405 = ((0x195U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_405
                                : vlSelf->__PVT___GEN_404);
    vlSelf->__PVT___GEN_406 = ((0x196U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_406
                                : vlSelf->__PVT___GEN_405);
    vlSelf->__PVT___GEN_407 = ((0x197U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_407
                                : vlSelf->__PVT___GEN_406);
    vlSelf->__PVT___GEN_408 = ((0x198U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_408
                                : vlSelf->__PVT___GEN_407);
    vlSelf->__PVT___GEN_409 = ((0x199U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_409
                                : vlSelf->__PVT___GEN_408);
    vlSelf->__PVT___GEN_410 = ((0x19aU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_410
                                : vlSelf->__PVT___GEN_409);
    vlSelf->__PVT___GEN_411 = ((0x19bU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_411
                                : vlSelf->__PVT___GEN_410);
    vlSelf->__PVT___GEN_412 = ((0x19cU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_412
                                : vlSelf->__PVT___GEN_411);
    vlSelf->__PVT___GEN_413 = ((0x19dU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_413
                                : vlSelf->__PVT___GEN_412);
    vlSelf->__PVT___GEN_414 = ((0x19eU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_414
                                : vlSelf->__PVT___GEN_413);
    vlSelf->__PVT___GEN_415 = ((0x19fU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_415
                                : vlSelf->__PVT___GEN_414);
    vlSelf->__PVT___GEN_416 = ((0x1a0U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_416
                                : vlSelf->__PVT___GEN_415);
    vlSelf->__PVT___GEN_417 = ((0x1a1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_417
                                : vlSelf->__PVT___GEN_416);
    vlSelf->__PVT___GEN_418 = ((0x1a2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_418
                                : vlSelf->__PVT___GEN_417);
    vlSelf->__PVT___GEN_419 = ((0x1a3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_419
                                : vlSelf->__PVT___GEN_418);
    vlSelf->__PVT___GEN_420 = ((0x1a4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_420
                                : vlSelf->__PVT___GEN_419);
    vlSelf->__PVT___GEN_421 = ((0x1a5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_421
                                : vlSelf->__PVT___GEN_420);
    vlSelf->__PVT___GEN_422 = ((0x1a6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_422
                                : vlSelf->__PVT___GEN_421);
    vlSelf->__PVT___GEN_423 = ((0x1a7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_423
                                : vlSelf->__PVT___GEN_422);
    vlSelf->__PVT___GEN_424 = ((0x1a8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_424
                                : vlSelf->__PVT___GEN_423);
    vlSelf->__PVT___GEN_425 = ((0x1a9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_425
                                : vlSelf->__PVT___GEN_424);
    vlSelf->__PVT___GEN_426 = ((0x1aaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_426
                                : vlSelf->__PVT___GEN_425);
    vlSelf->__PVT___GEN_427 = ((0x1abU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_427
                                : vlSelf->__PVT___GEN_426);
    vlSelf->__PVT___GEN_428 = ((0x1acU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_428
                                : vlSelf->__PVT___GEN_427);
    vlSelf->__PVT___GEN_429 = ((0x1adU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_429
                                : vlSelf->__PVT___GEN_428);
    vlSelf->__PVT___GEN_430 = ((0x1aeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_430
                                : vlSelf->__PVT___GEN_429);
    vlSelf->__PVT___GEN_431 = ((0x1afU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_431
                                : vlSelf->__PVT___GEN_430);
    vlSelf->__PVT___GEN_432 = ((0x1b0U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_432
                                : vlSelf->__PVT___GEN_431);
    vlSelf->__PVT___GEN_433 = ((0x1b1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_433
                                : vlSelf->__PVT___GEN_432);
    vlSelf->__PVT___GEN_434 = ((0x1b2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_434
                                : vlSelf->__PVT___GEN_433);
    vlSelf->__PVT___GEN_435 = ((0x1b3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_435
                                : vlSelf->__PVT___GEN_434);
    vlSelf->__PVT___GEN_436 = ((0x1b4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_436
                                : vlSelf->__PVT___GEN_435);
    vlSelf->__PVT___GEN_437 = ((0x1b5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_437
                                : vlSelf->__PVT___GEN_436);
    vlSelf->__PVT___GEN_438 = ((0x1b6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_438
                                : vlSelf->__PVT___GEN_437);
    vlSelf->__PVT___GEN_439 = ((0x1b7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_439
                                : vlSelf->__PVT___GEN_438);
    vlSelf->__PVT___GEN_440 = ((0x1b8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_440
                                : vlSelf->__PVT___GEN_439);
    vlSelf->__PVT___GEN_441 = ((0x1b9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_441
                                : vlSelf->__PVT___GEN_440);
    vlSelf->__PVT___GEN_442 = ((0x1baU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_442
                                : vlSelf->__PVT___GEN_441);
    vlSelf->__PVT___GEN_443 = ((0x1bbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_443
                                : vlSelf->__PVT___GEN_442);
    vlSelf->__PVT___GEN_444 = ((0x1bcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_444
                                : vlSelf->__PVT___GEN_443);
    vlSelf->__PVT___GEN_445 = ((0x1bdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_445
                                : vlSelf->__PVT___GEN_444);
    vlSelf->__PVT___GEN_446 = ((0x1beU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_446
                                : vlSelf->__PVT___GEN_445);
    vlSelf->__PVT___GEN_447 = ((0x1bfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_447
                                : vlSelf->__PVT___GEN_446);
    vlSelf->__PVT___GEN_448 = ((0x1c0U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_448
                                : vlSelf->__PVT___GEN_447);
    vlSelf->__PVT___GEN_449 = ((0x1c1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_449
                                : vlSelf->__PVT___GEN_448);
    vlSelf->__PVT___GEN_450 = ((0x1c2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_450
                                : vlSelf->__PVT___GEN_449);
    vlSelf->__PVT___GEN_451 = ((0x1c3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_451
                                : vlSelf->__PVT___GEN_450);
    vlSelf->__PVT___GEN_452 = ((0x1c4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_452
                                : vlSelf->__PVT___GEN_451);
    vlSelf->__PVT___GEN_453 = ((0x1c5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_453
                                : vlSelf->__PVT___GEN_452);
    vlSelf->__PVT___GEN_454 = ((0x1c6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_454
                                : vlSelf->__PVT___GEN_453);
    vlSelf->__PVT___GEN_455 = ((0x1c7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_455
                                : vlSelf->__PVT___GEN_454);
    vlSelf->__PVT___GEN_456 = ((0x1c8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_456
                                : vlSelf->__PVT___GEN_455);
    vlSelf->__PVT___GEN_457 = ((0x1c9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_457
                                : vlSelf->__PVT___GEN_456);
    vlSelf->__PVT___GEN_458 = ((0x1caU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_458
                                : vlSelf->__PVT___GEN_457);
    vlSelf->__PVT___GEN_459 = ((0x1cbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_459
                                : vlSelf->__PVT___GEN_458);
    vlSelf->__PVT___GEN_460 = ((0x1ccU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_460
                                : vlSelf->__PVT___GEN_459);
    vlSelf->__PVT___GEN_461 = ((0x1cdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_461
                                : vlSelf->__PVT___GEN_460);
    vlSelf->__PVT___GEN_462 = ((0x1ceU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_462
                                : vlSelf->__PVT___GEN_461);
    vlSelf->__PVT___GEN_463 = ((0x1cfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_463
                                : vlSelf->__PVT___GEN_462);
    vlSelf->__PVT___GEN_464 = ((0x1d0U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_464
                                : vlSelf->__PVT___GEN_463);
    vlSelf->__PVT___GEN_465 = ((0x1d1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_465
                                : vlSelf->__PVT___GEN_464);
    vlSelf->__PVT___GEN_466 = ((0x1d2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_466
                                : vlSelf->__PVT___GEN_465);
    vlSelf->__PVT___GEN_467 = ((0x1d3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_467
                                : vlSelf->__PVT___GEN_466);
    vlSelf->__PVT___GEN_468 = ((0x1d4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_468
                                : vlSelf->__PVT___GEN_467);
    vlSelf->__PVT___GEN_469 = ((0x1d5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_469
                                : vlSelf->__PVT___GEN_468);
    vlSelf->__PVT___GEN_470 = ((0x1d6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_470
                                : vlSelf->__PVT___GEN_469);
    vlSelf->__PVT___GEN_471 = ((0x1d7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_471
                                : vlSelf->__PVT___GEN_470);
    vlSelf->__PVT___GEN_472 = ((0x1d8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_472
                                : vlSelf->__PVT___GEN_471);
    vlSelf->__PVT___GEN_473 = ((0x1d9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_473
                                : vlSelf->__PVT___GEN_472);
    vlSelf->__PVT___GEN_474 = ((0x1daU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_474
                                : vlSelf->__PVT___GEN_473);
    vlSelf->__PVT___GEN_475 = ((0x1dbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_475
                                : vlSelf->__PVT___GEN_474);
    vlSelf->__PVT___GEN_476 = ((0x1dcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_476
                                : vlSelf->__PVT___GEN_475);
    vlSelf->__PVT___GEN_477 = ((0x1ddU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_477
                                : vlSelf->__PVT___GEN_476);
    vlSelf->__PVT___GEN_478 = ((0x1deU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_478
                                : vlSelf->__PVT___GEN_477);
    vlSelf->__PVT___GEN_479 = ((0x1dfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_479
                                : vlSelf->__PVT___GEN_478);
    vlSelf->__PVT___GEN_480 = ((0x1e0U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_480
                                : vlSelf->__PVT___GEN_479);
    vlSelf->__PVT___GEN_481 = ((0x1e1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_481
                                : vlSelf->__PVT___GEN_480);
    vlSelf->__PVT___GEN_482 = ((0x1e2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_482
                                : vlSelf->__PVT___GEN_481);
    vlSelf->__PVT___GEN_483 = ((0x1e3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_483
                                : vlSelf->__PVT___GEN_482);
    vlSelf->__PVT___GEN_484 = ((0x1e4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_484
                                : vlSelf->__PVT___GEN_483);
    vlSelf->__PVT___GEN_485 = ((0x1e5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_485
                                : vlSelf->__PVT___GEN_484);
    vlSelf->__PVT___GEN_486 = ((0x1e6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_486
                                : vlSelf->__PVT___GEN_485);
    vlSelf->__PVT___GEN_487 = ((0x1e7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_487
                                : vlSelf->__PVT___GEN_486);
    vlSelf->__PVT___GEN_488 = ((0x1e8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_488
                                : vlSelf->__PVT___GEN_487);
    vlSelf->__PVT___GEN_489 = ((0x1e9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_489
                                : vlSelf->__PVT___GEN_488);
    vlSelf->__PVT___GEN_490 = ((0x1eaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_490
                                : vlSelf->__PVT___GEN_489);
    vlSelf->__PVT___GEN_491 = ((0x1ebU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_491
                                : vlSelf->__PVT___GEN_490);
    vlSelf->__PVT___GEN_492 = ((0x1ecU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_492
                                : vlSelf->__PVT___GEN_491);
    vlSelf->__PVT___GEN_493 = ((0x1edU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_493
                                : vlSelf->__PVT___GEN_492);
    vlSelf->__PVT___GEN_494 = ((0x1eeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_494
                                : vlSelf->__PVT___GEN_493);
    vlSelf->__PVT___GEN_495 = ((0x1efU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_495
                                : vlSelf->__PVT___GEN_494);
    vlSelf->__PVT___GEN_496 = ((0x1f0U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_496
                                : vlSelf->__PVT___GEN_495);
    vlSelf->__PVT___GEN_497 = ((0x1f1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_497
                                : vlSelf->__PVT___GEN_496);
    vlSelf->__PVT___GEN_498 = ((0x1f2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_498
                                : vlSelf->__PVT___GEN_497);
    vlSelf->__PVT___GEN_499 = ((0x1f3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_499
                                : vlSelf->__PVT___GEN_498);
    vlSelf->__PVT___GEN_500 = ((0x1f4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_500
                                : vlSelf->__PVT___GEN_499);
    vlSelf->__PVT___GEN_501 = ((0x1f5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_501
                                : vlSelf->__PVT___GEN_500);
    vlSelf->__PVT___GEN_502 = ((0x1f6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_502
                                : vlSelf->__PVT___GEN_501);
    vlSelf->__PVT___GEN_503 = ((0x1f7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_503
                                : vlSelf->__PVT___GEN_502);
    vlSelf->__PVT___GEN_504 = ((0x1f8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_504
                                : vlSelf->__PVT___GEN_503);
    vlSelf->__PVT___GEN_505 = ((0x1f9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_505
                                : vlSelf->__PVT___GEN_504);
    vlSelf->__PVT___GEN_506 = ((0x1faU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_506
                                : vlSelf->__PVT___GEN_505);
    vlSelf->__PVT___GEN_507 = ((0x1fbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_507
                                : vlSelf->__PVT___GEN_506);
    vlSelf->__PVT___GEN_508 = ((0x1fcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_508
                                : vlSelf->__PVT___GEN_507);
    vlSelf->__PVT___GEN_509 = ((0x1fdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_509
                                : vlSelf->__PVT___GEN_508);
    vlSelf->__PVT___GEN_510 = ((0x1feU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_510
                                : vlSelf->__PVT___GEN_509);
    vlSelf->__PVT__io_out = ((0x1ffU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? vlSelf->__PVT__btb_511
                              : vlSelf->__PVT___GEN_510);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__io_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__btb_data_ram_0_io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0.__PVT__io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__io_rdata 
        = VL_EXTEND_QI(64,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__btb_data_ram_0_io_doutb);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_data_with_block_ram_1_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_banks_1_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_data_with_block_ram_1_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first___05F36___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___838(Vmycpu_top_Look_up_table_read_first___05F36* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_Look_up_table_read_first___05F36___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___838\n"); );
    // Body
    vlSelf->__PVT__io_out = ((0x1ffU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? vlSelf->__PVT__btb_511
                              : vlSelf->__PVT___GEN_510);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__io_out;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first___05F36___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___1019(Vmycpu_top_Look_up_table_read_first___05F36* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_Look_up_table_read_first___05F36___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___1019\n"); );
    // Body
    vlSelf->__PVT__io_out = ((0x1ffU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? vlSelf->__PVT__btb_511
                              : vlSelf->__PVT___GEN_510);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__io_out;
}
