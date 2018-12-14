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
//**************CRC�ֲ�������ؽӿ�  ADD By XueShaob 2014.04.11
//��ȡCRCУ��ĳ�ʼ������
WORD Get_Fast_CRC_Param(VOID);

//��Ӷ�ֲ�����CRC�ӿڣ�һƬ�ڴ���Էֶ�δ���
//����ֵ����ǰ���ݵ�CRCֵ
//����1�� CRC������м�ֵ��������һ�εļ���
WORD Calc_Fast_CRC_MulStep(  WORD *wParam, CONST BYTE trame[], int n);

    
    
WORD ModbusCalculCrcBigEndian(BYTE trame[], int n);
BOOL ModbusTestCrcBigEndian(CONST BYTE trame[], int n);

//__INLINE void Calc_Fast_CRC_MulOne(UCHAR *puchCRCHi,UCHAR *puchCRCLo,BYTE trame);
#ifdef __cplusplus
}
#endif
#endif /* _CRC_H_ */
