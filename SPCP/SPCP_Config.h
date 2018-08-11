/*********************************************************************************
//概述：
//作者：大胡子书生     时间：       地点：
//CPU型号：         系统主频：
//版本号：V0.0        
*********************************************************************************/
#ifndef  __BPCP_CONFIG_H
#define  __BPCP_CONFIG_H 
/*********************************************************************************
文件包含区
*********************************************************************************/
#include ".\CJT-188-2004\CJT-188-2004.h"
#include ".\DLT 645-1997\DLT 645-1997.h"
#include ".\JiWanXun\JWX_SPCP.h"
#include ".\KingDa\KingDaV1.h"
#include ".\KingDa\KingDaServer.h"
#include ".\ModBus\modbus_master.h"
#include ".\ModBus\modbus_slave.h"
#include ".\APPCON\APPCON.h"
#include ".\JingDa\JINGDA.h"

/*********************************************************************************
宏定义区
*********************************************************************************/

/*********************************************************************************
数据类型定义
*********************************************************************************/
typedef enum{
  VOID_Format      = 0x00, 
  CJT_188_2004     = 0x01,
  DLT_645_1997     = 0x02,
  KingDaV1         = 0x03,
  KingDaServer     = 0x04,
  APPCON           = 0x05,
  JINGDA           = 0x06,
 }CLIFormat_Type; 



typedef struct{
CLIFormat_Type  Format; 
 union
 {
  void* Super_CLI;
  JingDa_OutPutBuff_Struct*  JingDa_CLI;
 }Data;
}CLI_Struct;
/*********************************************************************************
外部变量声明区
*********************************************************************************/

/*********************************************************************************
函数声明区
*********************************************************************************/

/********************************************************************************/
#endif