#ifndef  __TEST_H
#define	 __TEST_H



#include "stm32f10x.h"



/********************************** �û���Ҫ���õĲ���**********************************/
#define      macUser_ESP8266_ApSsid                       "iPhone"                //Ҫ���ӵ��ȵ������
#define      macUser_ESP8266_ApPwd                        "xwt123456"           //Ҫ���ӵ��ȵ����Կ

#define      macUser_ESP8266_TcpServer_IP                 "192.168.43.37"      //Ҫ���ӵķ������� IP
#define      macUser_ESP8266_TcpServer_Port               "3000"               //Ҫ���ӵķ������Ķ˿�



/********************************** �ⲿȫ�ֱ��� ***************************************/
extern volatile uint8_t ucTcpClosedFlag;



/********************************** ���Ժ������� ***************************************/
void                     ESP8266_StaTcpClient_UnvarnishTest  ( void );



#endif
