struct stWin32Dll_rdata{
	FARPROC m0_GetTickCount;
	FARPROC m4_GetCurrentThreadId;
	FARPROC m8_GetCommandLineA;
	FARPROC mC_TerminateProcess;
	FARPROC m10_GetCurrentProcess;
	FARPROC m14_UnhandledExceptionFilter;
	FARPROC m18_SetUnhandledExceptionFilter;
	FARPROC m1C_IsDebuggerPresent;
	FARPROC m20_GetModuleHandleW;
	FARPROC m24_GetProcAddress;
	FARPROC m28_TlsGetValue;
	FARPROC m2C_TlsAlloc;
	FARPROC m30_TlsSetValue;
	FARPROC m34_TlsFree;
	FARPROC m38_InterlockedIncrement;
	FARPROC m3C_SetLastError;
	FARPROC m40_GetLastError;
	FARPROC m44_InterlockedDecrement;
	FARPROC m48_HeapFree;
	FARPROC m4C_Sleep;
	FARPROC m50_ExitProcess;
	FARPROC m54_SetHandleCount;
	FARPROC m58_GetStdHandle;
	FARPROC m5C_GetFileType;
	FARPROC m60_GetStartupInfoA;
	FARPROC m64_DeleteCriticalSection;
	FARPROC m68_GetModuleFileNameA;
	FARPROC m6C_FreeEnvironmentStringsA;
	FARPROC m70_GetEnvironmentStrings;
	FARPROC m74_FreeEnvironmentStringsW;
	FARPROC m78_WideCharToMultiByte;
	FARPROC m7C_GetEnvironmentStringsW;
	FARPROC m80_HeapCreate;
	FARPROC m84_HeapDestroy;
	FARPROC m88_VirtualFree;
	FARPROC m8C_QueryPerformanceCounter;
	FARPROC m90_GetCurrentProcessId;
	FARPROC m94_GetSystemTimeAsFileTime;
	FARPROC m98_LeaveCriticalSection;
	FARPROC m9C_EnterCriticalSection;
	FARPROC mA0_GetCPInfo;
	FARPROC mA4_GetACP;
	FARPROC mA8_GetOEMCP;
	FARPROC mAC_IsValidCodePage;
	FARPROC mB0_HeapAlloc;
	FARPROC mB4_VirtualAlloc;
	FARPROC mB8_HeapReAlloc;
	FARPROC mBC_WriteFile;
	FARPROC mC0_LoadLibraryA;
	FARPROC mC4_InitializeCriticalSectionAndSpinCount;
	FARPROC mC8_RtlUnwind;
	FARPROC mCC_GetLocaleInfoA;
	FARPROC mD0_GetStringTypeA;
	FARPROC mD4_MultiByteToWideChar;
	FARPROC mD8_GetStringTypeW;
	FARPROC mDC_LCMapStringA;
	FARPROC mE0_LCMapStringW;
	FARPROC mE4_HeapSize;
	UCHAR mE8[0x4];
	FARPROC mEC_MessageBoxA;
	UCHAR mF0[0x10];
	LPVOID m100_ptr;
	LPVOID m104_ptr;
	LPVOID m108_ptr;
	UCHAR m10C[0x34];
	LPVOID m140_ptr;
	LPVOID m144_ptr;
	CHAR m148_str[14];
	UCHAR m156[0x1E];
	CHAR m174_str[14];
	UCHAR m182[0x2];
	CHAR m184_str[8];
	CHAR m18C_str[12];
	CHAR m198_str[12];
	CHAR m1A4_str[9];
	UCHAR m1AD[0x3];
	CHAR m1B0_str[15];
	UCHAR m1BF[0x111];
	CHAR m2D0_str[15];
	UCHAR m2DF[0x5];
	CHAR m2E4_str[14];
	UCHAR m2F2[0x2];
	CHAR m2F4_str[13];
	UCHAR m301[0x3];
	CHAR m304_str[15];
	UCHAR m313[0x5];
	CHAR m318_str[155];
	UCHAR m3B3[0x5];
	CHAR m3B8_str[247];
	UCHAR m4AF[0x1];
	CHAR m4B0_str[51];
	UCHAR m4E3[0x5];
	CHAR m4E8_str[99];
	UCHAR m54B[0x1];
	CHAR m54C_str[31];
	UCHAR m56B[0x1];
	CHAR m56C_str[37];
	UCHAR m591[0x3];
	CHAR m594_str[53];
	UCHAR m5C9[0x3];
	CHAR m5CC_str[53];
	UCHAR m601[0x3];
	CHAR m604_str[38];
	UCHAR m62A[0x2];
	CHAR m62C_str[53];
	UCHAR m661[0x3];
	CHAR m664_str[41];
	UCHAR m68D[0x3];
	CHAR m690_str[33];
	UCHAR m6B1[0x3];
	CHAR m6B4_str[45];
	UCHAR m6E1[0x3];
	CHAR m6E4_str[44];
	CHAR m710_str[150];
	UCHAR m7A6[0x2];
	CHAR m7A8_str[44];
	CHAR m7D4_str[42];
	UCHAR m7FE[0x2];
	CHAR m800_str[45];
	UCHAR m82D[0x3];
	CHAR m830_str[37];
	UCHAR m855[0xB];
	CHAR m860_str[23];
	UCHAR m877[0x1];
	CHAR m878_str[26];
	UCHAR m892[0x80E];
	CHAR m10A0_str[9];
	UCHAR m10A9[0x3];
	CHAR m10AC_str[20];
	CHAR m10C0_str[9];
	UCHAR m10C9[0xB];
	CHAR m10D4_str[9];
	UCHAR m10DD[0x3];
	CHAR m10E0_str[9];
	UCHAR m10E9[0x3];
	CHAR m10EC_str[8];
	CHAR m10F4_str[10];
	UCHAR m10FE[0x2];
	CHAR m1100_str[7];
	UCHAR m1107[0x11];
	CHAR m1118_str[6];
	UCHAR m111E[0x2];
	CHAR m1120_str[6];
	UCHAR m1126[0x2];
	CHAR m1128_str[9];
	UCHAR m1131[0x3];
	CHAR m1134_str[8];
	UCHAR m113C[0x30];
	CHAR m116C_str[9];
	UCHAR m1175[0x3];
	CHAR m1178_str[7];
	UCHAR m117F[0x1];
	CHAR m1180_str[9];
	UCHAR m1189[0x3];
	CHAR m118C_str[10];
	UCHAR m1196[0x2];
	CHAR m1198_str[8];
	CHAR m11A0_str[7];
	UCHAR m11A7[0x1];
	CHAR m11A8_str[7];
	UCHAR m11AF[0x21];
	CHAR m11D0_str[24];
	CHAR m11E8_str[26];
	UCHAR m1202[0x2];
	CHAR m1204_str[19];
	UCHAR m1217[0x1];
	CHAR m1218_str[16];
	CHAR m1228_str[12];
	CHAR m1234_str[11];
	UCHAR m123F[0x1];
	CHAR m1240_str[22];
	UCHAR m1256[0x2];
	CHAR m1258_str[37];
	UCHAR m127D[0x3];
	CHAR m1280_str[15];
	UCHAR m128F[0x3D];
	LPVOID m12CC_ptr;
	LPVOID m12D0_ptr;
	UCHAR m12D4[0x1C];
	CHAR m12F0_str[70];
	UCHAR m1336[0x3E];
	LPVOID m1374_ptr;
	LPVOID m1378_ptr;
	UCHAR m137C[0x1C];
	LPVOID m1398_ptr;
	UCHAR m139C[0x8];
	LPVOID m13A4_ptr;
	UCHAR m13A8[0x18];
	LPVOID m13C0_ptr;
	UCHAR m13C4[0x8];
	LPVOID m13CC_ptr;
	UCHAR m13D0[0x18];
	LPVOID m13E8_ptr;
	UCHAR m13EC[0x1C];
	LPVOID m1408_ptr;
	UCHAR m140C[0x18];
	LPVOID m1424_ptr;
	LPVOID m1428_ptr;
	UCHAR m142C[0x1C];
	LPVOID m1448_ptr;
	UCHAR m144C[0x1C];
	LPVOID m1468_ptr;
	UCHAR m146C[0x1C];
	LPVOID m1488_ptr;
	UCHAR m148C[0x1C];
	LPVOID m14A8_ptr;
	UCHAR m14AC[0x1C];
	LPVOID m14C8_ptr;
	UCHAR m14CC[0x1C];
	LPVOID m14E8_ptr;
	UCHAR m14EC[0x1C];
	LPVOID m1508_ptr;
	UCHAR m150C[0x1C];
	LPVOID m1528_ptr;
	UCHAR m152C[0x18];
	LPVOID m1544_ptr;
	LPVOID m1548_ptr;
	UCHAR m154C[0x18];
	LPVOID m1564_ptr;
	LPVOID m1568_ptr;
	UCHAR m156C[0x1C];
	LPVOID m1588_ptr;
	UCHAR m158C[0x18];
	LPVOID m15A4_ptr;
	LPVOID m15A8_ptr;
	UCHAR m15AC[0x1C];
	LPVOID m15C8_ptr;
	UCHAR m15CC[0x18];
	LPVOID m15E4_ptr;
	LPVOID m15E8_ptr;
	UCHAR m15EC[0x132];
	CHAR m171E_str[12];
	CHAR m172A_str[11];
	UCHAR m1735[0x3];
	CHAR m1738_str[19];
	UCHAR m174B[0x3];
	CHAR m174E_str[16];
	UCHAR m175E[0x2];
	CHAR m1760_str[17];
	UCHAR m1771[0x3];
	CHAR m1774_str[18];
	UCHAR m1786[0x2];
	CHAR m1788_str[25];
	UCHAR m17A1[0x3];
	CHAR m17A4_str[28];
	UCHAR m17C0[0x2];
	CHAR m17C2_str[18];
	UCHAR m17D4[0x2];
	CHAR m17D6_str[17];
	UCHAR m17E7[0x3];
	CHAR m17EA_str[15];
	UCHAR m17F9[0x3];
	CHAR m17FC_str[12];
	UCHAR m1808[0x2];
	CHAR m180A_str[9];
	UCHAR m1813[0x3];
	CHAR m1816_str[12];
	UCHAR m1822[0x2];
	CHAR m1824_str[8];
	UCHAR m182C[0x2];
	CHAR m182E_str[21];
	UCHAR m1843[0x3];
	CHAR m1846_str[13];
	UCHAR m1853[0x3];
	CHAR m1856_str[13];
	UCHAR m1863[0x3];
	CHAR m1866_str[21];
	UCHAR m187B[0x3];
	CHAR m187E_str[9];
	UCHAR m1887[0x3];
	CHAR m188A_str[6];
	UCHAR m1890[0x2];
	CHAR m1892_str[12];
	UCHAR m189E[0x2];
	CHAR m18A0_str[15];
	UCHAR m18AF[0x3];
	CHAR m18B2_str[13];
	UCHAR m18BF[0x3];
	CHAR m18C2_str[12];
	UCHAR m18CE[0x2];
	CHAR m18D0_str[16];
	UCHAR m18E0[0x2];
	CHAR m18E2_str[22];
	UCHAR m18F8[0x2];
	CHAR m18FA_str[19];
	UCHAR m190D[0x3];
	CHAR m1910_str[24];
	UCHAR m1928[0x2];
	CHAR m192A_str[22];
	UCHAR m1940[0x2];
	CHAR m1942_str[24];
	UCHAR m195A[0x2];
	CHAR m195C_str[20];
	UCHAR m1970[0x2];
	CHAR m1972_str[23];
	UCHAR m1989[0x3];
	CHAR m198C_str[11];
	UCHAR m1997[0x3];
	CHAR m199A_str[12];
	UCHAR m19A6[0x2];
	CHAR m19A8_str[12];
	UCHAR m19B4[0x2];
	CHAR m19B6_str[24];
	UCHAR m19CE[0x2];
	CHAR m19D0_str[13];
	UCHAR m19DD[0x3];
	CHAR m19E0_str[20];
	UCHAR m19F4[0x2];
	CHAR m19F6_str[24];
	UCHAR m1A0E[0x2];
	CHAR m1A10_str[21];
	UCHAR m1A25[0x3];
	CHAR m1A28_str[21];
	UCHAR m1A3D[0x3];
	CHAR m1A40_str[10];
	UCHAR m1A4A[0x2];
	CHAR m1A4C_str[7];
	UCHAR m1A53[0x3];
	CHAR m1A56_str[9];
	UCHAR m1A5F[0x3];
	CHAR m1A62_str[16];
	UCHAR m1A72[0x2];
	CHAR m1A74_str[10];
	UCHAR m1A7E[0x2];
	CHAR m1A80_str[13];
	UCHAR m1A8D[0x3];
	CHAR m1A90_str[12];
	UCHAR m1A9C[0x2];
	CHAR m1A9E_str[10];
	UCHAR m1AA8[0x2];
	CHAR m1AAA_str[13];
	UCHAR m1AB7[0x3];
	CHAR m1ABA_str[38];
	UCHAR m1AE0[0x2];
	CHAR m1AE2_str[10];
	UCHAR m1AEC[0x2];
	CHAR m1AEE_str[15];
	UCHAR m1AFD[0x3];
	CHAR m1B00_str[15];
	UCHAR m1B0F[0x3];
	CHAR m1B12_str[20];
	UCHAR m1B26[0x2];
	CHAR m1B28_str[15];
	UCHAR m1B37[0x3];
	CHAR m1B3A_str[13];
	UCHAR m1B47[0x3];
	CHAR m1B4A_str[13];
	UCHAR m1B57[0x3];
	CHAR m1B5A_str[9];
	UCHAR m1B63[0x1];
	CHAR m1B64_str[13];
	UCHAR m1B71[0x41];
	CHAR m1BB2_str[13];
	CHAR m1BBF_str[8];
	UCHAR m1BC7[0x439];
};
