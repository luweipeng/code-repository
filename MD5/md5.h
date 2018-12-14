#ifndef __MD5_H

/* POINTER defines a generic pointer type */
typedef unsigned char * POINTER; 
  
/* UINT2 defines a two byte word */
//typedef unsigned short int UINT2; 
  
/* UINT4 defines a four byte word */
typedef unsigned long int UINT4; 
  
  
/* MD5 context. */
typedef struct { 
 UINT4 state[4];         /* state (ABCD) */
 UINT4 count[2];  /* number of bits, modulo 2^64 (lsb first) */
 unsigned char buffer[64];       /* input buffer */
} MD5_CTX; 


/*******************************************************************************
 * API
 ******************************************************************************/
/**
  * @brief      ��ʼ��MD5ģ�飬����״̬(ABCD)����ʼֵ
  * @note       
  * @attention  
  * @retval     None
  * @param      context��������̴�����ݵĽṹ��
  */
void MD5Init(MD5_CTX *context); 

/**
  * @brief      MD5״ֵ̬���£�������������ݽ��м������ ABCD��ֵ
  * @note       
  * @attention  
  * @retval     None
  * @param      context��������̴�����ݵĽṹ��
  * @param      input��ָ���������ݣ����������ݵ�ָ��
  * @param      inputLen���������ݵĳ���
  */
void MD5Update(MD5_CTX *context, unsigned char *input, unsigned int inputLen); 

/**
  * @brief      MD5�������ݼ���
  * @note       
  * @attention  
  * @retval     None
  * @param      context��������̴�����ݵĽṹ��
  * @param      digest���������hashֵ������
  */
void MD5Final(unsigned char digest[16], MD5_CTX *context); 

/**
  * @brief      MD5ģ��hashֵ�������߼�
  * @note       
  * @attention  
  * @retval     None
  * @param      pdata��ָ���������׵�ַ
  * @param      digest���������hashֵ������
  * @param      len������
  */
void MD5HashCalculate(unsigned char *pdata,unsigned int len,unsigned char digest[16]) ; 

#endif

