#ifndef _CRC_H_
#define _CRC_H_
#include "arch.h"

#ifdef __cplusplus
extern "C" {
#endif

    
extern UCHAR auchCRCHi[];
extern UCHAR auchCRCLo[];

DWORD BSPAPI CRC_CalcCRCDWORD(CONST DWORD *pdwBuffer, DWORD BufferLength);


WORD Modbus_calcul_crc(BYTE trame[], int n);
BOOL Modbus_test_crc(CONST BYTE trame[], int n);
//**************CRC分步计算相关接口  ADD By XueShaob 2014.04.11
//获取CRC校验的初始化参数
WORD Get_Fast_CRC_Param(VOID);

//添加多分步计算CRC接口，一片内存可以分多次传送
//返回值：当前数据的CRC值
//参数1： CRC计算的中间值，用于下一次的计算
WORD Calc_Fast_CRC_MulStep(  WORD *wParam, CONST BYTE trame[], int n);

    
    
WORD ModbusCalculCrcBigEndian(BYTE trame[], int n);
BOOL ModbusTestCrcBigEndian(CONST BYTE trame[], int n);

//__INLINE void Calc_Fast_CRC_MulOne(UCHAR *puchCRCHi,UCHAR *puchCRCLo,BYTE trame);
#ifdef __cplusplus
}
#endif
#endif /* _CRC_H_ */
