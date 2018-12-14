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
  * @brief      初始化MD5模块，即给状态(ABCD)赋初始值
  * @note       
  * @attention  
  * @retval     None
  * @param      context：运算过程存放数据的结构体
  */
void MD5Init(MD5_CTX *context); 

/**
  * @brief      MD5状态值更新，即将传入的数据进行计算更新 ABCD等值
  * @note       
  * @attention  
  * @retval     None
  * @param      context：运算过程存放数据的结构体
  * @param      input：指向输入数据，待计算数据的指针
  * @param      inputLen：输入数据的长度
  */
void MD5Update(MD5_CTX *context, unsigned char *input, unsigned int inputLen); 

/**
  * @brief      MD5最终数据计算
  * @note       
  * @attention  
  * @retval     None
  * @param      context：运算过程存放数据的结构体
  * @param      digest：存放最终hash值的数组
  */
void MD5Final(unsigned char digest[16], MD5_CTX *context); 

/**
  * @brief      MD5模块hash值计算主逻辑
  * @note       
  * @attention  
  * @retval     None
  * @param      pdata：指向传入数据首地址
  * @param      digest：存放最终hash值的数组
  * @param      len：长度
  */
void MD5HashCalculate(unsigned char *pdata,unsigned int len,unsigned char digest[16]) ; 

#endif

