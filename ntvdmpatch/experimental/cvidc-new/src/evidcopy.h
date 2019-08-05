/* Prototypes for copy functions used internally */

void S_2153_Unchained1PlaneByteFill (IU32 eaOff, IU8 eaVal, IU32 count);
void S_2155_CopyBytePlnByPlnUnchained_00000000_0000000e_00000001_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2159_Unchained1PlaneWordFill (IU32 eaOff, IU8 eaValLo, IU8 eaValHi, IU32 count);
void S_2156_CopyByte1PlaneUnchained_00000000_0000000e_00000001_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2161_CopyWordPlnByPlnUnchained_00000000_0000000e_00000001_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2162_CopyWord1PlaneUnchained_00000000_0000000e_00000001_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2169_CopyDirByte1Plane_00000000 (IU32 eaOff, IHPE fromOff, IU32 count);
void S_2174_CopyDirWord1Plane_00000000 (IU32 eaOff, IHPE fromOff, IU32 count);
void S_2175_CopyFwdWord1Plane (IU32 eaOff, IHPE fromOff, IU32 count);
void S_2182_CopyBytePlnByPlnUnchained_00000002_0000000e_00000001_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2183_CopyByte1PlaneUnchained_00000002_0000000e_00000001_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2187_CopyWordPlnByPlnUnchained_00000002_0000000e_00000001_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2188_CopyWord1PlaneUnchained_00000002_0000000e_00000001_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2195_CopyBytePlnByPlnUnchained_00000003_0000000e_00000001_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2196_CopyByte1PlaneUnchained_00000003_0000000e_00000001_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2200_CopyWordPlnByPlnUnchained_00000003_0000000e_00000001_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2201_CopyWord1PlaneUnchained_00000003_0000000e_00000001_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2206_CopyBytePlnByPlnUnchained_00000000_0000000e_00000001_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2207_CopyByte1PlaneUnchained_00000000_0000000e_00000001_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2209_CopyWordPlnByPlnUnchained_00000000_0000000e_00000001_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2210_CopyWord1PlaneUnchained_00000000_0000000e_00000001_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2213_CopyDirByte1Plane_00000001 (IU32 eaOff, IHPE fromOff, IU32 count);
void S_2214_CopyBwdByte1Plane (IU32 eaOff, IHPE fromOff, IU32 count);
void S_2216_CopyDirWord1Plane_00000001 (IU32 eaOff, IHPE fromOff, IU32 count);
void S_2217_CopyBwdWord1Plane (IU32 eaOff, IHPE fromOff, IU32 count);
void S_2220_CopyBytePlnByPlnUnchained_00000002_0000000e_00000001_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2221_CopyByte1PlaneUnchained_00000002_0000000e_00000001_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2223_CopyWordPlnByPlnUnchained_00000002_0000000e_00000001_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2224_CopyWord1PlaneUnchained_00000002_0000000e_00000001_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2227_CopyBytePlnByPlnUnchained_00000003_0000000e_00000001_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2228_CopyByte1PlaneUnchained_00000003_0000000e_00000001_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2230_CopyWordPlnByPlnUnchained_00000003_0000000e_00000001_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2231_CopyWord1PlaneUnchained_00000003_0000000e_00000001_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2264_Unchained4PlaneByteFill(IU32 eaOff, IU8 eaVal, IU32 count);
void S_2276_CopyBytePlnByPlnUnchained_00000000_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2277_CopyByte1PlaneUnchained_00000000_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2279_CopyByte4PlaneUnchained_00000000_00000009_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2281_CopyBytePlnByPlnUnchained_00000000_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2282_CopyByte1PlaneUnchained_00000000_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2284_CopyByte4PlaneUnchained_00000000_0000000f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2286_CopyBytePlnByPlnUnchained_00000000_00000010_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2287_CopyByte1PlaneUnchained_00000000_00000010_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2289_CopyByte4PlaneUnchained_00000000_00000011_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2291_CopyBytePlnByPlnUnchained_00000000_00000016_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2292_CopyByte1PlaneUnchained_00000000_00000016_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2294_CopyByte4PlaneUnchained_00000000_00000017_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2296_CopyBytePlnByPlnUnchained_00000000_00000018_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2297_CopyByte1PlaneUnchained_00000000_00000018_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2299_CopyByte4PlaneUnchained_00000000_00000019_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2301_CopyBytePlnByPlnUnchained_00000000_0000001e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2302_CopyByte1PlaneUnchained_00000000_0000001e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2304_CopyByte4PlaneUnchained_00000000_0000001f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2319_Unchained4PlaneWordFill(IU32 eaOff, IU8 eaValLo, IU8 eaValHi, IU32 count);
void S_2331_CopyWordPlnByPlnUnchained_00000000_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2332_CopyWord1PlaneUnchained_00000000_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2334_CopyWord4PlaneUnchained_00000000_00000009_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2336_CopyWordPlnByPlnUnchained_00000000_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2337_CopyWord1PlaneUnchained_00000000_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2339_CopyWord4PlaneUnchained_00000000_0000000f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2341_CopyWordPlnByPlnUnchained_00000000_00000010_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2342_CopyWord1PlaneUnchained_00000000_00000010_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2344_CopyWord4PlaneUnchained_00000000_00000011_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2346_CopyWordPlnByPlnUnchained_00000000_00000016_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2347_CopyWord1PlaneUnchained_00000000_00000016_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2349_CopyWord4PlaneUnchained_00000000_00000017_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2351_CopyWordPlnByPlnUnchained_00000000_00000018_00000000_00000000(IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2352_CopyWord1PlaneUnchained_00000000_00000018_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2354_CopyWord4PlaneUnchained_00000000_00000019_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2356_CopyWordPlnByPlnUnchained_00000000_0000001e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2357_CopyWord1PlaneUnchained_00000000_0000001e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2359_CopyWord4PlaneUnchained_00000000_0000001f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2415_CopyByte1PlaneUnchained_00000002_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2417_CopyByte4PlaneUnchained_00000002_00000009_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2419_CopyBytePlnByPlnUnchained_00000002_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2420_CopyByte1PlaneUnchained_00000002_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2422_CopyByte4PlaneUnchained_00000002_0000000f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2414_CopyBytePlnByPlnUnchained_00000002_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2432_CopyWordPlnByPlnUnchained_00000002_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2433_CopyWord1PlaneUnchained_00000002_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2435_CopyWord4PlaneUnchained_00000002_00000009_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2437_CopyWordPlnByPlnUnchained_00000002_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2438_CopyWord1PlaneUnchained_00000002_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2440_CopyWord4PlaneUnchained_00000002_0000000f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2462_CopyBytePlnByPlnUnchained_00000003_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2463_CopyByte1PlaneUnchained_00000003_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2465_CopyByte4PlaneUnchained_00000003_00000009_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2467_CopyBytePlnByPlnUnchained_00000003_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2468_CopyByte1PlaneUnchained_00000003_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2470_CopyByte4PlaneUnchained_00000003_0000000f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2480_CopyWordPlnByPlnUnchained_00000003_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2481_CopyWord1PlaneUnchained_00000003_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2483_CopyWord4PlaneUnchained_00000003_00000009_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2485_CopyWordPlnByPlnUnchained_00000003_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2486_CopyWord1PlaneUnchained_00000003_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2488_CopyWord4PlaneUnchained_00000003_0000000f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2502_CopyBytePlnByPlnUnchained_00000000_00000008_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2503_CopyByte1PlaneUnchained_00000000_00000008_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2505_CopyByte4PlaneUnchained_00000000_00000009_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2507_CopyBytePlnByPlnUnchained_00000000_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2508_CopyByte1PlaneUnchained_00000000_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2510_CopyByte4PlaneUnchained_00000000_0000000f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2512_CopyBytePlnByPlnUnchained_00000000_00000010_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2513_CopyByte1PlaneUnchained_00000000_00000010_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2515_CopyByte4PlaneUnchained_00000000_00000011_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2517_CopyBytePlnByPlnUnchained_00000000_00000016_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2518_CopyByte1PlaneUnchained_00000000_00000016_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2520_CopyByte4PlaneUnchained_00000000_00000017_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2522_CopyBytePlnByPlnUnchained_00000000_00000018_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2523_CopyByte1PlaneUnchained_00000000_00000018_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2525_CopyByte4PlaneUnchained_00000000_00000019_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2527_CopyBytePlnByPlnUnchained_00000000_0000001e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2528_CopyByte1PlaneUnchained_00000000_0000001e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2530_CopyByte4PlaneUnchained_00000000_0000001f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2532_CopyWordPlnByPlnUnchained_00000000_00000008_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2533_CopyWord1PlaneUnchained_00000000_00000008_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2535_CopyWord4PlaneUnchained_00000000_00000009_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2537_CopyWordPlnByPlnUnchained_00000000_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2538_CopyWord1PlaneUnchained_00000000_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2540_CopyWord4PlaneUnchained_00000000_0000000f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2542_CopyWordPlnByPlnUnchained_00000000_00000010_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2543_CopyWord1PlaneUnchained_00000000_00000010_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2545_CopyWord4PlaneUnchained_00000000_00000011_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2547_CopyWordPlnByPlnUnchained_00000000_00000016_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2548_CopyWord1PlaneUnchained_00000000_00000016_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2550_CopyWord4PlaneUnchained_00000000_00000017_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2552_CopyWordPlnByPlnUnchained_00000000_00000018_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2553_CopyWord1PlaneUnchained_00000000_00000018_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2555_CopyWord4PlaneUnchained_00000000_00000019_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2557_CopyWordPlnByPlnUnchained_00000000_0000001e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2558_CopyWord1PlaneUnchained_00000000_0000001e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2560_CopyWord4PlaneUnchained_00000000_0000001f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2577_CopyBytePlnByPlnUnchained_00000002_00000008_00000000_00000001(IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2578_CopyByte1PlaneUnchained_00000002_00000008_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2580_CopyByte4PlaneUnchained_00000002_00000009_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2582_CopyBytePlnByPlnUnchained_00000002_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2583_CopyByte1PlaneUnchained_00000002_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2585_CopyByte4PlaneUnchained_00000002_0000000f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2587_CopyWordPlnByPlnUnchained_00000002_00000008_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2588_CopyWord1PlaneUnchained_00000002_00000008_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2590_CopyWord4PlaneUnchained_00000002_00000009_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2592_CopyWordPlnByPlnUnchained_00000002_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2593_CopyWord1PlaneUnchained_00000002_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2595_CopyWord4PlaneUnchained_00000002_0000000f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2601_CopyBytePlnByPlnUnchained_00000003_00000008_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2602_CopyByte1PlaneUnchained_00000003_00000008_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2604_CopyByte4PlaneUnchained_00000003_00000009_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2606_CopyBytePlnByPlnUnchained_00000003_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2607_CopyByte1PlaneUnchained_00000003_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2609_CopyByte4PlaneUnchained_00000003_0000000f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2611_CopyWordPlnByPlnUnchained_00000003_00000008_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2612_CopyWord1PlaneUnchained_00000003_00000008_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2614_CopyWord4PlaneUnchained_00000003_00000009_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2616_CopyWordPlnByPlnUnchained_00000003_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2617_CopyWord1PlaneUnchained_00000003_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift);
void S_2619_CopyWord4PlaneUnchained_00000003_0000000f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2625_Chain2ModeXByteWrite_00000000 (IU32 eaOff, IU8 eaVal);
void S_2627_Chain2ModeXByteFill_00000000 (IU32 eaOff, IU8 eaVal, IU32 count);
void S_2629_Chain2ModeXFwdByteMove_00000000 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2631_Chain2ModeXWordWrite_00000000 (IU32 eaOff, IU16 eaVal);
void S_2633_Chain2ModeXWordFill_00000000 (IU32 eaOff, IU16 eaVal, IU32 count);
void S_2635_Chain2ModeXFwdWordMove_00000000 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2639_Chain2ModeXDwordFill_00000000 (IU32 eaOff, IU32 eaVal, IU32 count);
void S_2641_Chain2ModeXFwdDwordMove_00000000 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2643_Chain2ModeXByteWrite_00000001 (IU32 eaOff, IU8 eaVal);
void S_2645_Chain2ModeXByteFill_00000001 (IU32 eaOff, IU8 eaVal, IU32 count);
void S_2647_Chain2ModeXFwdByteMove_00000001 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2649_Chain2ModeXWordWrite_00000001 (IU32 eaOff, IU16 eaVal);
void S_2651_Chain2ModeXWordFill_00000001 (IU32 eaOff, IU16 eaVal, IU32 count);
void S_2653_Chain2ModeXFwdWordMove_00000001 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2657_Chain2ModeXDwordFill_00000001 (IU32 eaOff, IU32 eaVal, IU32 count);
void S_2659_Chain2ModeXFwdDwordMove_00000001 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2661_Chain2ModeXByteWrite_00000002 (IU32 eaOff, IU8 eaVal);
void S_2663_Chain2ModeXByteFill_00000002 (IU32 eaOff, IU8 eaVal, IU32 count);
void S_2665_Chain2ModeXFwdByteMove_00000002 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2667_Chain2ModeXWordWrite_00000002 (IU32 eaOff, IU16 eaVal);
void S_2669_Chain2ModeXWordFill_00000002 (IU32 eaOff, IU16 eaVal, IU32 count);
void S_2671_Chain2ModeXFwdWordMove_00000002 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2675_Chain2ModeXDwordFill_00000002 (IU32 eaOff, IU32 eaVal, IU32 count);
void S_2677_Chain2ModeXFwdDwordMove_00000002 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2679_Chain2ModeXByteWrite_00000003 (IU32 eaOff, IU8 eaVal);
void S_2681_Chain2ModeXByteFill_00000003 (IU32 eaOff, IU8 eaVal, IU32 count);
void S_2683_Chain2ModeXFwdByteMove_00000003 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2685_Chain2ModeXWordWrite_00000003 (IU32 eaOff, IU16 eaVal);
void S_2687_Chain2ModeXWordFill_00000003 (IU32 eaOff, IU16 eaVal, IU32 count);
void S_2689_Chain2ModeXFwdWordMove_00000003 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2693_Chain2ModeXDwordFill_00000003 (IU32 eaOff, IU32 eaVal, IU32 count);
void S_2695_Chain2ModeXFwdDwordMove_00000003 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2706_Chain2ModeXBwdByteMove_00000000 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2708_Chain2ModeXBwdWordMove_00000000 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2710_Chain2ModeXBwdDwordMove_00000000 (IU32 eaOff, IU32 eaVal);
void S_2712_Chain2ModeXBwdByteMove_00000001 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2714_Chain2ModeXBwdWordMove_00000001 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2716_Chain2ModeXBwdDwordMove_00000001 (IU32 eaOff, IU32 eaVal);
void S_2718_Chain2ModeXBwdByteMove_00000002 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2720_Chain2ModeXBwdWordMove_00000002 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2722_Chain2ModeXBwdDwordMove_00000002 (IU32 eaOff, IU32 eaVal);
void S_2724_Chain2ModeXBwdByteMove_00000003 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2726_Chain2ModeXBwdWordMove_00000003 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM);
void S_2728_Chain2ModeXBwdDwordMove_00000003 (IU32 eaOff, IU32 eaVal);
void S_2745_Chain41PlaneByteFill (IU32 eaOff, IU8 eaVal, IU32 count);
void S_2747_Chain44PlaneByteFill (IU32 eaOff, IU8 eaVal, IU32 count);
void S_2759_CopyBytePlnByPlnChain4_00000000_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2761_CopyByte4PlaneChain4_00000000_00000009_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2763_CopyBytePlnByPlnChain4_00000000_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2765_CopyByte4PlaneChain4_00000000_0000000f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2767_CopyBytePlnByPlnChain4_00000000_00000010_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2769_CopyByte4PlaneChain4_00000000_00000011_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2771_CopyBytePlnByPlnChain4_00000000_00000016_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2773_CopyByte4PlaneChain4_00000000_00000017_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2775_CopyBytePlnByPlnChain4_00000000_00000018_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2777_CopyByte4PlaneChain4_00000000_00000019_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2779_CopyBytePlnByPlnChain4_00000000_0000001e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2781_CopyByte4PlaneChain4_00000000_0000001f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2796_Chain44PlaneWordFill (IU32 eaOff, IU8 eaValLo, IU8 eaValHi, IU32 count);
void S_2808_CopyWordPlnByPlnChain4_00000000_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2810_CopyWord4PlaneChain4_00000000_00000009_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2812_CopyWordPlnByPlnChain4_00000000_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2814_CopyWord4PlaneChain4_00000000_0000000f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2816_CopyWordPlnByPlnChain4_00000000_00000010_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2818_CopyWord4PlaneChain4_00000000_00000011_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2820_CopyWordPlnByPlnChain4_00000000_00000016_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2822_CopyWord4PlaneChain4_00000000_00000017_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2824_CopyWordPlnByPlnChain4_00000000_00000018_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2826_CopyWord4PlaneChain4_00000000_00000019_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2828_CopyWordPlnByPlnChain4_00000000_0000001e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2830_CopyWord4PlaneChain4_00000000_0000001f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2870_CopyBytePlnByPlnChain4_00000001_00000000_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2886_CopyBytePlnByPlnChain4_00000002_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2888_CopyByte4PlaneChain4_00000002_00000009_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2890_CopyBytePlnByPlnChain4_00000002_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2892_CopyByte4PlaneChain4_00000002_0000000f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2902_CopyWordPlnByPlnChain4_00000002_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2904_CopyWord4PlaneChain4_00000002_00000009_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2906_CopyWordPlnByPlnChain4_00000002_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2908_CopyWord4PlaneChain4_00000002_0000000f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2930_CopyBytePlnByPlnChain4_00000003_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2932_CopyByte4PlaneChain4_00000003_00000009_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2934_CopyBytePlnByPlnChain4_00000003_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2936_CopyByte4PlaneChain4_00000003_0000000f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2946_CopyWordPlnByPlnChain4_00000003_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2948_CopyWord4PlaneChain4_00000003_00000009_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2950_CopyWordPlnByPlnChain4_00000003_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2952_CopyWord4PlaneChain4_00000003_0000000f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2966_CopyBytePlnByPlnChain4_00000000_00000008_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2968_CopyByte4PlaneChain4_00000000_00000009_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2970_CopyBytePlnByPlnChain4_00000000_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2972_CopyByte4PlaneChain4_00000000_0000000f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2974_CopyBytePlnByPlnChain4_00000000_00000010_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2976_CopyByte4PlaneChain4_00000000_00000011_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2978_CopyBytePlnByPlnChain4_00000000_00000016_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2980_CopyByte4PlaneChain4_00000000_00000017_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2982_CopyBytePlnByPlnChain4_00000000_00000018_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2984_CopyByte4PlaneChain4_00000000_00000019_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2986_CopyBytePlnByPlnChain4_00000000_0000001e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2988_CopyByte4PlaneChain4_00000000_0000001f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2990_CopyWordPlnByPlnChain4_00000000_00000008_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2992_CopyWord4PlaneChain4_00000000_00000009_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2994_CopyWordPlnByPlnChain4_00000000_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2996_CopyWord4PlaneChain4_00000000_0000000f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_2998_CopyWordPlnByPlnChain4_00000000_00000010_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3000_CopyWord4PlaneChain4_00000000_00000011_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3002_CopyWordPlnByPlnChain4_00000000_00000016_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3004_CopyWord4PlaneChain4_00000000_00000017_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3006_CopyWordPlnByPlnChain4_00000000_00000018_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3008_CopyWord4PlaneChain4_00000000_00000019_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3010_CopyWordPlnByPlnChain4_00000000_0000001e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3012_CopyWord4PlaneChain4_00000000_0000001f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3026_CopyBytePlnByPlnChain4_00000001_00000000_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3030_CopyBytePlnByPlnChain4_00000002_00000008_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3032_CopyByte4PlaneChain4_00000002_00000009_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3034_CopyBytePlnByPlnChain4_00000002_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3036_CopyByte4PlaneChain4_00000002_0000000f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3040_CopyWord4PlaneChain4_00000002_00000009_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3044_CopyWord4PlaneChain4_00000002_0000000f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3050_CopyBytePlnByPlnChain4_00000003_00000008_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3052_CopyByte4PlaneChain4_00000003_00000009_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3054_CopyBytePlnByPlnChain4_00000003_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3056_CopyByte4PlaneChain4_00000003_0000000f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3060_CopyWord4PlaneChain4_00000003_00000009_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3062_CopyWordPlnByPlnChain4_00000003_0000000e_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
void S_3064_CopyWord4PlaneChain4_00000003_0000000f_00000000_00000001 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM);
