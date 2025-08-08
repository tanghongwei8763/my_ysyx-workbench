// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBus(c+1431,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1432,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1433,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1434,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1435,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1436,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1437,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1438,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1439,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1440,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1441,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1442,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1443,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1444,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1445,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1446,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1447,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1448,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1449,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1450,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBus(c+1431,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1432,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1433,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1434,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1435,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1436,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1437,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1438,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1439,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1440,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1441,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1442,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1443,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1444,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1445,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1446,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1447,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1448,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1449,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1450,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+599,"spi_sck", false,-1);
    tracep->declBus(c+600,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1451,"spi_mosi", false,-1);
    tracep->declBit(c+1452,"spi_miso", false,-1);
    tracep->declBit(c+1449,"uart_rx", false,-1);
    tracep->declBit(c+1450,"uart_tx", false,-1);
    tracep->declBit(c+1400,"psram_sck", false,-1);
    tracep->declBit(c+1401,"psram_ce_n", false,-1);
    tracep->declBus(c+1453,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1454,"sdram_clk", false,-1);
    tracep->declBit(c+1169,"sdram_cke", false,-1);
    tracep->declBit(c+1170,"sdram_cs", false,-1);
    tracep->declBit(c+1171,"sdram_ras", false,-1);
    tracep->declBit(c+1172,"sdram_cas", false,-1);
    tracep->declBit(c+1173,"sdram_we", false,-1);
    tracep->declBus(c+1402,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1174,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1175,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1193,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1431,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1432,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1433,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1434,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1435,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1436,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1437,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1438,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1439,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1440,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1441,"ps2_clk", false,-1);
    tracep->declBit(c+1442,"ps2_data", false,-1);
    tracep->declBus(c+1443,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1444,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1445,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1446,"vga_hsync", false,-1);
    tracep->declBit(c+1447,"vga_vsync", false,-1);
    tracep->declBit(c+1448,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBus(c+1343,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+23,"in_psel", false,-1);
    tracep->declBit(c+24,"in_penable", false,-1);
    tracep->declBus(c+1512,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1125,"in_pwrite", false,-1);
    tracep->declBus(c+1126,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1403,"in_pready", false,-1);
    tracep->declBus(c+1404,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1405,"in_pslverr", false,-1);
    tracep->declBus(c+1343,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+23,"out_psel", false,-1);
    tracep->declBit(c+24,"out_penable", false,-1);
    tracep->declBus(c+1512,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1125,"out_pwrite", false,-1);
    tracep->declBus(c+1126,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1403,"out_pready", false,-1);
    tracep->declBus(c+1404,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1405,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+23,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+24,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1125,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1343,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1512,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1126,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1403,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1405,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1404,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+504,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+505,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1125,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1343,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1512,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1126,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+601,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1513,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+602,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+506,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+507,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1125,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1344,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1512,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1126,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1514,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1515,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1516,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+508,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+509,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1125,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1345,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1512,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1126,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1517,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1518,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1519,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1346,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1347,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1125,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1345,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1512,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1126,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+603,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+604,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+605,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1348,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+510,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1125,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1343,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1512,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1126,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1455,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1513,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+25,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1349,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1350,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1125,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1345,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1512,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1126,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1351,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1513,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1456,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1352,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1353,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1125,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1344,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1512,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1126,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1457,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1513,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1458,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1354,"sel_0", false,-1);
    tracep->declBit(c+1355,"sel_1", false,-1);
    tracep->declBit(c+1356,"sel_2", false,-1);
    tracep->declBit(c+1357,"sel_3", false,-1);
    tracep->declBit(c+1358,"sel_4", false,-1);
    tracep->declBit(c+1359,"sel_5", false,-1);
    tracep->declBit(c+1360,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+26,"auto_in_awready", false,-1);
    tracep->declBit(c+27,"auto_in_awvalid", false,-1);
    tracep->declBus(c+28,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+29,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+30,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+31,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+26,"auto_in_wready", false,-1);
    tracep->declBit(c+32,"auto_in_wvalid", false,-1);
    tracep->declBus(c+33,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+34,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+35,"auto_in_bready", false,-1);
    tracep->declBit(c+1406,"auto_in_bvalid", false,-1);
    tracep->declBus(c+36,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1407,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+37,"auto_in_arready", false,-1);
    tracep->declBit(c+38,"auto_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+43,"auto_in_rready", false,-1);
    tracep->declBit(c+1408,"auto_in_rvalid", false,-1);
    tracep->declBus(c+44,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1459,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+23,"auto_out_psel", false,-1);
    tracep->declBit(c+24,"auto_out_penable", false,-1);
    tracep->declBit(c+1125,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1343,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1126,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1403,"auto_out_pready", false,-1);
    tracep->declBit(c+1405,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1404,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+24,"nodeOut_penable", false,-1);
    tracep->declBus(c+45,"state", false,-1, 1,0);
    tracep->declBit(c+37,"accept_read", false,-1);
    tracep->declBit(c+26,"accept_write", false,-1);
    tracep->declBit(c+46,"is_write_r", false,-1);
    tracep->declBit(c+1125,"is_write", false,-1);
    tracep->declBus(c+44,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+36,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+47,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+48,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+49,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+50,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1409,"resp", false,-1, 1,0);
    tracep->declBus(c+51,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1407,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1408,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+52,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1406,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+53,"auto_in_awready", false,-1);
    tracep->declBit(c+976,"auto_in_awvalid", false,-1);
    tracep->declBus(c+977,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+979,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+980,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+54,"auto_in_wready", false,-1);
    tracep->declBit(c+981,"auto_in_wvalid", false,-1);
    tracep->declBus(c+982,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+983,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+984,"auto_in_wlast", false,-1);
    tracep->declBit(c+471,"auto_in_bready", false,-1);
    tracep->declBit(c+55,"auto_in_bvalid", false,-1);
    tracep->declBus(c+56,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+57,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+58,"auto_in_arready", false,-1);
    tracep->declBit(c+985,"auto_in_arvalid", false,-1);
    tracep->declBus(c+986,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+987,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+988,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+989,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1460,"auto_in_rready", false,-1);
    tracep->declBit(c+59,"auto_in_rvalid", false,-1);
    tracep->declBus(c+60,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+63,"auto_in_rlast", false,-1);
    tracep->declBit(c+26,"auto_out_awready", false,-1);
    tracep->declBit(c+27,"auto_out_awvalid", false,-1);
    tracep->declBus(c+28,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+29,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+30,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+31,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+26,"auto_out_wready", false,-1);
    tracep->declBit(c+32,"auto_out_wvalid", false,-1);
    tracep->declBus(c+33,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+34,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+35,"auto_out_bready", false,-1);
    tracep->declBit(c+1406,"auto_out_bvalid", false,-1);
    tracep->declBus(c+36,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1407,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+37,"auto_out_arready", false,-1);
    tracep->declBit(c+38,"auto_out_arvalid", false,-1);
    tracep->declBus(c+39,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+43,"auto_out_rready", false,-1);
    tracep->declBit(c+1408,"auto_out_rvalid", false,-1);
    tracep->declBus(c+44,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1459,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+35,"io_enq_ready", false,-1);
    tracep->declBit(c+1406,"io_enq_valid", false,-1);
    tracep->declBus(c+36,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1407,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+471,"io_deq_ready", false,-1);
    tracep->declBit(c+55,"io_deq_valid", false,-1);
    tracep->declBus(c+56,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+57,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+64,"wrap", false,-1);
    tracep->declBit(c+65,"wrap_1", false,-1);
    tracep->declBit(c+66,"maybe_full", false,-1);
    tracep->declBit(c+67,"ptr_match", false,-1);
    tracep->declBit(c+68,"empty", false,-1);
    tracep->declBit(c+69,"full", false,-1);
    tracep->declBit(c+1410,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+65,"R0_addr", false,-1);
    tracep->declBit(c+1520,"R0_en", false,-1);
    tracep->declBit(c+1429,"R0_clk", false,-1);
    tracep->declBus(c+70,"R0_data", false,-1, 5,0);
    tracep->declBit(c+64,"W0_addr", false,-1);
    tracep->declBit(c+1410,"W0_en", false,-1);
    tracep->declBit(c+1429,"W0_clk", false,-1);
    tracep->declBus(c+1461,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+71+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+73,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+43,"io_enq_ready", false,-1);
    tracep->declBit(c+1408,"io_enq_valid", false,-1);
    tracep->declBus(c+44,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1459,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1407,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+1460,"io_deq_ready", false,-1);
    tracep->declBit(c+59,"io_deq_valid", false,-1);
    tracep->declBus(c+60,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+61,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+62,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+63,"io_deq_bits_last", false,-1);
    tracep->declBit(c+74,"wrap", false,-1);
    tracep->declBit(c+75,"wrap_1", false,-1);
    tracep->declBit(c+76,"maybe_full", false,-1);
    tracep->declBit(c+77,"ptr_match", false,-1);
    tracep->declBit(c+78,"empty", false,-1);
    tracep->declBit(c+79,"full", false,-1);
    tracep->declBit(c+1411,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+75,"R0_addr", false,-1);
    tracep->declBit(c+1520,"R0_en", false,-1);
    tracep->declBit(c+1429,"R0_clk", false,-1);
    tracep->declQuad(c+80,"R0_data", false,-1, 38,0);
    tracep->declBit(c+74,"W0_addr", false,-1);
    tracep->declBit(c+1411,"W0_en", false,-1);
    tracep->declBit(c+1429,"W0_clk", false,-1);
    tracep->declQuad(c+1462,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+82+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+86,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+58,"io_enq_ready", false,-1);
    tracep->declBit(c+985,"io_enq_valid", false,-1);
    tracep->declBus(c+986,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+987,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+988,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+989,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+37,"io_deq_ready", false,-1);
    tracep->declBit(c+38,"io_deq_valid", false,-1);
    tracep->declBus(c+39,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+40,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+41,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+42,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+87,"wrap", false,-1);
    tracep->declBit(c+88,"wrap_1", false,-1);
    tracep->declBit(c+89,"maybe_full", false,-1);
    tracep->declBit(c+90,"ptr_match", false,-1);
    tracep->declBit(c+91,"empty", false,-1);
    tracep->declBit(c+92,"full", false,-1);
    tracep->declBit(c+990,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+88,"R0_addr", false,-1);
    tracep->declBit(c+1520,"R0_en", false,-1);
    tracep->declBit(c+1429,"R0_clk", false,-1);
    tracep->declQuad(c+93,"R0_data", false,-1, 46,0);
    tracep->declBit(c+87,"W0_addr", false,-1);
    tracep->declBit(c+990,"W0_en", false,-1);
    tracep->declBit(c+1429,"W0_clk", false,-1);
    tracep->declQuad(c+991,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+95+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+99,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+53,"io_enq_ready", false,-1);
    tracep->declBit(c+976,"io_enq_valid", false,-1);
    tracep->declBus(c+977,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+978,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+979,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+980,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+26,"io_deq_ready", false,-1);
    tracep->declBit(c+27,"io_deq_valid", false,-1);
    tracep->declBus(c+28,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+29,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+30,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+31,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+100,"wrap", false,-1);
    tracep->declBit(c+101,"wrap_1", false,-1);
    tracep->declBit(c+102,"maybe_full", false,-1);
    tracep->declBit(c+103,"ptr_match", false,-1);
    tracep->declBit(c+104,"empty", false,-1);
    tracep->declBit(c+105,"full", false,-1);
    tracep->declBit(c+993,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+101,"R0_addr", false,-1);
    tracep->declBit(c+1520,"R0_en", false,-1);
    tracep->declBit(c+1429,"R0_clk", false,-1);
    tracep->declQuad(c+106,"R0_data", false,-1, 46,0);
    tracep->declBit(c+100,"W0_addr", false,-1);
    tracep->declBit(c+993,"W0_en", false,-1);
    tracep->declBit(c+1429,"W0_clk", false,-1);
    tracep->declQuad(c+994,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+108+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+112,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+54,"io_enq_ready", false,-1);
    tracep->declBit(c+981,"io_enq_valid", false,-1);
    tracep->declBus(c+982,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+983,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+984,"io_enq_bits_last", false,-1);
    tracep->declBit(c+26,"io_deq_ready", false,-1);
    tracep->declBit(c+32,"io_deq_valid", false,-1);
    tracep->declBus(c+33,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+34,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+113,"wrap", false,-1);
    tracep->declBit(c+114,"wrap_1", false,-1);
    tracep->declBit(c+115,"maybe_full", false,-1);
    tracep->declBit(c+116,"ptr_match", false,-1);
    tracep->declBit(c+117,"empty", false,-1);
    tracep->declBit(c+118,"full", false,-1);
    tracep->declBit(c+996,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+114,"R0_addr", false,-1);
    tracep->declBit(c+1520,"R0_en", false,-1);
    tracep->declBit(c+1429,"R0_clk", false,-1);
    tracep->declQuad(c+119,"R0_data", false,-1, 35,0);
    tracep->declBit(c+113,"W0_addr", false,-1);
    tracep->declBit(c+996,"W0_en", false,-1);
    tracep->declBit(c+1429,"W0_clk", false,-1);
    tracep->declQuad(c+997,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+121+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+125,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+126,"auto_in_awready", false,-1);
    tracep->declBit(c+512,"auto_in_awvalid", false,-1);
    tracep->declBus(c+513,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+514,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+515,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+516,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+517,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+127,"auto_in_wready", false,-1);
    tracep->declBit(c+518,"auto_in_wvalid", false,-1);
    tracep->declBus(c+519,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+520,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+521,"auto_in_wlast", false,-1);
    tracep->declBit(c+522,"auto_in_bready", false,-1);
    tracep->declBit(c+128,"auto_in_bvalid", false,-1);
    tracep->declBus(c+129,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+130,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+131,"auto_in_arready", false,-1);
    tracep->declBit(c+523,"auto_in_arvalid", false,-1);
    tracep->declBus(c+524,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+525,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+526,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+527,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+528,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+529,"auto_in_rready", false,-1);
    tracep->declBit(c+132,"auto_in_rvalid", false,-1);
    tracep->declBus(c+133,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+134,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+135,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+136,"auto_in_rlast", false,-1);
    tracep->declBit(c+999,"auto_out_awready", false,-1);
    tracep->declBit(c+1000,"auto_out_awvalid", false,-1);
    tracep->declBus(c+977,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+979,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+980,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1001,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1002,"auto_out_wready", false,-1);
    tracep->declBit(c+1003,"auto_out_wvalid", false,-1);
    tracep->declBus(c+982,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+983,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+984,"auto_out_wlast", false,-1);
    tracep->declBit(c+1004,"auto_out_bready", false,-1);
    tracep->declBit(c+137,"auto_out_bvalid", false,-1);
    tracep->declBus(c+129,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+138,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+139,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1005,"auto_out_arready", false,-1);
    tracep->declBit(c+1006,"auto_out_arvalid", false,-1);
    tracep->declBus(c+986,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+987,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+988,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+989,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1007,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+529,"auto_out_rready", false,-1);
    tracep->declBit(c+132,"auto_out_rvalid", false,-1);
    tracep->declBus(c+133,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+134,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+135,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+140,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+141,"auto_out_rlast", false,-1);
    tracep->declBit(c+1003,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+142,"w_idle", false,-1);
    tracep->declBit(c+1008,"in_awready", false,-1);
    tracep->declBit(c+143,"busy", false,-1);
    tracep->declBus(c+144,"r_addr", false,-1, 31,0);
    tracep->declBus(c+145,"r_len", false,-1, 7,0);
    tracep->declBus(c+1009,"len", false,-1, 7,0);
    tracep->declBus(c+1010,"addr", false,-1, 31,0);
    tracep->declBit(c+146,"busy_1", false,-1);
    tracep->declBus(c+147,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+148,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1011,"len_1", false,-1, 7,0);
    tracep->declBus(c+1012,"addr_1", false,-1, 31,0);
    tracep->declBit(c+149,"wbeats_latched", false,-1);
    tracep->declBit(c+1000,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1013,"wbeats_valid", false,-1);
    tracep->declBus(c+150,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1014,"w_todo", false,-1, 8,0);
    tracep->declBit(c+984,"w_last", false,-1);
    tracep->declBit(c+1004,"nodeOut_bready", false,-1);
    tracep->declBus(c+151,"error_0", false,-1, 1,0);
    tracep->declBus(c+152,"error_1", false,-1, 1,0);
    tracep->declBus(c+153,"error_2", false,-1, 1,0);
    tracep->declBus(c+154,"error_3", false,-1, 1,0);
    tracep->declBus(c+155,"error_4", false,-1, 1,0);
    tracep->declBus(c+156,"error_5", false,-1, 1,0);
    tracep->declBus(c+157,"error_6", false,-1, 1,0);
    tracep->declBus(c+158,"error_7", false,-1, 1,0);
    tracep->declBus(c+159,"error_8", false,-1, 1,0);
    tracep->declBus(c+160,"error_9", false,-1, 1,0);
    tracep->declBus(c+161,"error_10", false,-1, 1,0);
    tracep->declBus(c+162,"error_11", false,-1, 1,0);
    tracep->declBus(c+163,"error_12", false,-1, 1,0);
    tracep->declBus(c+164,"error_13", false,-1, 1,0);
    tracep->declBus(c+165,"error_14", false,-1, 1,0);
    tracep->declBus(c+166,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+131,"io_enq_ready", false,-1);
    tracep->declBit(c+523,"io_enq_valid", false,-1);
    tracep->declBus(c+524,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+525,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+526,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+527,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+528,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1015,"io_deq_ready", false,-1);
    tracep->declBit(c+1006,"io_deq_valid", false,-1);
    tracep->declBus(c+986,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1016,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1017,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+988,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+989,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+167,"ram", false,-1, 48,0);
    tracep->declBit(c+169,"full", false,-1);
    tracep->declBit(c+1006,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1018,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+126,"io_enq_ready", false,-1);
    tracep->declBit(c+512,"io_enq_valid", false,-1);
    tracep->declBus(c+513,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+514,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+515,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+516,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+517,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1019,"io_deq_ready", false,-1);
    tracep->declBit(c+1020,"io_deq_valid", false,-1);
    tracep->declBus(c+977,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1021,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1022,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+979,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+980,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+170,"ram", false,-1, 48,0);
    tracep->declBit(c+172,"full", false,-1);
    tracep->declBit(c+1020,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1023,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+127,"io_enq_ready", false,-1);
    tracep->declBit(c+518,"io_enq_valid", false,-1);
    tracep->declBus(c+519,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+520,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+521,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1024,"io_deq_ready", false,-1);
    tracep->declBit(c+1025,"io_deq_valid", false,-1);
    tracep->declBus(c+982,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+983,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1464,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+173,"ram", false,-1, 36,0);
    tracep->declBit(c+175,"full", false,-1);
    tracep->declBit(c+1025,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1026,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+1027,"auto_in_awready", false,-1);
    tracep->declBit(c+1028,"auto_in_awvalid", false,-1);
    tracep->declBus(c+977,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1029,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1030,"auto_in_wready", false,-1);
    tracep->declBit(c+1031,"auto_in_wvalid", false,-1);
    tracep->declBus(c+982,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+983,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1032,"auto_in_bready", false,-1);
    tracep->declBit(c+176,"auto_in_bvalid", false,-1);
    tracep->declBus(c+177,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1033,"auto_in_arready", false,-1);
    tracep->declBit(c+1034,"auto_in_arvalid", false,-1);
    tracep->declBus(c+986,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1036,"auto_in_rready", false,-1);
    tracep->declBit(c+179,"auto_in_rvalid", false,-1);
    tracep->declBus(c+180,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+181,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1033,"nodeIn_arready", false,-1);
    tracep->declBit(c+1027,"nodeIn_awready", false,-1);
    tracep->declBit(c+1037,"w_sel0", false,-1);
    tracep->declBit(c+176,"w_full", false,-1);
    tracep->declBus(c+177,"w_id", false,-1, 3,0);
    tracep->declBit(c+183,"r_sel1", false,-1);
    tracep->declBit(c+184,"w_sel1", false,-1);
    tracep->declBit(c+179,"r_full", false,-1);
    tracep->declBus(c+180,"r_id", false,-1, 3,0);
    tracep->declBit(c+1038,"ren", false,-1);
    tracep->declBit(c+185,"rdata_REG", false,-1);
    tracep->declBus(c+186,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+187,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+188,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+189,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1039,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1038,"R0_en", false,-1);
    tracep->declBit(c+1429,"R0_clk", false,-1);
    tracep->declBus(c+190,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1040,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1041,"W0_en", false,-1);
    tracep->declBit(c+1429,"W0_clk", false,-1);
    tracep->declBus(c+982,"W0_data", false,-1, 31,0);
    tracep->declBus(c+983,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+126,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+512,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+513,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+514,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+515,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+516,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+517,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+127,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+518,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+519,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+520,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+521,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+522,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+128,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+129,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+130,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+131,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+523,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+524,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+525,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+526,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+527,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+528,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+529,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+132,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+133,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+134,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+135,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+136,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+126,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+512,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+513,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+514,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+515,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+516,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+517,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+127,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+518,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+519,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+520,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+521,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+522,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+128,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+129,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+130,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+131,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+523,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+524,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+525,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+526,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+527,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+528,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+529,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+132,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+133,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+134,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+135,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+136,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+1042,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1043,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+977,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+979,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+980,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1002,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1003,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+982,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+983,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+984,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1004,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+137,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+129,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+138,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1044,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1045,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+986,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+987,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+988,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+989,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+529,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+132,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+133,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+134,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+135,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+141,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1027,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1028,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+977,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1029,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1030,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1031,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+982,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+983,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1032,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+176,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+177,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1033,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1034,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+986,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1036,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+179,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+180,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+181,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1046,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1047,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+191,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1048,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+986,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1049,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1465,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+192,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+193,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+194,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+53,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+976,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+977,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+979,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+980,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+54,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+981,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+982,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+983,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+984,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+471,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+55,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+56,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+57,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+58,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+985,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+986,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+987,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+988,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+989,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1460,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+59,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+60,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+63,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+137,"in_0_bvalid", false,-1);
    tracep->declBit(c+132,"in_0_rvalid", false,-1);
    tracep->declBit(c+1050,"in_0_wready", false,-1);
    tracep->declBit(c+1051,"in_0_awready", false,-1);
    tracep->declBit(c+1044,"in_0_arready", false,-1);
    tracep->declBit(c+1042,"anonIn_awready", false,-1);
    tracep->declBit(c+1052,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1053,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1054,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1055,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1056,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1057,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1058,"arSel", false,-1, 15,0);
    tracep->declBus(c+1059,"awSel", false,-1, 15,0);
    tracep->declBus(c+195,"rSel", false,-1, 15,0);
    tracep->declBus(c+196,"bSel", false,-1, 15,0);
    tracep->declBit(c+197,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+198,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+199,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+200,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+201,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+202,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+203,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+204,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+205,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+206,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+207,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+208,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+209,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+210,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+211,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+212,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+213,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+214,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+215,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+216,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+217,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+218,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+219,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+220,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+221,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+222,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+223,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+224,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+225,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+226,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+227,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+228,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+229,"latched", false,-1);
    tracep->declBit(c+1060,"in_0_awvalid", false,-1);
    tracep->declBit(c+1061,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1062,"in_0_wvalid", false,-1);
    tracep->declBit(c+230,"idle_3", false,-1);
    tracep->declBit(c+231,"anyValid", false,-1);
    tracep->declBus(c+232,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+233,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+234,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+235,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+236,"prefixOR_1", false,-1);
    tracep->declBit(c+237,"winner_3_1", false,-1);
    tracep->declBit(c+238,"winner_3_2", false,-1);
    tracep->declBit(c+239,"state_3_0", false,-1);
    tracep->declBit(c+240,"state_3_1", false,-1);
    tracep->declBit(c+241,"state_3_2", false,-1);
    tracep->declBit(c+242,"muxState_3_0", false,-1);
    tracep->declBit(c+243,"muxState_3_1", false,-1);
    tracep->declBit(c+244,"muxState_3_2", false,-1);
    tracep->declBit(c+245,"idle_4", false,-1);
    tracep->declBit(c+246,"anyValid_1", false,-1);
    tracep->declBus(c+247,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+248,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+249,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+250,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+251,"winner_4_0", false,-1);
    tracep->declBit(c+252,"winner_4_2", false,-1);
    tracep->declBit(c+253,"state_4_0", false,-1);
    tracep->declBit(c+254,"state_4_2", false,-1);
    tracep->declBit(c+255,"muxState_4_0", false,-1);
    tracep->declBit(c+256,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+1061,"io_enq_valid", false,-1);
    tracep->declBus(c+1063,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1064,"io_deq_ready", false,-1);
    tracep->declBit(c+1065,"io_deq_valid", false,-1);
    tracep->declBus(c+1066,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+258,"wrap", false,-1);
    tracep->declBit(c+259,"wrap_1", false,-1);
    tracep->declBit(c+260,"maybe_full", false,-1);
    tracep->declBit(c+261,"ptr_match", false,-1);
    tracep->declBit(c+262,"empty", false,-1);
    tracep->declBit(c+263,"full", false,-1);
    tracep->declBit(c+1065,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1067,"do_deq", false,-1);
    tracep->declBit(c+1068,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+259,"R0_addr", false,-1);
    tracep->declBit(c+1520,"R0_en", false,-1);
    tracep->declBit(c+1429,"R0_clk", false,-1);
    tracep->declBus(c+264,"R0_data", false,-1, 2,0);
    tracep->declBit(c+258,"W0_addr", false,-1);
    tracep->declBit(c+1068,"W0_en", false,-1);
    tracep->declBit(c+1429,"W0_clk", false,-1);
    tracep->declBus(c+1063,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+265+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+999,"auto_in_awready", false,-1);
    tracep->declBit(c+1000,"auto_in_awvalid", false,-1);
    tracep->declBus(c+977,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+979,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+980,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1001,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1002,"auto_in_wready", false,-1);
    tracep->declBit(c+1003,"auto_in_wvalid", false,-1);
    tracep->declBus(c+982,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+983,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+984,"auto_in_wlast", false,-1);
    tracep->declBit(c+1004,"auto_in_bready", false,-1);
    tracep->declBit(c+137,"auto_in_bvalid", false,-1);
    tracep->declBus(c+129,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+138,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+139,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1005,"auto_in_arready", false,-1);
    tracep->declBit(c+1006,"auto_in_arvalid", false,-1);
    tracep->declBus(c+986,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+987,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+988,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+989,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1007,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+529,"auto_in_rready", false,-1);
    tracep->declBit(c+132,"auto_in_rvalid", false,-1);
    tracep->declBus(c+133,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+134,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+135,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+140,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+141,"auto_in_rlast", false,-1);
    tracep->declBit(c+1042,"auto_out_awready", false,-1);
    tracep->declBit(c+1043,"auto_out_awvalid", false,-1);
    tracep->declBus(c+977,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+979,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+980,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1002,"auto_out_wready", false,-1);
    tracep->declBit(c+1003,"auto_out_wvalid", false,-1);
    tracep->declBus(c+982,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+983,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+984,"auto_out_wlast", false,-1);
    tracep->declBit(c+1004,"auto_out_bready", false,-1);
    tracep->declBit(c+137,"auto_out_bvalid", false,-1);
    tracep->declBus(c+129,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+138,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1044,"auto_out_arready", false,-1);
    tracep->declBit(c+1045,"auto_out_arvalid", false,-1);
    tracep->declBus(c+986,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+987,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+988,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+989,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+529,"auto_out_rready", false,-1);
    tracep->declBit(c+132,"auto_out_rvalid", false,-1);
    tracep->declBus(c+133,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+134,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+135,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+141,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+267,"io_enq_ready", false,-1);
    tracep->declBit(c+1069,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+472,"io_deq_ready", false,-1);
    tracep->declBit(c+268,"io_deq_valid", false,-1);
    tracep->declBit(c+269,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+268,"full", false,-1);
    tracep->declBit(c+269,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+270,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+271,"io_enq_ready", false,-1);
    tracep->declBit(c+1070,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+473,"io_deq_ready", false,-1);
    tracep->declBit(c+272,"io_deq_valid", false,-1);
    tracep->declBit(c+273,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+272,"full", false,-1);
    tracep->declBit(c+273,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+274,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+275,"io_enq_ready", false,-1);
    tracep->declBit(c+1071,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+474,"io_deq_ready", false,-1);
    tracep->declBit(c+276,"io_deq_valid", false,-1);
    tracep->declBit(c+277,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+276,"full", false,-1);
    tracep->declBit(c+277,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+278,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+279,"io_enq_ready", false,-1);
    tracep->declBit(c+1072,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+475,"io_deq_ready", false,-1);
    tracep->declBit(c+280,"io_deq_valid", false,-1);
    tracep->declBit(c+281,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+280,"full", false,-1);
    tracep->declBit(c+281,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+282,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+283,"io_enq_ready", false,-1);
    tracep->declBit(c+1073,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+476,"io_deq_ready", false,-1);
    tracep->declBit(c+284,"io_deq_valid", false,-1);
    tracep->declBit(c+285,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+284,"full", false,-1);
    tracep->declBit(c+285,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+286,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+287,"io_enq_ready", false,-1);
    tracep->declBit(c+1074,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+477,"io_deq_ready", false,-1);
    tracep->declBit(c+288,"io_deq_valid", false,-1);
    tracep->declBit(c+289,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+288,"full", false,-1);
    tracep->declBit(c+289,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+290,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+291,"io_enq_ready", false,-1);
    tracep->declBit(c+1075,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+478,"io_deq_ready", false,-1);
    tracep->declBit(c+292,"io_deq_valid", false,-1);
    tracep->declBit(c+293,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+292,"full", false,-1);
    tracep->declBit(c+293,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+294,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+295,"io_enq_ready", false,-1);
    tracep->declBit(c+1076,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+479,"io_deq_ready", false,-1);
    tracep->declBit(c+296,"io_deq_valid", false,-1);
    tracep->declBit(c+297,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+296,"full", false,-1);
    tracep->declBit(c+297,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+298,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+299,"io_enq_ready", false,-1);
    tracep->declBit(c+1077,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+480,"io_deq_ready", false,-1);
    tracep->declBit(c+300,"io_deq_valid", false,-1);
    tracep->declBit(c+301,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+300,"full", false,-1);
    tracep->declBit(c+301,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+302,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+303,"io_enq_ready", false,-1);
    tracep->declBit(c+1078,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+481,"io_deq_ready", false,-1);
    tracep->declBit(c+304,"io_deq_valid", false,-1);
    tracep->declBit(c+305,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+304,"full", false,-1);
    tracep->declBit(c+305,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+306,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+307,"io_enq_ready", false,-1);
    tracep->declBit(c+1079,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+482,"io_deq_ready", false,-1);
    tracep->declBit(c+308,"io_deq_valid", false,-1);
    tracep->declBit(c+309,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+308,"full", false,-1);
    tracep->declBit(c+309,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+310,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+311,"io_enq_ready", false,-1);
    tracep->declBit(c+1080,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+483,"io_deq_ready", false,-1);
    tracep->declBit(c+312,"io_deq_valid", false,-1);
    tracep->declBit(c+313,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+312,"full", false,-1);
    tracep->declBit(c+313,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+314,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+315,"io_enq_ready", false,-1);
    tracep->declBit(c+1081,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+484,"io_deq_ready", false,-1);
    tracep->declBit(c+316,"io_deq_valid", false,-1);
    tracep->declBit(c+317,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+316,"full", false,-1);
    tracep->declBit(c+317,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+318,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+319,"io_enq_ready", false,-1);
    tracep->declBit(c+1082,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+485,"io_deq_ready", false,-1);
    tracep->declBit(c+320,"io_deq_valid", false,-1);
    tracep->declBit(c+321,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+320,"full", false,-1);
    tracep->declBit(c+321,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+322,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+323,"io_enq_ready", false,-1);
    tracep->declBit(c+1083,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+486,"io_deq_ready", false,-1);
    tracep->declBit(c+324,"io_deq_valid", false,-1);
    tracep->declBit(c+325,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+324,"full", false,-1);
    tracep->declBit(c+325,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+326,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+327,"io_enq_ready", false,-1);
    tracep->declBit(c+1084,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+487,"io_deq_ready", false,-1);
    tracep->declBit(c+328,"io_deq_valid", false,-1);
    tracep->declBit(c+329,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+328,"full", false,-1);
    tracep->declBit(c+329,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+330,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+331,"io_enq_ready", false,-1);
    tracep->declBit(c+1085,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+488,"io_deq_ready", false,-1);
    tracep->declBit(c+332,"io_deq_valid", false,-1);
    tracep->declBit(c+333,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+332,"full", false,-1);
    tracep->declBit(c+333,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+334,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+335,"io_enq_ready", false,-1);
    tracep->declBit(c+1086,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+489,"io_deq_ready", false,-1);
    tracep->declBit(c+336,"io_deq_valid", false,-1);
    tracep->declBit(c+337,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+336,"full", false,-1);
    tracep->declBit(c+337,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+338,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+339,"io_enq_ready", false,-1);
    tracep->declBit(c+1087,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+490,"io_deq_ready", false,-1);
    tracep->declBit(c+340,"io_deq_valid", false,-1);
    tracep->declBit(c+341,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+340,"full", false,-1);
    tracep->declBit(c+341,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+342,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+343,"io_enq_ready", false,-1);
    tracep->declBit(c+1088,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+491,"io_deq_ready", false,-1);
    tracep->declBit(c+344,"io_deq_valid", false,-1);
    tracep->declBit(c+345,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+344,"full", false,-1);
    tracep->declBit(c+345,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+346,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+347,"io_enq_ready", false,-1);
    tracep->declBit(c+1089,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+492,"io_deq_ready", false,-1);
    tracep->declBit(c+348,"io_deq_valid", false,-1);
    tracep->declBit(c+349,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+348,"full", false,-1);
    tracep->declBit(c+349,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+350,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+351,"io_enq_ready", false,-1);
    tracep->declBit(c+1090,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+493,"io_deq_ready", false,-1);
    tracep->declBit(c+352,"io_deq_valid", false,-1);
    tracep->declBit(c+353,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+352,"full", false,-1);
    tracep->declBit(c+353,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+354,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+355,"io_enq_ready", false,-1);
    tracep->declBit(c+1091,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+494,"io_deq_ready", false,-1);
    tracep->declBit(c+356,"io_deq_valid", false,-1);
    tracep->declBit(c+357,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+356,"full", false,-1);
    tracep->declBit(c+357,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+358,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+359,"io_enq_ready", false,-1);
    tracep->declBit(c+1092,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+495,"io_deq_ready", false,-1);
    tracep->declBit(c+360,"io_deq_valid", false,-1);
    tracep->declBit(c+361,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+360,"full", false,-1);
    tracep->declBit(c+361,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+362,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+363,"io_enq_ready", false,-1);
    tracep->declBit(c+1093,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+496,"io_deq_ready", false,-1);
    tracep->declBit(c+364,"io_deq_valid", false,-1);
    tracep->declBit(c+365,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+364,"full", false,-1);
    tracep->declBit(c+365,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+366,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+367,"io_enq_ready", false,-1);
    tracep->declBit(c+1094,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+497,"io_deq_ready", false,-1);
    tracep->declBit(c+368,"io_deq_valid", false,-1);
    tracep->declBit(c+369,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+368,"full", false,-1);
    tracep->declBit(c+369,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+370,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+371,"io_enq_ready", false,-1);
    tracep->declBit(c+1095,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+498,"io_deq_ready", false,-1);
    tracep->declBit(c+372,"io_deq_valid", false,-1);
    tracep->declBit(c+373,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+372,"full", false,-1);
    tracep->declBit(c+373,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+374,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+375,"io_enq_ready", false,-1);
    tracep->declBit(c+1096,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+499,"io_deq_ready", false,-1);
    tracep->declBit(c+376,"io_deq_valid", false,-1);
    tracep->declBit(c+377,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+376,"full", false,-1);
    tracep->declBit(c+377,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+378,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+379,"io_enq_ready", false,-1);
    tracep->declBit(c+1097,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+500,"io_deq_ready", false,-1);
    tracep->declBit(c+380,"io_deq_valid", false,-1);
    tracep->declBit(c+381,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+380,"full", false,-1);
    tracep->declBit(c+381,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+382,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+383,"io_enq_ready", false,-1);
    tracep->declBit(c+1098,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+501,"io_deq_ready", false,-1);
    tracep->declBit(c+384,"io_deq_valid", false,-1);
    tracep->declBit(c+385,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+384,"full", false,-1);
    tracep->declBit(c+385,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+386,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+387,"io_enq_ready", false,-1);
    tracep->declBit(c+1099,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+502,"io_deq_ready", false,-1);
    tracep->declBit(c+388,"io_deq_valid", false,-1);
    tracep->declBit(c+389,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+388,"full", false,-1);
    tracep->declBit(c+389,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+390,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+391,"io_enq_ready", false,-1);
    tracep->declBit(c+1100,"io_enq_valid", false,-1);
    tracep->declBit(c+1007,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+503,"io_deq_ready", false,-1);
    tracep->declBit(c+392,"io_deq_valid", false,-1);
    tracep->declBit(c+393,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+392,"full", false,-1);
    tracep->declBit(c+393,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+394,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1466,"reset", false,-1);
    tracep->declBit(c+126,"auto_master_out_awready", false,-1);
    tracep->declBit(c+512,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+513,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+514,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+515,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+516,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+517,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+127,"auto_master_out_wready", false,-1);
    tracep->declBit(c+518,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+519,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+520,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+521,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+522,"auto_master_out_bready", false,-1);
    tracep->declBit(c+128,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+129,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+130,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+131,"auto_master_out_arready", false,-1);
    tracep->declBit(c+523,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+524,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+525,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+526,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+527,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+528,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+529,"auto_master_out_rready", false,-1);
    tracep->declBit(c+132,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+133,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+134,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+135,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+136,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1466,"reset", false,-1);
    tracep->declBit(c+1513,"io_interrupt", false,-1);
    tracep->declBit(c+126,"io_master_awready", false,-1);
    tracep->declBit(c+512,"io_master_awvalid", false,-1);
    tracep->declBus(c+514,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+513,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+515,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+516,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+517,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+127,"io_master_wready", false,-1);
    tracep->declBit(c+518,"io_master_wvalid", false,-1);
    tracep->declBus(c+519,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+520,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+521,"io_master_wlast", false,-1);
    tracep->declBit(c+522,"io_master_bready", false,-1);
    tracep->declBit(c+128,"io_master_bvalid", false,-1);
    tracep->declBus(c+130,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+129,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+131,"io_master_arready", false,-1);
    tracep->declBit(c+523,"io_master_arvalid", false,-1);
    tracep->declBus(c+525,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+524,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+526,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+527,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+528,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+529,"io_master_rready", false,-1);
    tracep->declBit(c+132,"io_master_rvalid", false,-1);
    tracep->declBus(c+135,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+134,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+136,"io_master_rlast", false,-1);
    tracep->declBus(c+133,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1513,"io_slave_awready", false,-1);
    tracep->declBit(c+1513,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1521,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1522,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1523,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1524,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1525,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1513,"io_slave_wready", false,-1);
    tracep->declBit(c+1513,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1521,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1522,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1513,"io_slave_wlast", false,-1);
    tracep->declBit(c+1513,"io_slave_bready", false,-1);
    tracep->declBit(c+1513,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1525,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1522,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1513,"io_slave_arready", false,-1);
    tracep->declBit(c+1513,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1521,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1522,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1523,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1524,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1525,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1513,"io_slave_rready", false,-1);
    tracep->declBit(c+1513,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1525,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1521,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1513,"io_slave_rlast", false,-1);
    tracep->declBus(c+1522,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1526,"MSTATUS", false,-1, 11,0);
    tracep->declBus(c+1527,"MTVEC", false,-1, 11,0);
    tracep->declBus(c+1528,"MEPC", false,-1, 11,0);
    tracep->declBus(c+1529,"MCAUSE", false,-1, 11,0);
    tracep->declBus(c+1530,"MVENDORID", false,-1, 11,0);
    tracep->declBus(c+1531,"MARCHID", false,-1, 11,0);
    tracep->declQuad(c+908,"eu_to_lu_bus", false,-1, 63,0);
    tracep->declQuad(c+530,"wu_to_gu_bus", false,-1, 32,0);
    tracep->declQuad(c+1196,"du_to_gu_bus", false,-1, 54,0);
    tracep->declArray(c+1467,"gu_to_eu_bus", false,-1, 127,0);
    tracep->declQuad(c+1198,"du_to_eu_bus", false,-1, 58,0);
    tracep->declBus(c+1200,"du_to_lu_bus", false,-1, 4,0);
    tracep->declBus(c+1201,"du_to_wu_bus", false,-1, 7,0);
    tracep->declQuad(c+532,"lu_to_wu_bus", false,-1, 63,0);
    tracep->declBus(c+1361,"pc", false,-1, 31,0);
    tracep->declBus(c+534,"inst", false,-1, 31,0);
    tracep->declBus(c+910,"dnpc", false,-1, 31,0);
    tracep->declBus(c+1128,"mtvec", false,-1, 31,0);
    tracep->declBus(c+1129,"mepc", false,-1, 31,0);
    tracep->declBus(c+395,"mstatus", false,-1, 31,0);
    tracep->declBus(c+396,"mcause", false,-1, 31,0);
    tracep->declBus(c+397,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+398,"marchid", false,-1, 31,0);
    tracep->declBit(c+1202,"idu_valid", false,-1);
    tracep->declBit(c+1203,"idu_ready", false,-1);
    tracep->declBit(c+911,"exu_valid", false,-1);
    tracep->declBit(c+1471,"exu_ready", false,-1);
    tracep->declBit(c+535,"lsu_valid", false,-1);
    tracep->declBit(c+1204,"lsu_ready", false,-1);
    tracep->declBit(c+536,"wbu_ready", false,-1);
    tracep->declBit(c+537,"wbu_valid", false,-1);
    tracep->declBit(c+538,"gpr_valid", false,-1);
    tracep->declBit(c+539,"gpr_ready", false,-1);
    tracep->declBit(c+1101,"ifu_arready", false,-1);
    tracep->declBit(c+540,"ifu_arvalid", false,-1);
    tracep->declBus(c+541,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1532,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1533,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1534,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1535,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+542,"ifu_rready", false,-1);
    tracep->declBit(c+1395,"ifu_rvalid", false,-1);
    tracep->declBus(c+1102,"ifu_rresp", false,-1, 1,0);
    tracep->declBus(c+1396,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+1103,"ifu_rlast", false,-1);
    tracep->declBus(c+1104,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+1105,"lsu_awready", false,-1);
    tracep->declBit(c+543,"lsu_awvalid", false,-1);
    tracep->declBus(c+544,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1536,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1537,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1538,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1539,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1106,"lsu_wready", false,-1);
    tracep->declBit(c+545,"lsu_wvalid", false,-1);
    tracep->declBus(c+546,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+547,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1540,"lsu_wlast", false,-1);
    tracep->declBit(c+548,"lsu_bready", false,-1);
    tracep->declBit(c+1107,"lsu_bvalid", false,-1);
    tracep->declBus(c+1108,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1109,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1110,"lsu_arready", false,-1);
    tracep->declBit(c+549,"lsu_arvalid", false,-1);
    tracep->declBus(c+550,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1541,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1542,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1543,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1544,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+551,"lsu_rready", false,-1);
    tracep->declBit(c+1111,"lsu_rvalid", false,-1);
    tracep->declBus(c+1112,"lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+1113,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+1114,"lsu_rlast", false,-1);
    tracep->declBus(c+1115,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+552,"clint_arready", false,-1);
    tracep->declBit(c+553,"clint_arvalid", false,-1);
    tracep->declBus(c+554,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+555,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+556,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+557,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+558,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+559,"clint_rready", false,-1);
    tracep->declBit(c+560,"clint_rvalid", false,-1);
    tracep->declBus(c+561,"clint_rresp", false,-1, 1,0);
    tracep->declBus(c+562,"clint_rdata", false,-1, 31,0);
    tracep->declBit(c+1545,"clint_rlast", false,-1);
    tracep->declBus(c+1546,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+563,"ifu_access_fault", false,-1);
    tracep->declBit(c+564,"lsu_access_fault", false,-1);
    tracep->declBus(c+1397,"csr_wgpr_data", false,-1, 31,0);
    tracep->declBus(c+1398,"csr_wcsr_data", false,-1, 31,0);
    tracep->declBit(c+1205,"inst_s", false,-1);
    tracep->declBit(c+1206,"inst_l", false,-1);
    tracep->declBit(c+1207,"gpr_we", false,-1);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1548,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+910,"din", false,-1, 31,0);
    tracep->declBus(c+1361,"dout", false,-1, 31,0);
    tracep->declBit(c+537,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_cpu ");
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBit(c+1206,"inst_l", false,-1);
    tracep->declBit(c+1205,"inst_s", false,-1);
    tracep->declBit(c+1202,"idu_valid", false,-1);
    tracep->declBit(c+1204,"lsu_ready", false,-1);
    tracep->declBit(c+911,"exu_valid", false,-1);
    tracep->declBit(c+1471,"exu_ready", false,-1);
    tracep->declBus(c+1361,"pc", false,-1, 31,0);
    tracep->declArray(c+1467,"gu_to_eu_bus", false,-1, 127,0);
    tracep->declQuad(c+1198,"du_to_eu_bus", false,-1, 58,0);
    tracep->declQuad(c+908,"eu_to_lu_bus", false,-1, 63,0);
    tracep->declBus(c+910,"dnpc", false,-1, 31,0);
    tracep->declBus(c+1549,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1550,"BUSY", false,-1, 0,0);
    tracep->declBit(c+912,"state", false,-1);
    tracep->declBit(c+1472,"next_state", false,-1);
    tracep->declBus(c+1362,"snpc", false,-1, 31,0);
    tracep->declQuad(c+913,"du_to_eu_bus_r", false,-1, 58,0);
    tracep->declArray(c+915,"gu_to_eu_bus_r", false,-1, 127,0);
    tracep->declBus(c+919,"imm", false,-1, 31,0);
    tracep->declBus(c+920,"alu_op", false,-1, 16,0);
    tracep->declBit(c+921,"src1_is_pc", false,-1);
    tracep->declBit(c+922,"src2_is_imm", false,-1);
    tracep->declBit(c+923,"is_pc_jump", false,-1);
    tracep->declBit(c+924,"double_cal", false,-1);
    tracep->declBit(c+925,"ebreak", false,-1);
    tracep->declBit(c+926,"inst_not_realize", false,-1);
    tracep->declBit(c+927,"ecall_en", false,-1);
    tracep->declBit(c+928,"mret_en", false,-1);
    tracep->declBit(c+929,"csrrs_op", false,-1);
    tracep->declBit(c+930,"csrrw_op", false,-1);
    tracep->declBus(c+931,"src1", false,-1, 31,0);
    tracep->declBus(c+932,"src2", false,-1, 31,0);
    tracep->declBus(c+933,"mtvec", false,-1, 31,0);
    tracep->declBus(c+934,"mepc", false,-1, 31,0);
    tracep->declBus(c+1473,"dnpc_r", false,-1, 31,0);
    tracep->declBus(c+1474,"result", false,-1, 31,0);
    tracep->declBus(c+1426,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+935,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+931,"alu_src3", false,-1, 31,0);
    tracep->declBus(c+932,"alu_src4", false,-1, 31,0);
    tracep->declBus(c+1427,"alu_result1", false,-1, 31,0);
    tracep->declBus(c+936,"alu_result2", false,-1, 31,0);
    tracep->pushNamePrefix("alu_cpu ");
    tracep->declBit(c+924,"double_cal", false,-1);
    tracep->declBus(c+920,"alu_op", false,-1, 16,0);
    tracep->declBus(c+1426,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+935,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+931,"alu_src3", false,-1, 31,0);
    tracep->declBus(c+932,"alu_src4", false,-1, 31,0);
    tracep->declBus(c+1427,"alu_result1", false,-1, 31,0);
    tracep->declBus(c+936,"alu_result2", false,-1, 31,0);
    tracep->declBit(c+937,"op_add", false,-1);
    tracep->declBit(c+938,"op_sub", false,-1);
    tracep->declBit(c+939,"op_slt", false,-1);
    tracep->declBit(c+940,"op_sltu", false,-1);
    tracep->declBit(c+941,"op_and", false,-1);
    tracep->declBit(c+942,"op_or", false,-1);
    tracep->declBit(c+943,"op_xor", false,-1);
    tracep->declBit(c+944,"op_sll", false,-1);
    tracep->declBit(c+945,"op_srl", false,-1);
    tracep->declBit(c+946,"op_sra", false,-1);
    tracep->declBit(c+947,"op_lui", false,-1);
    tracep->declBit(c+948,"op_bne", false,-1);
    tracep->declBit(c+949,"op_beq", false,-1);
    tracep->declBit(c+950,"op_bge", false,-1);
    tracep->declBit(c+951,"op_bgeu", false,-1);
    tracep->declBit(c+952,"op_blt", false,-1);
    tracep->declBit(c+953,"op_bltu", false,-1);
    tracep->declBus(c+1428,"add_sub_result", false,-1, 31,0);
    tracep->declBus(c+966,"slt_result", false,-1, 31,0);
    tracep->declBus(c+967,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+968,"and_result", false,-1, 31,0);
    tracep->declBus(c+969,"or_result", false,-1, 31,0);
    tracep->declBus(c+970,"xor_result", false,-1, 31,0);
    tracep->declBus(c+935,"lui_result", false,-1, 31,0);
    tracep->declBus(c+971,"sll_result", false,-1, 31,0);
    tracep->declQuad(c+972,"sr64_result", false,-1, 63,0);
    tracep->declBus(c+974,"sr_result", false,-1, 31,0);
    tracep->declBus(c+1551,"aupic_result", false,-1, 31,0);
    tracep->declBus(c+954,"beq_result", false,-1, 31,0);
    tracep->declBus(c+955,"blt_result", false,-1, 31,0);
    tracep->declBus(c+956,"bltu_result", false,-1, 31,0);
    tracep->declBus(c+957,"bge_result", false,-1, 31,0);
    tracep->declBus(c+958,"bgeu_result", false,-1, 31,0);
    tracep->declBus(c+959,"bne_result", false,-1, 31,0);
    tracep->declBus(c+1426,"adder_a", false,-1, 31,0);
    tracep->declBus(c+960,"adder_b", false,-1, 31,0);
    tracep->declBus(c+931,"adder_c", false,-1, 31,0);
    tracep->declBus(c+961,"adder_d", false,-1, 31,0);
    tracep->declBit(c+962,"adder_cin", false,-1);
    tracep->declBit(c+963,"adder_cin1", false,-1);
    tracep->declBus(c+1428,"adder_result", false,-1, 31,0);
    tracep->declBus(c+964,"adder_result1", false,-1, 31,0);
    tracep->declBit(c+975,"adder_cout", false,-1);
    tracep->declBit(c+965,"adder_cout1", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gpr_cpu ");
    tracep->declBit(c+1202,"idu_valid", false,-1);
    tracep->declBit(c+537,"wbu_valid", false,-1);
    tracep->declBit(c+1207,"gpr_we", false,-1);
    tracep->declBit(c+1471,"exu_ready", false,-1);
    tracep->declBit(c+539,"gpr_ready", false,-1);
    tracep->declBit(c+538,"gpr_valid", false,-1);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+1398,"csr_wcsr_data", false,-1, 31,0);
    tracep->declQuad(c+530,"wu_to_gu_bus", false,-1, 32,0);
    tracep->declQuad(c+1196,"du_to_gu_bus", false,-1, 54,0);
    tracep->declArray(c+1467,"gu_to_eu_bus", false,-1, 127,0);
    tracep->declBus(c+1128,"mtvec", false,-1, 31,0);
    tracep->declBus(c+1129,"mepc", false,-1, 31,0);
    tracep->declBus(c+395,"mstatus", false,-1, 31,0);
    tracep->declBus(c+396,"mcause", false,-1, 31,0);
    tracep->declBus(c+397,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+398,"marchid", false,-1, 31,0);
    tracep->declBus(c+1549,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1550,"BUSY", false,-1, 0,0);
    tracep->declBit(c+565,"state", false,-1);
    tracep->declBit(c+1475,"next_state", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1130+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declQuad(c+566,"wu_to_gu_bus_r", false,-1, 32,0);
    tracep->declBus(c+568,"gpr_wdata", false,-1, 31,0);
    tracep->declBit(c+569,"gpr_wen", false,-1);
    tracep->declBus(c+1208,"pc", false,-1, 31,0);
    tracep->declBus(c+1209,"rd", false,-1, 4,0);
    tracep->declBus(c+1210,"rs1", false,-1, 4,0);
    tracep->declBus(c+1211,"rs2", false,-1, 4,0);
    tracep->declBit(c+1212,"csrs_mtvec_wen", false,-1);
    tracep->declBit(c+1213,"csrs_mepc_wen", false,-1);
    tracep->declBit(c+1214,"csrs_mstatus_wen", false,-1);
    tracep->declBit(c+1215,"csrs_mcause_wen", false,-1);
    tracep->declBit(c+1216,"csrs_mvendorid_wen", false,-1);
    tracep->declBit(c+1217,"csrs_marchid_wen", false,-1);
    tracep->declBit(c+1218,"ecall_en", false,-1);
    tracep->declBit(c+1219,"mret_en", false,-1);
    tracep->declBus(c+1399,"src1", false,-1, 31,0);
    tracep->declBus(c+1476,"src2", false,-1, 31,0);
    tracep->declBit(c+1220,"mepc_wen", false,-1);
    tracep->declBit(c+1221,"mcause_wen", false,-1);
    tracep->declBit(c+1222,"mstatus_wen", false,-1);
    tracep->declBus(c+1477,"mepc_data", false,-1, 31,0);
    tracep->declBus(c+1478,"mcause_data", false,-1, 31,0);
    tracep->declBus(c+1479,"mstatus_data", false,-1, 31,0);
    tracep->pushNamePrefix("CSRS_cause ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+1478,"din", false,-1, 31,0);
    tracep->declBus(c+396,"dout", false,-1, 31,0);
    tracep->declBit(c+1223,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRS_marchid ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1552,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+1398,"din", false,-1, 31,0);
    tracep->declBus(c+398,"dout", false,-1, 31,0);
    tracep->declBit(c+1513,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRS_mepc ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+1477,"din", false,-1, 31,0);
    tracep->declBus(c+1129,"dout", false,-1, 31,0);
    tracep->declBit(c+1224,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRS_mstatus ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1553,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+1479,"din", false,-1, 31,0);
    tracep->declBus(c+395,"dout", false,-1, 31,0);
    tracep->declBit(c+1225,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRS_mtvec ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+1398,"din", false,-1, 31,0);
    tracep->declBus(c+1128,"dout", false,-1, 31,0);
    tracep->declBit(c+1226,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRS_mvendorid ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1554,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+1398,"din", false,-1, 31,0);
    tracep->declBus(c+397,"dout", false,-1, 31,0);
    tracep->declBit(c+1513,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR32[0] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+399,"dout", false,-1, 31,0);
    tracep->declBit(c+1227,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[10] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+400,"dout", false,-1, 31,0);
    tracep->declBit(c+1228,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[11] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+401,"dout", false,-1, 31,0);
    tracep->declBit(c+1229,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[12] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+402,"dout", false,-1, 31,0);
    tracep->declBit(c+1230,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[13] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+403,"dout", false,-1, 31,0);
    tracep->declBit(c+1231,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[14] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+404,"dout", false,-1, 31,0);
    tracep->declBit(c+1232,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[15] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+405,"dout", false,-1, 31,0);
    tracep->declBit(c+1233,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[1] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+406,"dout", false,-1, 31,0);
    tracep->declBit(c+1234,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[2] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+407,"dout", false,-1, 31,0);
    tracep->declBit(c+1235,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[3] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+408,"dout", false,-1, 31,0);
    tracep->declBit(c+1236,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[4] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+409,"dout", false,-1, 31,0);
    tracep->declBit(c+1237,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[5] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+410,"dout", false,-1, 31,0);
    tracep->declBit(c+1238,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[6] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+411,"dout", false,-1, 31,0);
    tracep->declBit(c+1239,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[7] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+412,"dout", false,-1, 31,0);
    tracep->declBit(c+1240,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[8] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+413,"dout", false,-1, 31,0);
    tracep->declBit(c+1241,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[9] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+1547,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+568,"din", false,-1, 31,0);
    tracep->declBus(c+414,"dout", false,-1, 31,0);
    tracep->declBit(c+1242,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu_cpu ");
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+1361,"pc", false,-1, 31,0);
    tracep->declBus(c+1396,"inst", false,-1, 31,0);
    tracep->declBit(c+1395,"ifu_rvalid", false,-1);
    tracep->declBit(c+1471,"exu_ready", false,-1);
    tracep->declBit(c+1202,"idu_valid", false,-1);
    tracep->declBit(c+1203,"idu_ready", false,-1);
    tracep->declBit(c+1206,"inst_l", false,-1);
    tracep->declBit(c+1205,"inst_s", false,-1);
    tracep->declBit(c+1207,"gpr_we", false,-1);
    tracep->declQuad(c+1198,"du_to_eu_bus", false,-1, 58,0);
    tracep->declQuad(c+1196,"du_to_gu_bus", false,-1, 54,0);
    tracep->declBus(c+1200,"du_to_lu_bus", false,-1, 4,0);
    tracep->declBus(c+1201,"du_to_wu_bus", false,-1, 7,0);
    tracep->declBus(c+1526,"MSTATUS", false,-1, 11,0);
    tracep->declBus(c+1527,"MTVEC", false,-1, 11,0);
    tracep->declBus(c+1528,"MEPC", false,-1, 11,0);
    tracep->declBus(c+1529,"MCAUSE", false,-1, 11,0);
    tracep->declBus(c+1530,"MVENDORID", false,-1, 11,0);
    tracep->declBus(c+1531,"MARCHID", false,-1, 11,0);
    tracep->declBus(c+1549,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1550,"BUSY", false,-1, 0,0);
    tracep->declBit(c+1243,"state", false,-1);
    tracep->declBit(c+1480,"next_state", false,-1);
    tracep->declBus(c+1244,"inst_r", false,-1, 31,0);
    tracep->declBus(c+1245,"rs1", false,-1, 4,0);
    tracep->declBus(c+1246,"rs2", false,-1, 4,0);
    tracep->declBus(c+1247,"rd", false,-1, 4,0);
    tracep->declBus(c+1248,"imm", false,-1, 31,0);
    tracep->declBus(c+1249,"alu_op", false,-1, 16,0);
    tracep->declBit(c+1250,"gpr_we_r", false,-1);
    tracep->declBit(c+1251,"rlsu_we", false,-1);
    tracep->declBit(c+1252,"wlsu_we", false,-1);
    tracep->declBit(c+1253,"bit_sext", false,-1);
    tracep->declBit(c+1254,"half_sext", false,-1);
    tracep->declBus(c+1255,"lw_lh_lb", false,-1, 2,0);
    tracep->declBus(c+1256,"sw_sh_sb", false,-1, 2,0);
    tracep->declBit(c+1257,"src1_is_pc", false,-1);
    tracep->declBit(c+1258,"src2_is_imm", false,-1);
    tracep->declBit(c+1259,"is_pc_jump", false,-1);
    tracep->declBit(c+1260,"double_cal", false,-1);
    tracep->declBit(c+1261,"ebreak", false,-1);
    tracep->declBit(c+1262,"inst_not_realize", false,-1);
    tracep->declBit(c+1263,"csr_w_gpr_we", false,-1);
    tracep->declBit(c+1264,"csrrw_op", false,-1);
    tracep->declBit(c+1265,"csrrs_op", false,-1);
    tracep->declBit(c+1266,"ecall_en", false,-1);
    tracep->declBit(c+1267,"mret_en", false,-1);
    tracep->declBit(c+1268,"is_csr_op", false,-1);
    tracep->declBit(c+1269,"csrs_mtvec_wen", false,-1);
    tracep->declBit(c+1270,"csrs_mepc_wen", false,-1);
    tracep->declBit(c+1271,"csrs_mstatus_wen", false,-1);
    tracep->declBit(c+1272,"csrs_mcause_wen", false,-1);
    tracep->declBit(c+1273,"csrs_mvendorid_wen", false,-1);
    tracep->declBit(c+1274,"csrs_marchid_wen", false,-1);
    tracep->declBus(c+1275,"opcode_31_25", false,-1, 6,0);
    tracep->declBus(c+1276,"opcode_31_26", false,-1, 5,0);
    tracep->declBus(c+1277,"opcode_14_12", false,-1, 2,0);
    tracep->declBus(c+1278,"opcode_06_00", false,-1, 6,0);
    tracep->declBus(c+1279,"immI", false,-1, 31,0);
    tracep->declBus(c+1280,"immS", false,-1, 31,0);
    tracep->declBus(c+1281,"immB", false,-1, 31,0);
    tracep->declBus(c+1282,"immU", false,-1, 31,0);
    tracep->declBus(c+1283,"immJ", false,-1, 31,0);
    tracep->declArray(c+1284,"opcode_31_25_d", false,-1, 127,0);
    tracep->declQuad(c+1288,"opcode_31_26_d", false,-1, 63,0);
    tracep->declBus(c+1290,"opcode_14_12_d", false,-1, 7,0);
    tracep->declArray(c+1291,"opcode_06_00_d", false,-1, 127,0);
    tracep->declBus(c+1295,"rs1_d", false,-1, 31,0);
    tracep->declBus(c+1296,"rs2_d", false,-1, 31,0);
    tracep->declBus(c+1297,"rd_d", false,-1, 31,0);
    tracep->declBit(c+1555,"rw_word_1", false,-1);
    tracep->declBit(c+1556,"rw_word_2", false,-1);
    tracep->declBit(c+1557,"rw_word_4", false,-1);
    tracep->declBit(c+1298,"inst_add", false,-1);
    tracep->declBit(c+1299,"inst_and", false,-1);
    tracep->declBit(c+1300,"inst_or", false,-1);
    tracep->declBit(c+1301,"inst_ori", false,-1);
    tracep->declBit(c+1302,"inst_xor", false,-1);
    tracep->declBit(c+1303,"inst_xori", false,-1);
    tracep->declBit(c+1304,"inst_sub", false,-1);
    tracep->declBit(c+1305,"inst_slt", false,-1);
    tracep->declBit(c+1306,"inst_sltu", false,-1);
    tracep->declBit(c+1307,"inst_addi", false,-1);
    tracep->declBit(c+1308,"inst_andi", false,-1);
    tracep->declBit(c+1309,"inst_jarl", false,-1);
    tracep->declBit(c+1253,"inst_lb", false,-1);
    tracep->declBit(c+1310,"inst_lbu", false,-1);
    tracep->declBit(c+1254,"inst_lh", false,-1);
    tracep->declBit(c+1311,"inst_lhu", false,-1);
    tracep->declBit(c+1312,"inst_lw", false,-1);
    tracep->declBit(c+1313,"inst_sll", false,-1);
    tracep->declBit(c+1314,"inst_slli", false,-1);
    tracep->declBit(c+1315,"inst_sltiu", false,-1);
    tracep->declBit(c+1316,"inst_sra", false,-1);
    tracep->declBit(c+1317,"inst_srai", false,-1);
    tracep->declBit(c+1318,"inst_srl", false,-1);
    tracep->declBit(c+1319,"inst_srli", false,-1);
    tracep->declBit(c+1264,"inst_csrrw", false,-1);
    tracep->declBit(c+1265,"inst_csrrs", false,-1);
    tracep->declBit(c+1266,"inst_ecall", false,-1);
    tracep->declBit(c+1267,"inst_mret", false,-1);
    tracep->declBit(c+1320,"inst_sb", false,-1);
    tracep->declBit(c+1321,"inst_sh", false,-1);
    tracep->declBit(c+1322,"inst_sw", false,-1);
    tracep->declBit(c+1323,"inst_beq", false,-1);
    tracep->declBit(c+1324,"inst_bne", false,-1);
    tracep->declBit(c+1325,"inst_bge", false,-1);
    tracep->declBit(c+1326,"inst_bgeu", false,-1);
    tracep->declBit(c+1327,"inst_blt", false,-1);
    tracep->declBit(c+1328,"inst_bltu", false,-1);
    tracep->declBit(c+1329,"inst_auipc", false,-1);
    tracep->declBit(c+1330,"inst_lui", false,-1);
    tracep->declBit(c+1331,"inst_jal", false,-1);
    tracep->declBit(c+1261,"inst_ebreak", false,-1);
    tracep->declBit(c+1332,"inst_waiting", false,-1);
    tracep->declBit(c+1333,"TYPE_R", false,-1);
    tracep->declBit(c+1334,"TYPE_I", false,-1);
    tracep->declBit(c+1252,"TYPE_S", false,-1);
    tracep->declBit(c+1260,"TYPE_B", false,-1);
    tracep->declBit(c+1335,"TYPE_U", false,-1);
    tracep->declBit(c+1331,"TYPE_J", false,-1);
    tracep->declBit(c+1336,"TYPE_N", false,-1);
    tracep->declBit(c+1558,"TYPE_W", false,-1);
    tracep->pushNamePrefix("u_dec0 ");
    tracep->declBus(c+1275,"in", false,-1, 6,0);
    tracep->declArray(c+1284,"out", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec1 ");
    tracep->declBus(c+1276,"in", false,-1, 5,0);
    tracep->declQuad(c+1288,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec2 ");
    tracep->declBus(c+1277,"in", false,-1, 2,0);
    tracep->declBus(c+1290,"out", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec3 ");
    tracep->declBus(c+1278,"in", false,-1, 6,0);
    tracep->declArray(c+1291,"out", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec4 ");
    tracep->declBus(c+1245,"in", false,-1, 4,0);
    tracep->declBus(c+1295,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec5 ");
    tracep->declBus(c+1246,"in", false,-1, 4,0);
    tracep->declBus(c+1296,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec6 ");
    tracep->declBus(c+1247,"in", false,-1, 4,0);
    tracep->declBus(c+1297,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_cpu ");
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+1361,"pc", false,-1, 31,0);
    tracep->declBit(c+1203,"idu_ready", false,-1);
    tracep->declBus(c+534,"inst", false,-1, 31,0);
    tracep->declBit(c+563,"access_fault", false,-1);
    tracep->declBit(c+1101,"arready", false,-1);
    tracep->declBit(c+540,"arvalid", false,-1);
    tracep->declBus(c+541,"araddr", false,-1, 31,0);
    tracep->declBus(c+1532,"arid", false,-1, 3,0);
    tracep->declBus(c+1533,"arlen", false,-1, 7,0);
    tracep->declBus(c+1534,"arsize", false,-1, 2,0);
    tracep->declBus(c+1535,"arburst", false,-1, 1,0);
    tracep->declBit(c+542,"rready", false,-1);
    tracep->declBit(c+1395,"rvalid", false,-1);
    tracep->declBus(c+1102,"rresp", false,-1, 1,0);
    tracep->declBus(c+1396,"rdata", false,-1, 31,0);
    tracep->declBit(c+1103,"rlast", false,-1);
    tracep->declBus(c+1104,"rid", false,-1, 3,0);
    tracep->declBus(c+1549,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1550,"BUSY", false,-1, 0,0);
    tracep->declBit(c+570,"state", false,-1);
    tracep->declBit(c+1481,"next_state", false,-1);
    tracep->declBus(c+571,"last_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_cpu ");
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBit(c+911,"exu_valid", false,-1);
    tracep->declBit(c+536,"wbu_ready", false,-1);
    tracep->declBit(c+1204,"lsu_ready", false,-1);
    tracep->declBit(c+535,"lsu_valid", false,-1);
    tracep->declQuad(c+908,"eu_to_lu_bus", false,-1, 63,0);
    tracep->declBus(c+1200,"du_to_lu_bus", false,-1, 4,0);
    tracep->declQuad(c+532,"lu_to_wu_bus", false,-1, 63,0);
    tracep->declBit(c+564,"access_fault", false,-1);
    tracep->declBit(c+1105,"awready", false,-1);
    tracep->declBit(c+543,"awvalid", false,-1);
    tracep->declBus(c+544,"awaddr", false,-1, 31,0);
    tracep->declBus(c+1536,"awid", false,-1, 3,0);
    tracep->declBus(c+1537,"awlen", false,-1, 7,0);
    tracep->declBus(c+1538,"awsize", false,-1, 2,0);
    tracep->declBus(c+1539,"awburst", false,-1, 1,0);
    tracep->declBit(c+1106,"wready", false,-1);
    tracep->declBit(c+545,"wvalid", false,-1);
    tracep->declBus(c+546,"wdata", false,-1, 31,0);
    tracep->declBus(c+547,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1540,"wlast", false,-1);
    tracep->declBit(c+548,"bready", false,-1);
    tracep->declBit(c+1107,"bvalid", false,-1);
    tracep->declBus(c+1108,"bresp", false,-1, 1,0);
    tracep->declBus(c+1109,"bid", false,-1, 3,0);
    tracep->declBit(c+1110,"arready", false,-1);
    tracep->declBit(c+549,"arvalid", false,-1);
    tracep->declBus(c+550,"araddr", false,-1, 31,0);
    tracep->declBus(c+1541,"arid", false,-1, 3,0);
    tracep->declBus(c+1542,"arlen", false,-1, 7,0);
    tracep->declBus(c+1543,"arsize", false,-1, 2,0);
    tracep->declBus(c+1544,"arburst", false,-1, 1,0);
    tracep->declBit(c+551,"rready", false,-1);
    tracep->declBit(c+1111,"rvalid", false,-1);
    tracep->declBus(c+1112,"rresp", false,-1, 1,0);
    tracep->declBus(c+1113,"rdata", false,-1, 31,0);
    tracep->declBit(c+1114,"rlast", false,-1);
    tracep->declBus(c+1115,"rid", false,-1, 3,0);
    tracep->declBus(c+1549,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1550,"BUSY", false,-1, 0,0);
    tracep->declBit(c+572,"state", false,-1);
    tracep->declBit(c+1482,"next_state", false,-1);
    tracep->declQuad(c+1559,"eu_to_lu_bus_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_arbiter ");
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBit(c+1101,"ifu_arready", false,-1);
    tracep->declBit(c+540,"ifu_arvalid", false,-1);
    tracep->declBus(c+541,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1532,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1533,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1534,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1535,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+542,"ifu_rready", false,-1);
    tracep->declBit(c+1395,"ifu_rvalid", false,-1);
    tracep->declBus(c+1102,"ifu_rresp", false,-1, 1,0);
    tracep->declBus(c+1396,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+1103,"ifu_rlast", false,-1);
    tracep->declBus(c+1104,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+1105,"lsu_awready", false,-1);
    tracep->declBit(c+543,"lsu_awvalid", false,-1);
    tracep->declBus(c+544,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1536,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1537,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1538,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1539,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1106,"lsu_wready", false,-1);
    tracep->declBit(c+545,"lsu_wvalid", false,-1);
    tracep->declBus(c+546,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+547,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1540,"lsu_wlast", false,-1);
    tracep->declBit(c+548,"lsu_bready", false,-1);
    tracep->declBit(c+1107,"lsu_bvalid", false,-1);
    tracep->declBus(c+1108,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1109,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1110,"lsu_arready", false,-1);
    tracep->declBit(c+549,"lsu_arvalid", false,-1);
    tracep->declBus(c+550,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1541,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1542,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1543,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1544,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+551,"lsu_rready", false,-1);
    tracep->declBit(c+1111,"lsu_rvalid", false,-1);
    tracep->declBus(c+1112,"lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+1113,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+1114,"lsu_rlast", false,-1);
    tracep->declBus(c+1115,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+126,"io_master_awready", false,-1);
    tracep->declBit(c+512,"io_master_awvalid", false,-1);
    tracep->declBus(c+514,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+513,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+515,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+516,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+517,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+127,"io_master_wready", false,-1);
    tracep->declBit(c+518,"io_master_wvalid", false,-1);
    tracep->declBus(c+519,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+520,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+521,"io_master_wlast", false,-1);
    tracep->declBit(c+522,"io_master_bready", false,-1);
    tracep->declBit(c+128,"io_master_bvalid", false,-1);
    tracep->declBus(c+130,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+129,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+131,"io_master_arready", false,-1);
    tracep->declBit(c+523,"io_master_arvalid", false,-1);
    tracep->declBus(c+525,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+524,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+526,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+527,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+528,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+529,"io_master_rready", false,-1);
    tracep->declBit(c+132,"io_master_rvalid", false,-1);
    tracep->declBus(c+135,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+134,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+136,"io_master_rlast", false,-1);
    tracep->declBus(c+133,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+552,"clint_arready", false,-1);
    tracep->declBit(c+553,"clint_arvalid", false,-1);
    tracep->declBus(c+554,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+555,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+556,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+557,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+558,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+559,"clint_rready", false,-1);
    tracep->declBit(c+560,"clint_rvalid", false,-1);
    tracep->declBus(c+561,"clint_rresp", false,-1, 1,0);
    tracep->declBus(c+562,"clint_rdata", false,-1, 31,0);
    tracep->declBit(c+1545,"clint_rlast", false,-1);
    tracep->declBus(c+1546,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+1561,"CLINT_BASE", false,-1, 31,0);
    tracep->declBus(c+1525,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1562,"IFU_ACCESS", false,-1, 1,0);
    tracep->declBus(c+1563,"LSU_ACCESS", false,-1, 1,0);
    tracep->declBit(c+573,"is_clint_addr", false,-1);
    tracep->declBus(c+574,"current_master", false,-1, 1,0);
    tracep->declBus(c+1483,"next_master", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_clint ");
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+554,"araddr", false,-1, 31,0);
    tracep->declBit(c+553,"arvalid", false,-1);
    tracep->declBit(c+552,"arready", false,-1);
    tracep->declBus(c+562,"rdata", false,-1, 31,0);
    tracep->declBus(c+561,"rresp", false,-1, 1,0);
    tracep->declBit(c+560,"rvalid", false,-1);
    tracep->declBit(c+559,"rready", false,-1);
    tracep->declBus(c+1521,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1513,"awvalid", false,-1);
    tracep->declBit(c+575,"awready", false,-1);
    tracep->declBus(c+1521,"wdata", false,-1, 31,0);
    tracep->declBus(c+1522,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1513,"wvalid", false,-1);
    tracep->declBit(c+576,"wready", false,-1);
    tracep->declBus(c+577,"bresp", false,-1, 1,0);
    tracep->declBit(c+578,"bvalid", false,-1);
    tracep->declBit(c+1513,"bready", false,-1);
    tracep->declBus(c+579,"mtimel", false,-1, 31,0);
    tracep->declBus(c+580,"mtimeh", false,-1, 31,0);
    tracep->declBus(c+581,"clint_offset", false,-1, 31,0);
    tracep->declBus(c+1561,"CLINT_BASE", false,-1, 31,0);
    tracep->declBus(c+1549,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1550,"BUSY", false,-1, 0,0);
    tracep->declBit(c+582,"state", false,-1);
    tracep->declBit(c+583,"next_state", false,-1);
    tracep->declBus(c+584,"read_addr", false,-1, 31,0);
    tracep->declBus(c+1564,"write_addr", false,-1, 31,0);
    tracep->declBus(c+1565,"write_data", false,-1, 31,0);
    tracep->declBus(c+1566,"write_strb", false,-1, 3,0);
    tracep->declBit(c+585,"is_read_req", false,-1);
    tracep->declBit(c+586,"is_write_req", false,-1);
    tracep->declBit(c+587,"wvalid_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_cpu ");
    tracep->declBit(c+535,"lsu_valid", false,-1);
    tracep->declBit(c+1206,"inst_l", false,-1);
    tracep->declBit(c+1205,"inst_s", false,-1);
    tracep->declBit(c+539,"gpr_ready", false,-1);
    tracep->declBit(c+537,"wbu_valid", false,-1);
    tracep->declBit(c+536,"wbu_ready", false,-1);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1466,"rst", false,-1);
    tracep->declBus(c+1201,"du_to_wu_bus", false,-1, 7,0);
    tracep->declQuad(c+532,"lu_to_wu_bus", false,-1, 63,0);
    tracep->declBus(c+1397,"csr_wgpr_data", false,-1, 31,0);
    tracep->declQuad(c+530,"wu_to_gu_bus", false,-1, 32,0);
    tracep->declBus(c+1549,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1550,"BUSY", false,-1, 0,0);
    tracep->declBit(c+588,"state", false,-1);
    tracep->declBit(c+589,"next_state", false,-1);
    tracep->declBus(c+590,"du_to_wu_bus_r", false,-1, 7,0);
    tracep->declQuad(c+591,"lu_to_wu_bus_r", false,-1, 63,0);
    tracep->declBus(c+593,"lw_lh_lb", false,-1, 2,0);
    tracep->declBit(c+594,"bit_sext", false,-1);
    tracep->declBit(c+595,"half_sext", false,-1);
    tracep->declBit(c+596,"gpr_we", false,-1);
    tracep->declBit(c+597,"rlsu_we", false,-1);
    tracep->declBit(c+598,"csr_w_gpr_we", false,-1);
    tracep->declBus(c+1337,"result", false,-1, 31,0);
    tracep->declBus(c+1484,"rdata_processed", false,-1, 31,0);
    tracep->declBit(c+1485,"final_gpr_we", false,-1);
    tracep->declBus(c+1486,"final_result", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"io_d", false,-1);
    tracep->declBit(c+415,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"io_d", false,-1);
    tracep->declBit(c+415,"io_q", false,-1);
    tracep->declBit(c+415,"sync_0", false,-1);
    tracep->declBit(c+416,"sync_1", false,-1);
    tracep->declBit(c+417,"sync_2", false,-1);
    tracep->declBit(c+418,"sync_3", false,-1);
    tracep->declBit(c+419,"sync_4", false,-1);
    tracep->declBit(c+420,"sync_5", false,-1);
    tracep->declBit(c+421,"sync_6", false,-1);
    tracep->declBit(c+422,"sync_7", false,-1);
    tracep->declBit(c+423,"sync_8", false,-1);
    tracep->declBit(c+424,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+1346,"auto_in_psel", false,-1);
    tracep->declBit(c+1347,"auto_in_penable", false,-1);
    tracep->declBit(c+1125,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1345,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1512,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1126,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+603,"auto_in_pready", false,-1);
    tracep->declBit(c+604,"auto_in_pslverr", false,-1);
    tracep->declBus(c+605,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1431,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1432,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1433,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1434,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1435,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1436,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1437,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1438,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1439,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1440,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBus(c+1363,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1346,"in_psel", false,-1);
    tracep->declBit(c+1347,"in_penable", false,-1);
    tracep->declBus(c+1512,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1125,"in_pwrite", false,-1);
    tracep->declBus(c+1126,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+603,"in_pready", false,-1);
    tracep->declBus(c+605,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+604,"in_pslverr", false,-1);
    tracep->declBus(c+1431,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1432,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1433,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1434,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1435,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1436,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1437,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1438,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1439,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1440,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1567,"GPIO_OUT", false,-1, 31,0);
    tracep->declBus(c+1568,"GPIO_IN", false,-1, 31,0);
    tracep->declBus(c+1569,"GPIO_SEGMENT", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"seg_decoder", true,(i+0), 7,0);
    }
    tracep->declBus(c+606,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+607,"gpio_in_reg", false,-1, 15,0);
    tracep->declBus(c+608,"gpio_segment_reg", false,-1, 31,0);
    tracep->declBus(c+605,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+603,"pready_reg", false,-1);
    tracep->declBit(c+604,"pslverr_reg", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+508,"auto_in_psel", false,-1);
    tracep->declBit(c+509,"auto_in_penable", false,-1);
    tracep->declBit(c+1125,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1345,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1512,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1126,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1517,"auto_in_pready", false,-1);
    tracep->declBit(c+1518,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1519,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1441,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1442,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBus(c+1363,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+508,"in_psel", false,-1);
    tracep->declBit(c+509,"in_penable", false,-1);
    tracep->declBus(c+1512,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1125,"in_pwrite", false,-1);
    tracep->declBus(c+1126,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1517,"in_pready", false,-1);
    tracep->declBus(c+1519,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1518,"in_pslverr", false,-1);
    tracep->declBit(c+1441,"ps2_clk", false,-1);
    tracep->declBit(c+1442,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+1046,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1047,"auto_in_wvalid", false,-1);
    tracep->declBit(c+191,"auto_in_arready", false,-1);
    tracep->declBit(c+1048,"auto_in_arvalid", false,-1);
    tracep->declBus(c+986,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1049,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1465,"auto_in_rready", false,-1);
    tracep->declBit(c+192,"auto_in_rvalid", false,-1);
    tracep->declBus(c+193,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+194,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+192,"state", false,-1);
    tracep->declBus(c+194,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+193,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1116,"raddr", false,-1, 31,0);
    tracep->declBit(c+1117,"ren", false,-1);
    tracep->declBus(c+1118,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+1348,"auto_in_psel", false,-1);
    tracep->declBit(c+510,"auto_in_penable", false,-1);
    tracep->declBit(c+1125,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1343,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1512,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1126,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1455,"auto_in_pready", false,-1);
    tracep->declBit(c+1513,"auto_in_pslverr", false,-1);
    tracep->declBus(c+25,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1400,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1401,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1453,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBus(c+1343,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1348,"in_psel", false,-1);
    tracep->declBit(c+510,"in_penable", false,-1);
    tracep->declBus(c+1512,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1125,"in_pwrite", false,-1);
    tracep->declBus(c+1126,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1455,"in_pready", false,-1);
    tracep->declBus(c+25,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1513,"in_pslverr", false,-1);
    tracep->declBit(c+1400,"qspi_sck", false,-1);
    tracep->declBit(c+1401,"qspi_ce_n", false,-1);
    tracep->declBus(c+1453,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1453,"din", false,-1, 3,0);
    tracep->declBus(c+1412,"dout", false,-1, 3,0);
    tracep->declBus(c+1413,"douten", false,-1, 3,0);
    tracep->declBit(c+1487,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1429,"clk_i", false,-1);
    tracep->declBit(c+1430,"rst_i", false,-1);
    tracep->declBus(c+1343,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1126,"dat_i", false,-1, 31,0);
    tracep->declBus(c+25,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1127,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1348,"cyc_i", false,-1);
    tracep->declBit(c+1348,"stb_i", false,-1);
    tracep->declBit(c+1487,"ack_o", false,-1);
    tracep->declBit(c+1125,"we_i", false,-1);
    tracep->declBit(c+1400,"sck", false,-1);
    tracep->declBit(c+1401,"ce_n", false,-1);
    tracep->declBus(c+1453,"din", false,-1, 3,0);
    tracep->declBus(c+1412,"dout", false,-1, 3,0);
    tracep->declBus(c+1413,"douten", false,-1, 3,0);
    tracep->declBus(c+1549,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1550,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+609,"mr_sck", false,-1);
    tracep->declBit(c+610,"mr_ce_n", false,-1);
    tracep->declBus(c+1453,"mr_din", false,-1, 3,0);
    tracep->declBus(c+611,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+612,"mr_doe", false,-1);
    tracep->declBit(c+613,"mw_sck", false,-1);
    tracep->declBit(c+614,"mw_ce_n", false,-1);
    tracep->declBus(c+1453,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1488,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+615,"mw_doe", false,-1);
    tracep->declBit(c+1414,"mr_rd", false,-1);
    tracep->declBit(c+616,"mr_done", false,-1);
    tracep->declBit(c+1415,"mw_wr", false,-1);
    tracep->declBit(c+1489,"mw_done", false,-1);
    tracep->declBit(c+1348,"wb_valid", false,-1);
    tracep->declBit(c+1364,"wb_we", false,-1);
    tracep->declBit(c+1365,"wb_re", false,-1);
    tracep->declBit(c+617,"state", false,-1);
    tracep->declBit(c+1416,"nstate", false,-1);
    tracep->declBus(c+1162,"size", false,-1, 2,0);
    tracep->declBus(c+1163,"byte0", false,-1, 7,0);
    tracep->declBus(c+1164,"byte1", false,-1, 7,0);
    tracep->declBus(c+1165,"byte2", false,-1, 7,0);
    tracep->declBus(c+1166,"byte3", false,-1, 7,0);
    tracep->declBus(c+1167,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1490,"rst_n", false,-1);
    tracep->declBus(c+1366,"addr", false,-1, 23,0);
    tracep->declBit(c+1414,"rd", false,-1);
    tracep->declBus(c+1570,"size", false,-1, 2,0);
    tracep->declBit(c+616,"done", false,-1);
    tracep->declBus(c+25,"line", false,-1, 31,0);
    tracep->declBit(c+609,"sck", false,-1);
    tracep->declBit(c+610,"ce_n", false,-1);
    tracep->declBus(c+1453,"din", false,-1, 3,0);
    tracep->declBus(c+611,"dout", false,-1, 3,0);
    tracep->declBit(c+612,"douten", false,-1);
    tracep->declBus(c+1549,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1550,"READ", false,-1, 0,0);
    tracep->declBus(c+1571,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+618,"state", false,-1);
    tracep->declBit(c+1417,"nstate", false,-1);
    tracep->declBus(c+619,"counter", false,-1, 7,0);
    tracep->declBus(c+620,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+425+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1572,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+621,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1490,"rst_n", false,-1);
    tracep->declBus(c+1367,"addr", false,-1, 23,0);
    tracep->declBus(c+1167,"line", false,-1, 31,0);
    tracep->declBus(c+1162,"size", false,-1, 2,0);
    tracep->declBit(c+1415,"wr", false,-1);
    tracep->declBit(c+1489,"done", false,-1);
    tracep->declBit(c+613,"sck", false,-1);
    tracep->declBit(c+614,"ce_n", false,-1);
    tracep->declBus(c+1453,"din", false,-1, 3,0);
    tracep->declBus(c+1488,"dout", false,-1, 3,0);
    tracep->declBit(c+615,"douten", false,-1);
    tracep->declBus(c+1549,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1550,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1168,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+622,"state", false,-1);
    tracep->declBit(c+1418,"nstate", false,-1);
    tracep->declBus(c+623,"counter", false,-1, 7,0);
    tracep->declBus(c+624,"saddr", false,-1, 23,0);
    tracep->declBus(c+1573,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+504,"auto_in_psel", false,-1);
    tracep->declBit(c+505,"auto_in_penable", false,-1);
    tracep->declBit(c+1125,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1343,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1512,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1126,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+601,"auto_in_pready", false,-1);
    tracep->declBit(c+1513,"auto_in_pslverr", false,-1);
    tracep->declBus(c+602,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1454,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1169,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1170,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1171,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1172,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1173,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1402,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1174,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1175,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1193,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBus(c+1343,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+504,"in_psel", false,-1);
    tracep->declBit(c+505,"in_penable", false,-1);
    tracep->declBus(c+1512,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1125,"in_pwrite", false,-1);
    tracep->declBus(c+1126,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+601,"in_pready", false,-1);
    tracep->declBus(c+602,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1513,"in_pslverr", false,-1);
    tracep->declBit(c+1454,"sdram_clk", false,-1);
    tracep->declBit(c+1169,"sdram_cke", false,-1);
    tracep->declBit(c+1170,"sdram_cs", false,-1);
    tracep->declBit(c+1171,"sdram_ras", false,-1);
    tracep->declBit(c+1172,"sdram_cas", false,-1);
    tracep->declBit(c+1173,"sdram_we", false,-1);
    tracep->declBus(c+1402,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1174,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1175,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1193,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+625,"sdram_dout_en", false,-1);
    tracep->declBus(c+626,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+429,"state", false,-1, 1,0);
    tracep->declBit(c+1176,"req_accept", false,-1);
    tracep->declBit(c+1368,"is_read", false,-1);
    tracep->declBit(c+1369,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1429,"clk_i", false,-1);
    tracep->declBit(c+1430,"rst_i", false,-1);
    tracep->declBus(c+1370,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1368,"inport_rd_i", false,-1);
    tracep->declBus(c+1523,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1343,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1126,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1193,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1176,"inport_accept_o", false,-1);
    tracep->declBit(c+601,"inport_ack_o", false,-1);
    tracep->declBit(c+1513,"inport_error_o", false,-1);
    tracep->declBus(c+602,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1454,"sdram_clk_o", false,-1);
    tracep->declBit(c+1169,"sdram_cke_o", false,-1);
    tracep->declBit(c+1170,"sdram_cs_o", false,-1);
    tracep->declBit(c+1171,"sdram_ras_o", false,-1);
    tracep->declBit(c+1172,"sdram_cas_o", false,-1);
    tracep->declBit(c+1173,"sdram_we_o", false,-1);
    tracep->declBus(c+1175,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1402,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1174,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+626,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+625,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1574,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1575,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1576,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1577,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1577,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1578,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1579,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1580,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1581,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1582,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1583,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1578,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1584,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1585,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1586,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1587,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1588,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1589,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1590,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1522,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1591,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1578,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1522,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1590,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1589,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1585,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1587,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1586,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1588,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1584,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1592,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1593,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1594,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1594,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1547,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1594,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1577,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1577,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1595,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1343,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1370,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1368,"ram_rd_w", false,-1);
    tracep->declBit(c+1176,"ram_accept_w", false,-1);
    tracep->declBus(c+1126,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+602,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+601,"ram_ack_w", false,-1);
    tracep->declBit(c+1371,"ram_req_w", false,-1);
    tracep->declBus(c+1177,"command_q", false,-1, 3,0);
    tracep->declBus(c+1178,"addr_q", false,-1, 12,0);
    tracep->declBus(c+626,"data_q", false,-1, 31,0);
    tracep->declBit(c+627,"data_rd_en_q", false,-1);
    tracep->declBus(c+1175,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1169,"cke_q", false,-1);
    tracep->declBus(c+1174,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1193,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+628,"refresh_q", false,-1);
    tracep->declBus(c+629,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+630+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1179,"state_q", false,-1, 3,0);
    tracep->declBus(c+1419,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1420,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+638,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+639,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1372,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1373,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1374,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1375,"addr_bank_2", false,-1, 2,0);
    tracep->declBus(c+1578,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+640,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1421,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1596,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1180,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+641,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+602,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+642,"idx", false,-1, 31,0);
    tracep->declBus(c+643,"rd_q", false,-1, 3,0);
    tracep->declBit(c+601,"ack_q", false,-1);
    tracep->declArray(c+1181,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+1352,"auto_in_psel", false,-1);
    tracep->declBit(c+1353,"auto_in_penable", false,-1);
    tracep->declBit(c+1125,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1344,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1512,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1126,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1457,"auto_in_pready", false,-1);
    tracep->declBit(c+1513,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1458,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+599,"spi_bundle_sck", false,-1);
    tracep->declBus(c+600,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1451,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1452,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1548,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1597,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1579,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBus(c+1376,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1352,"in_psel", false,-1);
    tracep->declBit(c+1353,"in_penable", false,-1);
    tracep->declBus(c+1512,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1125,"in_pwrite", false,-1);
    tracep->declBus(c+1126,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1457,"in_pready", false,-1);
    tracep->declBus(c+1458,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1513,"in_pslverr", false,-1);
    tracep->declBit(c+599,"spi_sck", false,-1);
    tracep->declBus(c+600,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1451,"spi_mosi", false,-1);
    tracep->declBit(c+1452,"spi_miso", false,-1);
    tracep->declBit(c+644,"spi_irq_out", false,-1);
    tracep->declBus(c+1524,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1512,"INIT_DVI", false,-1, 2,0);
    tracep->declBus(c+1598,"INIT_SS", false,-1, 2,0);
    tracep->declBus(c+1599,"INIT_CTRL", false,-1, 2,0);
    tracep->declBus(c+1570,"WRITE_CMD", false,-1, 2,0);
    tracep->declBus(c+1600,"START_TRANS", false,-1, 2,0);
    tracep->declBus(c+1601,"WAIT_TRANS", false,-1, 2,0);
    tracep->declBus(c+1602,"READ_DATA", false,-1, 2,0);
    tracep->declBit(c+1377,"spi_master_psel", false,-1);
    tracep->declBit(c+430,"flash_xip_psel", false,-1);
    tracep->declBus(c+1378,"apb_paddr", false,-1, 31,0);
    tracep->declBit(c+1379,"apb_psel", false,-1);
    tracep->declBit(c+1380,"apb_penable", false,-1);
    tracep->declBus(c+1381,"apb_pprot", false,-1, 2,0);
    tracep->declBit(c+1382,"apb_pwrite", false,-1);
    tracep->declBus(c+1383,"apb_pwdata", false,-1, 31,0);
    tracep->declBus(c+1384,"apb_pstrb", false,-1, 3,0);
    tracep->declBit(c+645,"apb_pready", false,-1);
    tracep->declBus(c+646,"apb_prdata", false,-1, 31,0);
    tracep->declBit(c+1513,"apb_pslverr", false,-1);
    tracep->declBit(c+1385,"flash_xip_sel", false,-1);
    tracep->declBus(c+431,"flash_xip_paddr", false,-1, 31,0);
    tracep->declBit(c+432,"flash_xip_penable", false,-1);
    tracep->declBus(c+1512,"flash_xip_pprot", false,-1, 2,0);
    tracep->declBit(c+433,"flash_xip_pwrite", false,-1);
    tracep->declBus(c+434,"flash_xip_pwdata", false,-1, 31,0);
    tracep->declBus(c+511,"flash_xip_pstrb", false,-1, 3,0);
    tracep->declBit(c+435,"flash_xip_pready", false,-1);
    tracep->declBus(c+436,"flash_xip_prdata", false,-1, 31,0);
    tracep->declBit(c+1513,"flash_xip_pslverr", false,-1);
    tracep->declBit(c+1520,"spi_ctrl_ass", false,-1);
    tracep->declBit(c+1520,"spi_ctrl_ie", false,-1);
    tracep->declBus(c+1603,"spi_ctrl_char_len", false,-1, 6,0);
    tracep->declBit(c+1520,"spi_ctrl_tx_neg", false,-1);
    tracep->declBit(c+1513,"spi_ctrl_rx_neg", false,-1);
    tracep->declBit(c+1513,"spi_ctrl_lsb", false,-1);
    tracep->declBus(c+1491,"spi_ctrl_data", false,-1, 31,0);
    tracep->declBit(c+1492,"spi_ctrl_go_busy", false,-1);
    tracep->declBus(c+437,"flash_xip_state", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1604,"Tp", false,-1, 31,0);
    tracep->declBit(c+1429,"wb_clk_i", false,-1);
    tracep->declBit(c+1430,"wb_rst_i", false,-1);
    tracep->declBus(c+1386,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1383,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+646,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1384,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1382,"wb_we_i", false,-1);
    tracep->declBit(c+1379,"wb_stb_i", false,-1);
    tracep->declBit(c+1380,"wb_cyc_i", false,-1);
    tracep->declBit(c+645,"wb_ack_o", false,-1);
    tracep->declBit(c+1513,"wb_err_o", false,-1);
    tracep->declBit(c+644,"wb_int_o", false,-1);
    tracep->declBus(c+600,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+599,"sclk_pad_o", false,-1);
    tracep->declBit(c+1451,"mosi_pad_o", false,-1);
    tracep->declBit(c+1452,"miso_pad_i", false,-1);
    tracep->declBus(c+647,"divider", false,-1, 15,0);
    tracep->declBus(c+648,"ctrl", false,-1, 13,0);
    tracep->declBus(c+649,"ss", false,-1, 7,0);
    tracep->declBus(c+1422,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+650,"rx", false,-1, 127,0);
    tracep->declBit(c+654,"rx_negedge", false,-1);
    tracep->declBit(c+655,"tx_negedge", false,-1);
    tracep->declBus(c+656,"char_len", false,-1, 6,0);
    tracep->declBit(c+657,"go", false,-1);
    tracep->declBit(c+658,"lsb", false,-1);
    tracep->declBit(c+659,"ie", false,-1);
    tracep->declBit(c+660,"ass", false,-1);
    tracep->declBit(c+1387,"spi_divider_sel", false,-1);
    tracep->declBit(c+1388,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1389,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1390,"spi_ss_sel", false,-1);
    tracep->declBit(c+661,"tip", false,-1);
    tracep->declBit(c+662,"pos_edge", false,-1);
    tracep->declBit(c+663,"neg_edge", false,-1);
    tracep->declBit(c+664,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1604,"Tp", false,-1, 31,0);
    tracep->declBit(c+1429,"clk_in", false,-1);
    tracep->declBit(c+1430,"rst", false,-1);
    tracep->declBit(c+661,"enable", false,-1);
    tracep->declBit(c+657,"go", false,-1);
    tracep->declBit(c+664,"last_clk", false,-1);
    tracep->declBus(c+647,"divider", false,-1, 15,0);
    tracep->declBit(c+599,"clk_out", false,-1);
    tracep->declBit(c+662,"pos_edge", false,-1);
    tracep->declBit(c+663,"neg_edge", false,-1);
    tracep->declBus(c+665,"cnt", false,-1, 15,0);
    tracep->declBit(c+666,"cnt_zero", false,-1);
    tracep->declBit(c+667,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1604,"Tp", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1430,"rst", false,-1);
    tracep->declBus(c+1391,"latch", false,-1, 3,0);
    tracep->declBus(c+1384,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+656,"len", false,-1, 6,0);
    tracep->declBit(c+658,"lsb", false,-1);
    tracep->declBit(c+657,"go", false,-1);
    tracep->declBit(c+662,"pos_edge", false,-1);
    tracep->declBit(c+663,"neg_edge", false,-1);
    tracep->declBit(c+654,"rx_negedge", false,-1);
    tracep->declBit(c+655,"tx_negedge", false,-1);
    tracep->declBit(c+661,"tip", false,-1);
    tracep->declBit(c+664,"last", false,-1);
    tracep->declBus(c+1383,"p_in", false,-1, 31,0);
    tracep->declArray(c+650,"p_out", false,-1, 127,0);
    tracep->declBit(c+599,"s_clk", false,-1);
    tracep->declBit(c+1452,"s_in", false,-1);
    tracep->declBit(c+1451,"s_out", false,-1);
    tracep->declBus(c+668,"cnt", false,-1, 7,0);
    tracep->declArray(c+650,"data", false,-1, 127,0);
    tracep->declBus(c+669,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+670,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+671,"rx_clk", false,-1);
    tracep->declBit(c+672,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+1349,"auto_in_psel", false,-1);
    tracep->declBit(c+1350,"auto_in_penable", false,-1);
    tracep->declBit(c+1125,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1345,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1512,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1126,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1351,"auto_in_pready", false,-1);
    tracep->declBit(c+1513,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1456,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1449,"uart_rx", false,-1);
    tracep->declBit(c+1450,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1349,"in_psel", false,-1);
    tracep->declBit(c+1350,"in_penable", false,-1);
    tracep->declBus(c+1512,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1351,"in_pready", false,-1);
    tracep->declBit(c+1513,"in_pslverr", false,-1);
    tracep->declBus(c+1363,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1125,"in_pwrite", false,-1);
    tracep->declBus(c+1456,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1126,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1449,"uart_rx", false,-1);
    tracep->declBit(c+1450,"uart_tx", false,-1);
    tracep->declBit(c+673,"rtsn", false,-1);
    tracep->declBit(c+1513,"ctsn", false,-1);
    tracep->declBit(c+674,"dtr_pad_o", false,-1);
    tracep->declBit(c+1513,"dsr_pad_i", false,-1);
    tracep->declBit(c+1513,"ri_pad_i", false,-1);
    tracep->declBit(c+1513,"dcd_pad_i", false,-1);
    tracep->declBit(c+675,"interrupt", false,-1);
    tracep->declBit(c+1493,"reg_we", false,-1);
    tracep->declBit(c+1494,"reg_re", false,-1);
    tracep->declBus(c+1392,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1393,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+438,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1423,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+676,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1430,"wb_rst_i", false,-1);
    tracep->declBus(c+1392,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1394,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1423,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1493,"wb_we_i", false,-1);
    tracep->declBit(c+1494,"wb_re_i", false,-1);
    tracep->declBit(c+1450,"stx_pad_o", false,-1);
    tracep->declBit(c+1449,"srx_pad_i", false,-1);
    tracep->declBus(c+1592,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+676,"rts_pad_o", false,-1);
    tracep->declBit(c+674,"dtr_pad_o", false,-1);
    tracep->declBit(c+675,"int_o", false,-1);
    tracep->declBit(c+677,"enable", false,-1);
    tracep->declBit(c+678,"srx_pad", false,-1);
    tracep->declBus(c+679,"ier", false,-1, 3,0);
    tracep->declBus(c+680,"iir", false,-1, 3,0);
    tracep->declBus(c+681,"fcr", false,-1, 1,0);
    tracep->declBus(c+682,"mcr", false,-1, 4,0);
    tracep->declBus(c+683,"lcr", false,-1, 7,0);
    tracep->declBus(c+684,"msr", false,-1, 7,0);
    tracep->declBus(c+685,"dl", false,-1, 15,0);
    tracep->declBus(c+686,"scratch", false,-1, 7,0);
    tracep->declBit(c+687,"start_dlc", false,-1);
    tracep->declBit(c+688,"lsr_mask_d", false,-1);
    tracep->declBit(c+689,"msi_reset", false,-1);
    tracep->declBus(c+690,"dlc", false,-1, 15,0);
    tracep->declBus(c+691,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+692,"rx_reset", false,-1);
    tracep->declBit(c+693,"tx_reset", false,-1);
    tracep->declBit(c+694,"dlab", false,-1);
    tracep->declBit(c+1520,"cts_pad_i", false,-1);
    tracep->declBit(c+1513,"dsr_pad_i", false,-1);
    tracep->declBit(c+1513,"ri_pad_i", false,-1);
    tracep->declBit(c+1513,"dcd_pad_i", false,-1);
    tracep->declBit(c+695,"loopback", false,-1);
    tracep->declBit(c+1513,"cts", false,-1);
    tracep->declBit(c+1520,"dsr", false,-1);
    tracep->declBit(c+1520,"ri", false,-1);
    tracep->declBit(c+1520,"dcd", false,-1);
    tracep->declBit(c+696,"cts_c", false,-1);
    tracep->declBit(c+697,"dsr_c", false,-1);
    tracep->declBit(c+698,"ri_c", false,-1);
    tracep->declBit(c+699,"dcd_c", false,-1);
    tracep->declBus(c+700,"lsr", false,-1, 7,0);
    tracep->declBit(c+701,"lsr0", false,-1);
    tracep->declBit(c+702,"lsr1", false,-1);
    tracep->declBit(c+703,"lsr2", false,-1);
    tracep->declBit(c+704,"lsr3", false,-1);
    tracep->declBit(c+705,"lsr4", false,-1);
    tracep->declBit(c+706,"lsr5", false,-1);
    tracep->declBit(c+707,"lsr6", false,-1);
    tracep->declBit(c+708,"lsr7", false,-1);
    tracep->declBit(c+709,"lsr0r", false,-1);
    tracep->declBit(c+710,"lsr1r", false,-1);
    tracep->declBit(c+711,"lsr2r", false,-1);
    tracep->declBit(c+712,"lsr3r", false,-1);
    tracep->declBit(c+713,"lsr4r", false,-1);
    tracep->declBit(c+714,"lsr5r", false,-1);
    tracep->declBit(c+715,"lsr6r", false,-1);
    tracep->declBit(c+716,"lsr7r", false,-1);
    tracep->declBit(c+17,"lsr_mask", false,-1);
    tracep->declBit(c+717,"rls_int", false,-1);
    tracep->declBit(c+718,"rda_int", false,-1);
    tracep->declBit(c+719,"ti_int", false,-1);
    tracep->declBit(c+720,"thre_int", false,-1);
    tracep->declBit(c+721,"ms_int", false,-1);
    tracep->declBit(c+722,"tf_push", false,-1);
    tracep->declBit(c+723,"rf_pop", false,-1);
    tracep->declBus(c+1495,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+724,"rf_error_bit", false,-1);
    tracep->declBit(c+702,"rf_overrun", false,-1);
    tracep->declBit(c+725,"rf_push_pulse", false,-1);
    tracep->declBus(c+726,"rf_count", false,-1, 4,0);
    tracep->declBus(c+727,"tf_count", false,-1, 4,0);
    tracep->declBus(c+728,"tstate", false,-1, 2,0);
    tracep->declBus(c+729,"rstate", false,-1, 3,0);
    tracep->declBus(c+730,"counter_t", false,-1, 9,0);
    tracep->declBit(c+731,"thre_set_en", false,-1);
    tracep->declBus(c+732,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+733,"block_value", false,-1, 7,0);
    tracep->declBit(c+734,"serial_out", false,-1);
    tracep->declBit(c+735,"serial_in", false,-1);
    tracep->declBit(c+18,"lsr_mask_condition", false,-1);
    tracep->declBit(c+19,"iir_read", false,-1);
    tracep->declBit(c+20,"msr_read", false,-1);
    tracep->declBit(c+21,"fifo_read", false,-1);
    tracep->declBit(c+22,"fifo_write", false,-1);
    tracep->declBus(c+736,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+737,"lsr0_d", false,-1);
    tracep->declBit(c+738,"lsr1_d", false,-1);
    tracep->declBit(c+739,"lsr2_d", false,-1);
    tracep->declBit(c+740,"lsr3_d", false,-1);
    tracep->declBit(c+741,"lsr4_d", false,-1);
    tracep->declBit(c+742,"lsr5_d", false,-1);
    tracep->declBit(c+743,"lsr6_d", false,-1);
    tracep->declBit(c+744,"lsr7_d", false,-1);
    tracep->declBit(c+745,"rls_int_d", false,-1);
    tracep->declBit(c+746,"thre_int_d", false,-1);
    tracep->declBit(c+747,"ms_int_d", false,-1);
    tracep->declBit(c+748,"ti_int_d", false,-1);
    tracep->declBit(c+749,"rda_int_d", false,-1);
    tracep->declBit(c+750,"rls_int_rise", false,-1);
    tracep->declBit(c+751,"thre_int_rise", false,-1);
    tracep->declBit(c+752,"ms_int_rise", false,-1);
    tracep->declBit(c+753,"ti_int_rise", false,-1);
    tracep->declBit(c+754,"rda_int_rise", false,-1);
    tracep->declBit(c+755,"rls_int_pnd", false,-1);
    tracep->declBit(c+756,"rda_int_pnd", false,-1);
    tracep->declBit(c+757,"thre_int_pnd", false,-1);
    tracep->declBit(c+758,"ms_int_pnd", false,-1);
    tracep->declBit(c+759,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1604,"Tp", false,-1, 31,0);
    tracep->declBus(c+1604,"width", false,-1, 31,0);
    tracep->declBus(c+1550,"init_value", false,-1, 0,0);
    tracep->declBit(c+1430,"rst_i", false,-1);
    tracep->declBit(c+1429,"clk_i", false,-1);
    tracep->declBit(c+1513,"stage1_rst_i", false,-1);
    tracep->declBit(c+1520,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1449,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+678,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+760,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1430,"wb_rst_i", false,-1);
    tracep->declBus(c+683,"lcr", false,-1, 7,0);
    tracep->declBit(c+723,"rf_pop", false,-1);
    tracep->declBit(c+735,"srx_pad_i", false,-1);
    tracep->declBit(c+677,"enable", false,-1);
    tracep->declBit(c+692,"rx_reset", false,-1);
    tracep->declBit(c+17,"lsr_mask", false,-1);
    tracep->declBus(c+730,"counter_t", false,-1, 9,0);
    tracep->declBus(c+726,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1495,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+702,"rf_overrun", false,-1);
    tracep->declBit(c+724,"rf_error_bit", false,-1);
    tracep->declBus(c+729,"rstate", false,-1, 3,0);
    tracep->declBit(c+725,"rf_push_pulse", false,-1);
    tracep->declBus(c+761,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+762,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+763,"rshift", false,-1, 7,0);
    tracep->declBit(c+764,"rparity", false,-1);
    tracep->declBit(c+765,"rparity_error", false,-1);
    tracep->declBit(c+766,"rframing_error", false,-1);
    tracep->declBit(c+767,"rbit_in", false,-1);
    tracep->declBit(c+768,"rparity_xor", false,-1);
    tracep->declBus(c+769,"counter_b", false,-1, 7,0);
    tracep->declBit(c+770,"rf_push_q", false,-1);
    tracep->declBus(c+771,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+772,"rf_push", false,-1);
    tracep->declBit(c+773,"break_error", false,-1);
    tracep->declBit(c+774,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+775,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+776,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+777,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1522,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1590,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1589,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1585,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1587,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1586,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1588,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1584,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1592,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1593,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1605,"sr_push", false,-1, 3,0);
    tracep->declBus(c+778,"toc_value", false,-1, 9,0);
    tracep->declBus(c+779,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1606,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1607,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1578,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1608,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1430,"wb_rst_i", false,-1);
    tracep->declBit(c+725,"push", false,-1);
    tracep->declBit(c+723,"pop", false,-1);
    tracep->declBus(c+771,"data_in", false,-1, 10,0);
    tracep->declBit(c+692,"fifo_reset", false,-1);
    tracep->declBit(c+17,"reset_status", false,-1);
    tracep->declBus(c+1495,"data_out", false,-1, 10,0);
    tracep->declBit(c+702,"overrun", false,-1);
    tracep->declBus(c+726,"count", false,-1, 4,0);
    tracep->declBit(c+724,"error_bit", false,-1);
    tracep->declBus(c+1496,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+780+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+796,"top", false,-1, 3,0);
    tracep->declBus(c+797,"bottom", false,-1, 3,0);
    tracep->declBus(c+798,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+799,"word0", false,-1, 2,0);
    tracep->declBus(c+800,"word1", false,-1, 2,0);
    tracep->declBus(c+801,"word2", false,-1, 2,0);
    tracep->declBus(c+802,"word3", false,-1, 2,0);
    tracep->declBus(c+803,"word4", false,-1, 2,0);
    tracep->declBus(c+804,"word5", false,-1, 2,0);
    tracep->declBus(c+805,"word6", false,-1, 2,0);
    tracep->declBus(c+806,"word7", false,-1, 2,0);
    tracep->declBus(c+807,"word8", false,-1, 2,0);
    tracep->declBus(c+808,"word9", false,-1, 2,0);
    tracep->declBus(c+809,"word10", false,-1, 2,0);
    tracep->declBus(c+810,"word11", false,-1, 2,0);
    tracep->declBus(c+811,"word12", false,-1, 2,0);
    tracep->declBus(c+812,"word13", false,-1, 2,0);
    tracep->declBus(c+813,"word14", false,-1, 2,0);
    tracep->declBus(c+814,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1578,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1579,"data_width", false,-1, 31,0);
    tracep->declBus(c+1607,"depth", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+725,"we", false,-1);
    tracep->declBus(c+796,"a", false,-1, 3,0);
    tracep->declBus(c+797,"dpra", false,-1, 3,0);
    tracep->declBus(c+815,"di", false,-1, 7,0);
    tracep->declBus(c+1496,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+439+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1430,"wb_rst_i", false,-1);
    tracep->declBus(c+683,"lcr", false,-1, 7,0);
    tracep->declBit(c+722,"tf_push", false,-1);
    tracep->declBus(c+1394,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+677,"enable", false,-1);
    tracep->declBit(c+693,"tx_reset", false,-1);
    tracep->declBit(c+17,"lsr_mask", false,-1);
    tracep->declBit(c+734,"stx_pad_o", false,-1);
    tracep->declBus(c+728,"tstate", false,-1, 2,0);
    tracep->declBus(c+727,"tf_count", false,-1, 4,0);
    tracep->declBus(c+816,"counter", false,-1, 4,0);
    tracep->declBus(c+817,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+818,"shift_out", false,-1, 6,0);
    tracep->declBit(c+819,"stx_o_tmp", false,-1);
    tracep->declBit(c+820,"parity_xor", false,-1);
    tracep->declBit(c+821,"tf_pop", false,-1);
    tracep->declBit(c+822,"bit_out", false,-1);
    tracep->declBus(c+1394,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1497,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+823,"tf_overrun", false,-1);
    tracep->declBus(c+1524,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1512,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1598,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1599,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1570,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1600,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1579,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1607,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1578,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1608,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+1430,"wb_rst_i", false,-1);
    tracep->declBit(c+722,"push", false,-1);
    tracep->declBit(c+821,"pop", false,-1);
    tracep->declBus(c+1394,"data_in", false,-1, 7,0);
    tracep->declBit(c+693,"fifo_reset", false,-1);
    tracep->declBit(c+17,"reset_status", false,-1);
    tracep->declBus(c+1497,"data_out", false,-1, 7,0);
    tracep->declBit(c+823,"overrun", false,-1);
    tracep->declBus(c+727,"count", false,-1, 4,0);
    tracep->declBus(c+824,"top", false,-1, 3,0);
    tracep->declBus(c+825,"bottom", false,-1, 3,0);
    tracep->declBus(c+826,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1578,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1579,"data_width", false,-1, 31,0);
    tracep->declBus(c+1607,"depth", false,-1, 31,0);
    tracep->declBit(c+1429,"clk", false,-1);
    tracep->declBit(c+722,"we", false,-1);
    tracep->declBus(c+824,"a", false,-1, 3,0);
    tracep->declBus(c+825,"dpra", false,-1, 3,0);
    tracep->declBus(c+1394,"di", false,-1, 7,0);
    tracep->declBus(c+1497,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+455+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBit(c+506,"auto_in_psel", false,-1);
    tracep->declBit(c+507,"auto_in_penable", false,-1);
    tracep->declBit(c+1125,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1344,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1512,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1126,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1514,"auto_in_pready", false,-1);
    tracep->declBit(c+1515,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1516,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1443,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1444,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1445,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1446,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1447,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1448,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1429,"clock", false,-1);
    tracep->declBit(c+1430,"reset", false,-1);
    tracep->declBus(c+1376,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+506,"in_psel", false,-1);
    tracep->declBit(c+507,"in_penable", false,-1);
    tracep->declBus(c+1512,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1125,"in_pwrite", false,-1);
    tracep->declBus(c+1126,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1127,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1514,"in_pready", false,-1);
    tracep->declBus(c+1516,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1515,"in_pslverr", false,-1);
    tracep->declBus(c+1443,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1444,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1445,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1446,"vga_hsync", false,-1);
    tracep->declBit(c+1447,"vga_vsync", false,-1);
    tracep->declBit(c+1448,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+599,"sck", false,-1);
    tracep->declBit(c+1498,"ss", false,-1);
    tracep->declBit(c+1451,"mosi", false,-1);
    tracep->declBit(c+1499,"miso", false,-1);
    tracep->declBus(c+1500,"data_reg", false,-1, 7,0);
    tracep->declBus(c+1501,"data_cnt", false,-1, 3,0);
    tracep->declBit(c+1499,"miso_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+599,"sck", false,-1);
    tracep->declBit(c+827,"ss", false,-1);
    tracep->declBit(c+1451,"mosi", false,-1);
    tracep->declBit(c+1502,"miso", false,-1);
    tracep->declBit(c+827,"reset", false,-1);
    tracep->declBus(c+1119,"state", false,-1, 2,0);
    tracep->declBus(c+1120,"counter", false,-1, 7,0);
    tracep->declBus(c+1121,"cmd", false,-1, 7,0);
    tracep->declBus(c+1122,"addr", false,-1, 23,0);
    tracep->declBus(c+1123,"data", false,-1, 31,0);
    tracep->declBit(c+1124,"ren", false,-1);
    tracep->declBus(c+1503,"rdata", false,-1, 31,0);
    tracep->declBus(c+1504,"raddr", false,-1, 31,0);
    tracep->declBus(c+1505,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+599,"clock", false,-1);
    tracep->declBit(c+1124,"valid", false,-1);
    tracep->declBus(c+1121,"cmd", false,-1, 7,0);
    tracep->declBus(c+1504,"addr", false,-1, 31,0);
    tracep->declBus(c+1503,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1400,"sck", false,-1);
    tracep->declBit(c+1401,"ce_n", false,-1);
    tracep->declBus(c+1453,"dio", false,-1, 3,0);
    tracep->declBus(c+1572,"RCMD", false,-1, 7,0);
    tracep->declBus(c+1573,"WCMD", false,-1, 7,0);
    tracep->declBus(c+1609,"QPICMD", false,-1, 7,0);
    tracep->declBus(c+1524,"CMD", false,-1, 2,0);
    tracep->declBus(c+1512,"ADDR", false,-1, 2,0);
    tracep->declBus(c+1598,"DATA", false,-1, 2,0);
    tracep->declBus(c+1599,"DELAY", false,-1, 2,0);
    tracep->declBus(c+1570,"ERROR", false,-1, 2,0);
    tracep->declBus(c+1338,"dout_en", false,-1, 3,0);
    tracep->declBus(c+1506,"dout", false,-1, 3,0);
    tracep->declBus(c+1453,"din", false,-1, 3,0);
    tracep->declBit(c+1507,"QPI_MODE", false,-1);
    tracep->declBus(c+1339,"cmd", false,-1, 7,0);
    tracep->declBus(c+1340,"addr", false,-1, 23,0);
    tracep->declBus(c+1508,"data", false,-1, 31,0);
    tracep->declBus(c+1509,"rdata", false,-1, 31,0);
    tracep->declBus(c+1341,"counter", false,-1, 7,0);
    tracep->declBus(c+1342,"state", false,-1, 2,0);
    tracep->declBus(c+1510,"data_bswap", false,-1, 31,0);
    tracep->declBus(c+1511,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1454,"clk", false,-1);
    tracep->declBit(c+1169,"cke", false,-1);
    tracep->declBit(c+1170,"cs", false,-1);
    tracep->declBit(c+1171,"ras", false,-1);
    tracep->declBit(c+1172,"cas", false,-1);
    tracep->declBit(c+1173,"we", false,-1);
    tracep->declBus(c+1402,"a", false,-1, 13,0);
    tracep->declBus(c+1174,"ba", false,-1, 1,0);
    tracep->declBus(c+1175,"dqm", false,-1, 3,0);
    tracep->declBus(c+1193,"dq", false,-1, 31,0);
    tracep->declBus(c+1184,"cmd", false,-1, 2,0);
    tracep->declBit(c+1187,"ras_l", false,-1);
    tracep->declBit(c+1188,"cas_l", false,-1);
    tracep->declBit(c+1189,"we_l", false,-1);
    tracep->declBit(c+1190,"ras_h", false,-1);
    tracep->declBit(c+1191,"cas_h", false,-1);
    tracep->declBit(c+1192,"we_h", false,-1);
    tracep->pushNamePrefix("u_sdram_32_H ");
    tracep->declBit(c+1454,"clk", false,-1);
    tracep->declBit(c+1169,"cke", false,-1);
    tracep->declBit(c+1170,"cs", false,-1);
    tracep->declBit(c+1190,"ras", false,-1);
    tracep->declBit(c+1191,"cas", false,-1);
    tracep->declBit(c+1192,"we", false,-1);
    tracep->declBus(c+1178,"a", false,-1, 12,0);
    tracep->declBus(c+1174,"ba", false,-1, 1,0);
    tracep->declBus(c+1175,"dqm", false,-1, 3,0);
    tracep->declBus(c+1193,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_16_H ");
    tracep->declBit(c+1454,"clk", false,-1);
    tracep->declBit(c+1169,"cke", false,-1);
    tracep->declBit(c+1170,"cs", false,-1);
    tracep->declBit(c+1190,"ras", false,-1);
    tracep->declBit(c+1191,"cas", false,-1);
    tracep->declBit(c+1192,"we", false,-1);
    tracep->declBus(c+1178,"a", false,-1, 12,0);
    tracep->declBus(c+1174,"ba", false,-1, 1,0);
    tracep->declBus(c+1185,"dqm", false,-1, 1,0);
    tracep->declBus(c+1194,"dq", false,-1, 15,0);
    tracep->declBus(c+1602,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1599,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1600,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1570,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1601,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1598,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1512,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1524,"CMD_MODE", false,-1, 2,0);
    tracep->declBus(c+1610,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+828+i*1,"Line_addr", true,(i+0), 12,0);
    }
    tracep->declBus(c+832,"dout_en", false,-1, 15,0);
    tracep->declBus(c+833,"dout", false,-1, 15,0);
    tracep->declBus(c+1194,"din", false,-1, 15,0);
    tracep->declBus(c+834,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+835,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+1424,"cmd", false,-1, 2,0);
    tracep->declBus(c+836,"L_bank", false,-1, 1,0);
    tracep->declBit(c+837,"dqm_bufL", false,-1);
    tracep->declBit(c+838,"dqm_bufH", false,-1);
    tracep->declBus(c+839,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+840,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+841,"read_en", false,-1);
    tracep->declBus(c+842,"r_addr", false,-1, 8,0);
    tracep->declBus(c+843,"w_addr", false,-1, 8,0);
    tracep->declBus(c+844,"w_data", false,-1, 15,0);
    tracep->declBus(c+845,"r_sdram_addr", false,-1, 21,0);
    tracep->declBus(c+846,"w_sdram_addr", false,-1, 21,0);
    tracep->declBus(c+847,"length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_sdram_16_L ");
    tracep->declBit(c+1454,"clk", false,-1);
    tracep->declBit(c+1169,"cke", false,-1);
    tracep->declBit(c+1170,"cs", false,-1);
    tracep->declBit(c+1190,"ras", false,-1);
    tracep->declBit(c+1191,"cas", false,-1);
    tracep->declBit(c+1192,"we", false,-1);
    tracep->declBus(c+1178,"a", false,-1, 12,0);
    tracep->declBus(c+1174,"ba", false,-1, 1,0);
    tracep->declBus(c+1186,"dqm", false,-1, 1,0);
    tracep->declBus(c+1195,"dq", false,-1, 15,0);
    tracep->declBus(c+1602,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1599,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1600,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1570,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1601,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1598,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1512,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1524,"CMD_MODE", false,-1, 2,0);
    tracep->declBus(c+1610,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+848+i*1,"Line_addr", true,(i+0), 12,0);
    }
    tracep->declBus(c+852,"dout_en", false,-1, 15,0);
    tracep->declBus(c+853,"dout", false,-1, 15,0);
    tracep->declBus(c+1195,"din", false,-1, 15,0);
    tracep->declBus(c+854,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+855,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+1424,"cmd", false,-1, 2,0);
    tracep->declBus(c+856,"L_bank", false,-1, 1,0);
    tracep->declBit(c+857,"dqm_bufL", false,-1);
    tracep->declBit(c+858,"dqm_bufH", false,-1);
    tracep->declBus(c+859,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+860,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+861,"read_en", false,-1);
    tracep->declBus(c+862,"r_addr", false,-1, 8,0);
    tracep->declBus(c+863,"w_addr", false,-1, 8,0);
    tracep->declBus(c+864,"w_data", false,-1, 15,0);
    tracep->declBus(c+865,"r_sdram_addr", false,-1, 21,0);
    tracep->declBus(c+866,"w_sdram_addr", false,-1, 21,0);
    tracep->declBus(c+867,"length", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_sdram_32_L ");
    tracep->declBit(c+1454,"clk", false,-1);
    tracep->declBit(c+1169,"cke", false,-1);
    tracep->declBit(c+1170,"cs", false,-1);
    tracep->declBit(c+1187,"ras", false,-1);
    tracep->declBit(c+1188,"cas", false,-1);
    tracep->declBit(c+1189,"we", false,-1);
    tracep->declBus(c+1178,"a", false,-1, 12,0);
    tracep->declBus(c+1174,"ba", false,-1, 1,0);
    tracep->declBus(c+1175,"dqm", false,-1, 3,0);
    tracep->declBus(c+1193,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_16_H ");
    tracep->declBit(c+1454,"clk", false,-1);
    tracep->declBit(c+1169,"cke", false,-1);
    tracep->declBit(c+1170,"cs", false,-1);
    tracep->declBit(c+1187,"ras", false,-1);
    tracep->declBit(c+1188,"cas", false,-1);
    tracep->declBit(c+1189,"we", false,-1);
    tracep->declBus(c+1178,"a", false,-1, 12,0);
    tracep->declBus(c+1174,"ba", false,-1, 1,0);
    tracep->declBus(c+1185,"dqm", false,-1, 1,0);
    tracep->declBus(c+1194,"dq", false,-1, 15,0);
    tracep->declBus(c+1602,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1599,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1600,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1570,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1601,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1598,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1512,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1524,"CMD_MODE", false,-1, 2,0);
    tracep->declBus(c+1610,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+868+i*1,"Line_addr", true,(i+0), 12,0);
    }
    tracep->declBus(c+872,"dout_en", false,-1, 15,0);
    tracep->declBus(c+873,"dout", false,-1, 15,0);
    tracep->declBus(c+1194,"din", false,-1, 15,0);
    tracep->declBus(c+874,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+875,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+1425,"cmd", false,-1, 2,0);
    tracep->declBus(c+876,"L_bank", false,-1, 1,0);
    tracep->declBit(c+877,"dqm_bufL", false,-1);
    tracep->declBit(c+878,"dqm_bufH", false,-1);
    tracep->declBus(c+879,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+880,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+881,"read_en", false,-1);
    tracep->declBus(c+882,"r_addr", false,-1, 8,0);
    tracep->declBus(c+883,"w_addr", false,-1, 8,0);
    tracep->declBus(c+884,"w_data", false,-1, 15,0);
    tracep->declBus(c+885,"r_sdram_addr", false,-1, 21,0);
    tracep->declBus(c+886,"w_sdram_addr", false,-1, 21,0);
    tracep->declBus(c+887,"length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_sdram_16_L ");
    tracep->declBit(c+1454,"clk", false,-1);
    tracep->declBit(c+1169,"cke", false,-1);
    tracep->declBit(c+1170,"cs", false,-1);
    tracep->declBit(c+1187,"ras", false,-1);
    tracep->declBit(c+1188,"cas", false,-1);
    tracep->declBit(c+1189,"we", false,-1);
    tracep->declBus(c+1178,"a", false,-1, 12,0);
    tracep->declBus(c+1174,"ba", false,-1, 1,0);
    tracep->declBus(c+1186,"dqm", false,-1, 1,0);
    tracep->declBus(c+1195,"dq", false,-1, 15,0);
    tracep->declBus(c+1602,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1599,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1600,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1570,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1601,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1598,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1512,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1524,"CMD_MODE", false,-1, 2,0);
    tracep->declBus(c+1610,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+888+i*1,"Line_addr", true,(i+0), 12,0);
    }
    tracep->declBus(c+892,"dout_en", false,-1, 15,0);
    tracep->declBus(c+893,"dout", false,-1, 15,0);
    tracep->declBus(c+1195,"din", false,-1, 15,0);
    tracep->declBus(c+894,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+895,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+1425,"cmd", false,-1, 2,0);
    tracep->declBus(c+896,"L_bank", false,-1, 1,0);
    tracep->declBit(c+897,"dqm_bufL", false,-1);
    tracep->declBit(c+898,"dqm_bufH", false,-1);
    tracep->declBus(c+899,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+900,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+901,"read_en", false,-1);
    tracep->declBus(c+902,"r_addr", false,-1, 8,0);
    tracep->declBus(c+903,"w_addr", false,-1, 8,0);
    tracep->declBus(c+904,"w_data", false,-1, 15,0);
    tracep->declBus(c+905,"r_sdram_addr", false,-1, 21,0);
    tracep->declBus(c+906,"w_sdram_addr", false,-1, 21,0);
    tracep->declBus(c+907,"length", false,-1, 3,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h05e8bde2__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[15]),8);
    bufp->fullBit(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+24,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+25,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+27,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+28,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+29,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+30,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+31,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+32,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+33,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+34,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+35,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+38,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+39,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+40,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+41,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+42,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+43,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+53,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullBit(oldp+54,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+55,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+56,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                      >> 2U))),4);
    bufp->fullCData(oldp+57,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+58,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+59,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+60,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x23U)))),4);
    bufp->fullIData(oldp+61,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                      >> 3U))),32);
    bufp->fullCData(oldp+62,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 1U)))),2);
    bufp->fullBit(oldp+63,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+126,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+127,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+130,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullBit(oldp+131,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp),2);
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+140,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+142,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+178,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+181,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+182,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+191,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+195,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+196,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+257,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+267,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+271,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+275,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+279,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+283,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+287,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+291,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+295,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+299,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+303,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+307,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+311,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+315,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+319,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+323,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+327,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+331,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+335,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+339,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+343,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+347,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+351,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+355,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+359,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+363,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+367,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+371,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+375,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+379,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+383,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+387,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+391,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout),32);
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_psel));
    bufp->fullIData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_paddr),32);
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwrite));
    bufp->fullIData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwdata),32);
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pready));
    bufp->fullIData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_prdata),32);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_state),3);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+471,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+472,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+473,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+474,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+475,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+476,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+477,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+478,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+479,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+480,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+481,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+482,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+483,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+484,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+485,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+486,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+487,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+488,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+489,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+490,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+491,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+492,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+493,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+494,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+495,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+496,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+497,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+498,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+499,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+500,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+501,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+502,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+503,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+504,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+505,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+506,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+507,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+508,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+509,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+510,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+511,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_psel) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite))
                                ? 0xfU : 0U)),4);
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullIData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullIData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullQData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wu_to_gu_bus),33);
    bufp->fullQData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lu_to_wu_bus),64);
    bufp->fullIData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_ready));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_valid));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid));
    bufp->fullIData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr),32);
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid));
    bufp->fullIData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awaddr),32);
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid));
    bufp->fullIData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wstrb),4);
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid));
    bufp->fullIData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_araddr),32);
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullIData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullCData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullIData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_access_fault));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_access_fault));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__state));
    bufp->fullQData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__wu_to_gu_bus_r),33);
    bufp->fullIData(oldp+568,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__wu_to_gu_bus_r)),32);
    bufp->fullBit(oldp+569,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__wu_to_gu_bus_r 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__state));
    bufp->fullIData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__last_pc),32);
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_cpu__DOT__state));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr));
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master),2);
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__awready));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__wready));
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__bresp),2);
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__bvalid));
    bufp->fullIData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimel),32);
    bufp->fullIData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimeh),32);
    bufp->fullIData(oldp+581,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__read_addr 
                               - (IData)(0x2000000U))),32);
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state));
    bufp->fullBit(oldp+583,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state)
                              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state) 
                                 & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_read_req) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid))))
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid))));
    bufp->fullIData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__read_addr),32);
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_read_req));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_write_req));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__wvalid_reg));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__state));
    bufp->fullBit(oldp+589,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__state)
                              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__state) 
                                 & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready))))
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_ready)))));
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r),8);
    bufp->fullQData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r),64);
    bufp->fullCData(oldp+593,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                     >> 5U))),3);
    bufp->fullBit(oldp+594,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                   >> 4U))));
    bufp->fullBit(oldp+595,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                   >> 3U))));
    bufp->fullBit(oldp+596,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                   >> 2U))));
    bufp->fullBit(oldp+597,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                   >> 1U))));
    bufp->fullBit(oldp+598,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__pready_reg));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__pslverr_reg));
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__prdata_reg),32);
    bufp->fullSData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullSData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_in_reg),16);
    bufp->fullIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg),32);
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+611,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((9U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U))))))))),4);
    bufp->fullBit(oldp+612,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+615,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+616,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+621,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+625,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullSData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready));
    bufp->fullIData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata),32);
    bufp->fullSData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+654,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+655,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+656,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+657,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+658,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+659,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+660,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+664,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+666,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+667,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+669,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+673,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+674,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+676,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+694,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+695,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+696,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+697,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+698,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+699,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+700,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+703,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+704,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+705,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+724,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+731,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+750,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+751,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+752,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+753,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+754,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+773,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+774,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+775,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+776,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+777,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+779,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+798,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+815,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+826,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullSData(oldp+828,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr[0]),13);
    bufp->fullSData(oldp+829,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr[1]),13);
    bufp->fullSData(oldp+830,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr[2]),13);
    bufp->fullSData(oldp+831,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr[3]),13);
    bufp->fullSData(oldp+832,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en)
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+833,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout),16);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Brust_Length),3);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__L_bank),2);
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dqm_bufL));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dqm_bufH));
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt),4);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt),4);
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en));
    bufp->fullSData(oldp+842,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr),9);
    bufp->fullSData(oldp+843,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_addr),9);
    bufp->fullSData(oldp+844,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_data),16);
    bufp->fullIData(oldp+845,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_sdram_addr),22);
    bufp->fullIData(oldp+846,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_sdram_addr),22);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__length),4);
    bufp->fullSData(oldp+848,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr[0]),13);
    bufp->fullSData(oldp+849,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr[1]),13);
    bufp->fullSData(oldp+850,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr[2]),13);
    bufp->fullSData(oldp+851,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr[3]),13);
    bufp->fullSData(oldp+852,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en)
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+853,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout),16);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Brust_Length),3);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__L_bank),2);
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dqm_bufL));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dqm_bufH));
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt),4);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt),4);
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en));
    bufp->fullSData(oldp+862,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr),9);
    bufp->fullSData(oldp+863,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_addr),9);
    bufp->fullSData(oldp+864,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_data),16);
    bufp->fullIData(oldp+865,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_sdram_addr),22);
    bufp->fullIData(oldp+866,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_sdram_addr),22);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__length),4);
    bufp->fullSData(oldp+868,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr[0]),13);
    bufp->fullSData(oldp+869,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr[1]),13);
    bufp->fullSData(oldp+870,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr[2]),13);
    bufp->fullSData(oldp+871,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr[3]),13);
    bufp->fullSData(oldp+872,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en)
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+873,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout),16);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Brust_Length),3);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__L_bank),2);
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dqm_bufL));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dqm_bufH));
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt),4);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt),4);
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en));
    bufp->fullSData(oldp+882,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr),9);
    bufp->fullSData(oldp+883,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_addr),9);
    bufp->fullSData(oldp+884,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_data),16);
    bufp->fullIData(oldp+885,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_sdram_addr),22);
    bufp->fullIData(oldp+886,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_sdram_addr),22);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__length),4);
    bufp->fullSData(oldp+888,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr[0]),13);
    bufp->fullSData(oldp+889,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr[1]),13);
    bufp->fullSData(oldp+890,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr[2]),13);
    bufp->fullSData(oldp+891,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr[3]),13);
    bufp->fullSData(oldp+892,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en)
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+893,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout),16);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Brust_Length),3);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__L_bank),2);
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dqm_bufL));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dqm_bufH));
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt),4);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt),4);
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en));
    bufp->fullSData(oldp+902,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr),9);
    bufp->fullSData(oldp+903,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_addr),9);
    bufp->fullSData(oldp+904,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_data),16);
    bufp->fullIData(oldp+905,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_sdram_addr),22);
    bufp->fullIData(oldp+906,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_sdram_addr),22);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__length),4);
    bufp->fullQData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__eu_to_lu_bus),64);
    bufp->fullIData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc),32);
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_valid));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__state));
    bufp->fullQData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r),59);
    bufp->fullWData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r),128);
    bufp->fullIData(oldp+919,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                       >> 0x1bU))),32);
    bufp->fullIData(oldp+920,((0x1ffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                   >> 0xaU)))),17);
    bufp->fullBit(oldp+921,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 9U)))));
    bufp->fullBit(oldp+922,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 8U)))));
    bufp->fullBit(oldp+923,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 7U)))));
    bufp->fullBit(oldp+924,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 6U)))));
    bufp->fullBit(oldp+925,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 5U)))));
    bufp->fullBit(oldp+926,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 4U)))));
    bufp->fullBit(oldp+927,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 3U)))));
    bufp->fullBit(oldp+928,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 2U)))));
    bufp->fullBit(oldp+929,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 1U)))));
    bufp->fullBit(oldp+930,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r))));
    bufp->fullIData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U]),32);
    bufp->fullIData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]),32);
    bufp->fullIData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[1U]),32);
    bufp->fullIData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[0U]),32);
    bufp->fullIData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2),32);
    bufp->fullIData(oldp+936,(((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 6U)))
                                ? (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                           >> 0x16U))))) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                              >> 0x19U))))) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)) 
                                      | ((1U & ((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                       >> 0x1aU))))) 
                                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))) 
                                         | ((1U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                          >> 0x17U))))) 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                       >> 0x18U))))) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)) 
                                               | (1U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                            >> 0x15U))))) 
                                                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))))))))
                                : 1U)),32);
    bufp->fullBit(oldp+937,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+938,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+939,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+940,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+941,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+942,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+943,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+944,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+945,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+946,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+947,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+948,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+949,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+950,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+951,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+952,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+953,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x1aU)))));
    bufp->fullIData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0),32);
    bufp->fullIData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0),32);
    bufp->fullIData(oldp+956,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))),32);
    bufp->fullIData(oldp+957,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))),32);
    bufp->fullIData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1),32);
    bufp->fullIData(oldp+959,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))),32);
    bufp->fullIData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b),32);
    bufp->fullIData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d),32);
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin));
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1));
    bufp->fullIData(oldp+964,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                               + (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d 
                                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1)))),32);
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1));
    bufp->fullIData(oldp+966,((1U & (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2 
                                          >> 0x1fU)) 
                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
                                         >> 0x1fU)) 
                                     | ((~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2) 
                                            >> 0x1fU)) 
                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
                                           >> 0x1fU))))),32);
    bufp->fullIData(oldp+967,((1U & (~ (IData)((1ULL 
                                                & (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1)) 
                                                    + 
                                                    ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                     + (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                   >> 0x20U)))))),32);
    bufp->fullIData(oldp+968,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2)),32);
    bufp->fullIData(oldp+969,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2)),32);
    bufp->fullIData(oldp+970,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2)),32);
    bufp->fullIData(oldp+971,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
                               << (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2))),32);
    bufp->fullQData(oldp+972,(((((QData)((IData)((- (IData)((IData)(
                                                                    ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                      >> 0x13U) 
                                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
                                                                        >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1))) 
                               >> (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2))),64);
    bufp->fullIData(oldp+974,((IData)(((((QData)((IData)(
                                                         (- (IData)((IData)(
                                                                            ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                              >> 0x13U) 
                                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1))) 
                                       >> (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2)))),32);
    bufp->fullBit(oldp+975,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1)) 
                                                    + 
                                                    ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                     + (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                   >> 0x20U))))));
    bufp->fullBit(oldp+976,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+981,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+984,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+985,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+991,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+994,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+997,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1001,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1007,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1029,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1030,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1031,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1034,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1035,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1037,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+1039,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1040,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1046,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1bU)) 
                                        | ((0xcU & 
                                            (8U ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x17U)) 
                                              | (1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0xcU)))))))));
    bufp->fullBit(oldp+1047,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1048,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1049,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1056,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x1bU)) 
                                     | ((0xcU & (8U 
                                                 ^ 
                                                 (0x3cU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1aU)))) 
                                        | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x17U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0xcU))))))));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1058,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1059,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1069,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1070,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1071,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1072,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1073,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1074,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1075,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1076,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1077,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1078,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1079,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1080,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1081,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1082,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1083,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1084,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1085,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1086,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1087,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1088,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1089,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1090,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1091,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1092,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1093,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1094,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1095,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1096,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1097,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1098,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1099,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1100,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullIData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullIData(oldp+1116,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1124,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[0]),32);
    bufp->fullIData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[1]),32);
    bufp->fullIData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[2]),32);
    bufp->fullIData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[3]),32);
    bufp->fullIData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[4]),32);
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[5]),32);
    bufp->fullIData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[6]),32);
    bufp->fullIData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[7]),32);
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[8]),32);
    bufp->fullIData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[9]),32);
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[10]),32);
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[11]),32);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[12]),32);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[13]),32);
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[14]),32);
    bufp->fullIData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[15]),32);
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[16]),32);
    bufp->fullIData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[17]),32);
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[18]),32);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[19]),32);
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[20]),32);
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[21]),32);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[22]),32);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[23]),32);
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[24]),32);
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[25]),32);
    bufp->fullIData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[26]),32);
    bufp->fullIData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[27]),32);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[28]),32);
    bufp->fullIData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[29]),32);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[30]),32);
    bufp->fullIData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[31]),32);
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1165,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1166,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1167,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1168,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+1170,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1171,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1172,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1173,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+1176,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullSData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullCData(oldp+1184,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))),3);
    bufp->fullCData(oldp+1185,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1186,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullBit(oldp+1187,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 2U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 7U
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                                  >> 2U)))));
    bufp->fullBit(oldp+1188,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 1U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 7U
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+1189,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                                     : ((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                         ? 7U : (7U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))))));
    bufp->fullBit(oldp+1190,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 2U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                                    : 7U) 
                                                  >> 2U)))));
    bufp->fullBit(oldp+1191,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 1U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                                    : 7U) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+1192,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                                     : ((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                         ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                         : 7U)))));
    bufp->fullIData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1194,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullSData(oldp+1195,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w)),16);
    bufp->fullQData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus),55);
    bufp->fullQData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_eu_bus),59);
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_lu_bus),5);
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_wu_bus),8);
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_valid));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_ready));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_s));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_l));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_we));
    bufp->fullIData(oldp+1208,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                        >> 0x17U))),32);
    bufp->fullCData(oldp+1209,((0x1fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                                 >> 0x12U)))),5);
    bufp->fullCData(oldp+1210,((0x1fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                                 >> 0xdU)))),5);
    bufp->fullCData(oldp+1211,((0x1fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                                 >> 8U)))),5);
    bufp->fullBit(oldp+1212,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                            >> 7U)))));
    bufp->fullBit(oldp+1213,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                            >> 6U)))));
    bufp->fullBit(oldp+1214,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                            >> 5U)))));
    bufp->fullBit(oldp+1215,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                            >> 4U)))));
    bufp->fullBit(oldp+1216,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                            >> 3U)))));
    bufp->fullBit(oldp+1217,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                            >> 2U)))));
    bufp->fullBit(oldp+1218,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                            >> 1U)))));
    bufp->fullBit(oldp+1219,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus))));
    bufp->fullBit(oldp+1220,((IData)((0ULL != (0x42ULL 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1221,((IData)((0ULL != (0x12ULL 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1222,((IData)((0ULL != (0x23ULL 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1223,(((IData)((0ULL != (0x12ULL 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
    bufp->fullBit(oldp+1224,(((IData)((0ULL != (0x42ULL 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
    bufp->fullBit(oldp+1225,(((IData)((0ULL != (0x23ULL 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
    bufp->fullBit(oldp+1226,(((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                       >> 7U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
    bufp->fullBit(oldp+1227,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0ULL == (0x7c0000ULL 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1228,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0x280000ULL == (0x7c0000ULL 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1229,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0x2c0000ULL == (0x7c0000ULL 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1230,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0x300000ULL == (0x7c0000ULL 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1231,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0x340000ULL == (0x7c0000ULL 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1232,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0x380000ULL == (0x7c0000ULL 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1233,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0x3c0000ULL == (0x7c0000ULL 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1234,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0x40000ULL == (0x7c0000ULL 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1235,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0x80000ULL == (0x7c0000ULL 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1236,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0xc0000ULL == (0x7c0000ULL 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1237,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0x100000ULL == (0x7c0000ULL 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1238,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0x140000ULL == (0x7c0000ULL 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1239,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0x180000ULL == (0x7c0000ULL 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1240,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0x1c0000ULL == (0x7c0000ULL 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1241,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0x200000ULL == (0x7c0000ULL 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1242,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0) 
                              & (0x240000ULL == (0x7c0000ULL 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__state));
    bufp->fullIData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r),32);
    bufp->fullCData(oldp+1245,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1246,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+1247,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                         >> 7U))),5);
    bufp->fullIData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm),32);
    bufp->fullIData(oldp+1249,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bltu) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_blt) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bgeu) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bge) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_beq) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bne) 
                                                           << 0xbU) 
                                                          | (((0x37U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 0xaU) 
                                                             | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srai) 
                                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sra)) 
                                                                 << 9U) 
                                                                | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srli) 
                                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srl)) 
                                                                    << 8U) 
                                                                   | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_slli) 
                                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sll)) 
                                                                       << 7U) 
                                                                      | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_xor) 
                                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_xori)) 
                                                                          << 6U) 
                                                                         | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_or) 
                                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_ori)) 
                                                                             << 5U) 
                                                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_and) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_andi)) 
                                                                                << 4U) 
                                                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sltu) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sltiu)) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_slt) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sub) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_add) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_addi) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                | ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sb) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_jarl) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lw) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lbu) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__half_sext) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lhu) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sw) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sh) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__bit_sext)))))))))))))))))))))))))))))),17);
    bufp->fullBit(oldp+1250,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_R) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_addi) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_jarl) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sltiu) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srai) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_andi) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_xori) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srli) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_slli) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_ori) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csrrw_op) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csrrs_op) 
                                                               | ((0x6fU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                  | ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                     | ((0x37U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rlsu_we))))))))))))))))));
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rlsu_we));
    bufp->fullBit(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__wlsu_we));
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__bit_sext));
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__half_sext));
    bufp->fullCData(oldp+1255,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lw) 
                                 << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__half_sext) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lhu)) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__bit_sext) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lbu))))),3);
    bufp->fullCData(oldp+1256,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sw) 
                                 << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sh) 
                                            << 1U) 
                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sb)))),3);
    bufp->fullBit(oldp+1257,(((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                              | ((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__double_cal)))));
    bufp->fullBit(oldp+1258,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_I) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sw) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sh) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sb) 
                                       | ((0x37U == 
                                           (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                          | ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                             | ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__double_cal) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_jarl)))))))))));
    bufp->fullBit(oldp+1259,(((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_jarl) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__double_cal) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0))))));
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__double_cal));
    bufp->fullBit(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__ebreak));
    bufp->fullBit(oldp+1262,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__double_cal) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_I) 
                                          | ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__ebreak) 
                                                 | (IData)(
                                                           ((0U 
                                                             == 
                                                             (0xfffffU 
                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0)))) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_R) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__wlsu_we) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_U) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_W) 
                                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0)))))))))))));
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csr_w_gpr_we));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csrrw_op));
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csrrs_op));
    bufp->fullBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__ecall_en));
    bufp->fullBit(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__mret_en));
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op));
    bufp->fullBit(oldp+1269,(((0x305U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op))));
    bufp->fullBit(oldp+1270,(((0x341U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op))));
    bufp->fullBit(oldp+1271,(((0x300U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op))));
    bufp->fullBit(oldp+1272,(((0x342U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op))));
    bufp->fullBit(oldp+1273,(((0xf11U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op))));
    bufp->fullBit(oldp+1274,(((0xf12U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op))));
    bufp->fullCData(oldp+1275,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+1276,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                >> 0x1aU)),6);
    bufp->fullCData(oldp+1277,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1278,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)),7);
    bufp->fullIData(oldp+1279,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                             >> 0x14U))),32);
    bufp->fullIData(oldp+1280,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1281,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                      >> 7U)))))),32);
    bufp->fullIData(oldp+1282,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)),32);
    bufp->fullIData(oldp+1283,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r) 
                                              | ((0x800U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x14U)))))),32);
    bufp->fullWData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__opcode_31_25_d),128);
    bufp->fullQData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__opcode_31_26_d),64);
    bufp->fullCData(oldp+1290,((((7U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                               >> 0xcU))) 
                                 << 7U) | (((6U == 
                                             (7U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                               >> 0xcU))) 
                                            << 6U) 
                                           | (((5U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0xcU))) 
                                               << 5U) 
                                              | (((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0xcU))) 
                                                  << 4U) 
                                                 | (((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0xcU))) 
                                                     << 3U) 
                                                    | (((2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0xcU))) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0xcU))) 
                                                           << 1U) 
                                                          | (0U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0xcU))))))))))),8);
    bufp->fullWData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__opcode_06_00_d),128);
    bufp->fullIData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rs1_d),32);
    bufp->fullIData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rs2_d),32);
    bufp->fullIData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rd_d),32);
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_add));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_and));
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_or));
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_ori));
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_xor));
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_xori));
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sub));
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_slt));
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sltu));
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_addi));
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_andi));
    bufp->fullBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_jarl));
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lbu));
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lhu));
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lw));
    bufp->fullBit(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sll));
    bufp->fullBit(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_slli));
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sltiu));
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sra));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srai));
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srl));
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srli));
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sb));
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sh));
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sw));
    bufp->fullBit(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_beq));
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bne));
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bge));
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bgeu));
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_blt));
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bltu));
    bufp->fullBit(oldp+1329,((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r))));
    bufp->fullBit(oldp+1330,((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r))));
    bufp->fullBit(oldp+1331,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r))));
    bufp->fullBit(oldp+1332,((IData)(((0U == (0xfffffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0)))));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_R));
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_I));
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_U));
    bufp->fullBit(oldp+1336,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__ebreak) 
                              | (IData)(((0U == (0xfffffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0))))));
    bufp->fullIData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result),32);
    bufp->fullCData(oldp+1338,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0)
                                 ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullIData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullIData(oldp+1344,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+1345,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1351,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullIData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+1362,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)),32);
    bufp->fullIData(oldp+1363,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+1366,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+1367,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1372,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1373,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1374,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU))),2);
    bufp->fullCData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_2),3);
    bufp->fullIData(oldp+1376,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel));
    bufp->fullIData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr),32);
    bufp->fullBit(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_psel));
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable));
    bufp->fullCData(oldp+1381,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                 ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                          ? 1U : 0U))),3);
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite));
    bufp->fullIData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata),32);
    bufp->fullCData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb),4);
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel));
    bufp->fullCData(oldp+1386,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)),5);
    bufp->fullBit(oldp+1387,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullBit(oldp+1388,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullCData(oldp+1389,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                  & (0xcU == (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
                                 << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (8U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                & (4U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                 & (0U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))))))),4);
    bufp->fullBit(oldp+1390,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullCData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1392,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullIData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullIData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wgpr_data),32);
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wcsr_data),32);
    bufp->fullIData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h53724e58__0),32);
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullSData(oldp+1402,(vlSelf->ysyxSoCFull__DOT___asic_sdram_a),14);
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1409,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__cmd),3);
    bufp->fullCData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__cmd),3);
    bufp->fullIData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1),32);
    bufp->fullIData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_result1),32);
    bufp->fullIData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result),32);
    bufp->fullBit(oldp+1429,(vlSelf->clock));
    bufp->fullBit(oldp+1430,(vlSelf->reset));
    bufp->fullSData(oldp+1431,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1432,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1433,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1434,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1435,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1436,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1437,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1438,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1439,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1440,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1441,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1442,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1443,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1444,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1445,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1446,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1447,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1448,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1449,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1450,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1452,(((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1454,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1455,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1456,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1457,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pready)))));
    bufp->fullIData(oldp+1458,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_prdata
                                     : 0U))),32);
    bufp->fullIData(oldp+1459,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1460,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullCData(oldp+1461,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1462,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                 << 0x23U) | (((QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                               << 3U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                    << 1U))))))),39);
    bufp->fullBit(oldp+1464,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullBit(oldp+1465,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    __Vtemp_h05e8bde2__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc;
    __Vtemp_h05e8bde2__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec;
    __Vtemp_h05e8bde2__0[2U] = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h53724e58__0)) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs
                                                          [
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                                                      >> 8U)))]))));
    __Vtemp_h05e8bde2__0[3U] = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h53724e58__0)) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs
                                                           [
                                                           (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                                                       >> 8U)))]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1467,(__Vtemp_h05e8bde2__0),128);
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready));
    bufp->fullBit(oldp+1472,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__state)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__state) 
                                  & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_valid) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready))))
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_valid) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready)))));
    bufp->fullIData(oldp+1473,(((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                               >> 3U)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[1U]
                                 : ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                   >> 2U)))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[0U]
                                     : ((1U & (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                       >> 7U)))
                                         ? ((1U == 
                                             ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                             >> 6U)))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                          >> 0x16U))))) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)) 
                                                  | (((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                             >> 0x19U))))) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)) 
                                                     | ((1U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x1aU))))) 
                                                            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))) 
                                                        | ((1U 
                                                            & ((- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x17U))))) 
                                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))) 
                                                           | (((- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x18U))))) 
                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)) 
                                                              | (1U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x15U))))) 
                                                                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))))))))
                                               : 1U))
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_result1
                                             : ((IData)(4U) 
                                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc))
                                         : ((IData)(4U) 
                                            + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc))))),32);
    bufp->fullIData(oldp+1474,(((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                               >> 7U)))
                                 ? ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_result1)),32);
    bufp->fullBit(oldp+1475,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__state)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__state) 
                                  & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_valid) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready))))
                               : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_valid)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready)))));
    bufp->fullIData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs
                               [(0x1fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                                  >> 8U)))]),32);
    bufp->fullIData(oldp+1477,(((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                               >> 1U)))
                                 ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                            >> 0x17U))
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wcsr_data)),32);
    bufp->fullIData(oldp+1478,(((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                               >> 1U)))
                                 ? 0xbU : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wcsr_data)),32);
    bufp->fullIData(oldp+1479,(((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                               >> 1U)))
                                 ? 0x1800U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus))
                                               ? (0xffffe7ffU 
                                                  & (0x80U 
                                                     | ((0xfffffff7U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus) 
                                                        | (8U 
                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus 
                                                              >> 4U)))))
                                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wcsr_data))),32);
    bufp->fullBit(oldp+1480,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__state)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__state) 
                                  & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_valid) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready))))
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_ready)))));
    bufp->fullBit(oldp+1481,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__state)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__state) 
                                  & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready))))
                               : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                  != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr))));
    bufp->fullBit(oldp+1482,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_cpu__DOT__state)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_cpu__DOT__state) 
                                  & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_ready))))
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_valid)))));
    bufp->fullCData(oldp+1483,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid))
                                     ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid)
                                              ? 1U : 0U))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))
                                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready))
                                         ? 0U : 1U)
                                     : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))
                                         ? (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready)) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready))) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready)))
                                             ? 0U : 2U)
                                         : 0U)))),2);
    bufp->fullIData(oldp+1484,(((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                              >> 5U)))
                                 ? ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result 
                                                        >> 7U)))) 
                                         << 8U) | (0xffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result))
                                     : (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result))
                                 : ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                  >> 5U)))
                                     ? ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result 
                                                            >> 0xfU)))) 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result))
                                         : (0xffffU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result))
                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result))),32);
    bufp->fullBit(oldp+1485,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
                              & (0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))))));
    bufp->fullIData(oldp+1486,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                 ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wgpr_data
                                          : ((1U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                >> 5U)))
                                              ? ((0x10U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result))
                                                  : 
                                                 (0xffU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result))
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                      >> 5U)))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result))
                                                   : 
                                                  (0xffffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result))
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result))))),32);
    bufp->fullBit(oldp+1487,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1490,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullIData(oldp+1491,((0x3440U | (((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_state)) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable))) 
                                           << 8U))),32);
    bufp->fullBit(oldp+1492,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable)))));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1495,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg));
    bufp->fullCData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_reg),8);
    bufp->fullCData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_cnt),4);
    bufp->fullBit(oldp+1502,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1504,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1506,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_hae064a90__0 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+1511,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+1512,(1U),3);
    bufp->fullBit(oldp+1513,(0U));
    bufp->fullBit(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1520,(1U));
    bufp->fullIData(oldp+1521,(0U),32);
    bufp->fullCData(oldp+1522,(0U),4);
    bufp->fullCData(oldp+1523,(0U),8);
    bufp->fullCData(oldp+1524,(0U),3);
    bufp->fullCData(oldp+1525,(0U),2);
    bufp->fullSData(oldp+1526,(0x300U),12);
    bufp->fullSData(oldp+1527,(0x305U),12);
    bufp->fullSData(oldp+1528,(0x341U),12);
    bufp->fullSData(oldp+1529,(0x342U),12);
    bufp->fullSData(oldp+1530,(0xf11U),12);
    bufp->fullSData(oldp+1531,(0xf12U),12);
    bufp->fullCData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arid),4);
    bufp->fullCData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arlen),8);
    bufp->fullCData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arsize),3);
    bufp->fullCData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arburst),2);
    bufp->fullCData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awid),4);
    bufp->fullCData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awlen),8);
    bufp->fullCData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize),3);
    bufp->fullCData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awburst),2);
    bufp->fullBit(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullCData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arid),4);
    bufp->fullCData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arlen),8);
    bufp->fullCData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullCData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arburst),2);
    bufp->fullBit(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullCData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rid),4);
    bufp->fullIData(oldp+1547,(0x20U),32);
    bufp->fullIData(oldp+1548,(0x30000000U),32);
    bufp->fullBit(oldp+1549,(0U));
    bufp->fullBit(oldp+1550,(1U));
    bufp->fullIData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__aupic_result),32);
    bufp->fullIData(oldp+1552,(0x17dc685U),32);
    bufp->fullIData(oldp+1553,(0x1800U),32);
    bufp->fullIData(oldp+1554,(0x79737978U),32);
    bufp->fullBit(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rw_word_1));
    bufp->fullBit(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rw_word_2));
    bufp->fullBit(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rw_word_4));
    bufp->fullBit(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_W));
    bufp->fullQData(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_cpu__DOT__eu_to_lu_bus_r),64);
    bufp->fullIData(oldp+1561,(0x2000000U),32);
    bufp->fullCData(oldp+1562,(1U),2);
    bufp->fullCData(oldp+1563,(2U),2);
    bufp->fullIData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__write_addr),32);
    bufp->fullIData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__write_data),32);
    bufp->fullCData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__write_strb),4);
    bufp->fullIData(oldp+1567,(0x10002000U),32);
    bufp->fullIData(oldp+1568,(0x10002004U),32);
    bufp->fullIData(oldp+1569,(0x10002008U),32);
    bufp->fullCData(oldp+1570,(4U),3);
    bufp->fullCData(oldp+1571,(0x1bU),8);
    bufp->fullCData(oldp+1572,(0xebU),8);
    bufp->fullCData(oldp+1573,(0x38U),8);
    bufp->fullIData(oldp+1574,(0x64U),32);
    bufp->fullIData(oldp+1575,(0x18U),32);
    bufp->fullIData(oldp+1576,(9U),32);
    bufp->fullIData(oldp+1577,(2U),32);
    bufp->fullIData(oldp+1578,(4U),32);
    bufp->fullIData(oldp+1579,(8U),32);
    bufp->fullIData(oldp+1580,(0xdU),32);
    bufp->fullIData(oldp+1581,(0x2000U),32);
    bufp->fullIData(oldp+1582,(0x2710U),32);
    bufp->fullIData(oldp+1583,(0x30cU),32);
    bufp->fullCData(oldp+1584,(7U),4);
    bufp->fullCData(oldp+1585,(3U),4);
    bufp->fullCData(oldp+1586,(5U),4);
    bufp->fullCData(oldp+1587,(4U),4);
    bufp->fullCData(oldp+1588,(6U),4);
    bufp->fullCData(oldp+1589,(2U),4);
    bufp->fullCData(oldp+1590,(1U),4);
    bufp->fullSData(oldp+1591,(0x20U),13);
    bufp->fullCData(oldp+1592,(8U),4);
    bufp->fullCData(oldp+1593,(9U),4);
    bufp->fullIData(oldp+1594,(0xaU),32);
    bufp->fullIData(oldp+1595,(6U),32);
    bufp->fullIData(oldp+1596,(0x11U),32);
    bufp->fullIData(oldp+1597,(0x3fffffffU),32);
    bufp->fullCData(oldp+1598,(2U),3);
    bufp->fullCData(oldp+1599,(3U),3);
    bufp->fullCData(oldp+1600,(5U),3);
    bufp->fullCData(oldp+1601,(6U),3);
    bufp->fullCData(oldp+1602,(7U),3);
    bufp->fullCData(oldp+1603,(0x40U),7);
    bufp->fullIData(oldp+1604,(1U),32);
    bufp->fullCData(oldp+1605,(0xaU),4);
    bufp->fullIData(oldp+1606,(0xbU),32);
    bufp->fullIData(oldp+1607,(0x10U),32);
    bufp->fullIData(oldp+1608,(5U),32);
    bufp->fullCData(oldp+1609,(0x35U),8);
    bufp->fullIData(oldp+1610,(0x400000U),32);
}
