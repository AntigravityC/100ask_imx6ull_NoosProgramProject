#ifndef _UART_H_
#define _UART_H_
#include "common.h"

void led_gpio_init(void);
void led_ctl(int on);
void delaynms(unsigned int aa);


void motor_sw(int speed ,int degree);		
void motor_aw(int speed ,int degree);	
		  			 		  						  					  				 	   		  	  	 	  

/**********************************************************************
 * 函数名称： Uart_Init
 * 功能描述： 初始化UART，就是规定传输格式，设置波特率为115200，配置UART占用的GPIO管脚
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值： 无
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/
void gpio_init(void);		

 /**********************************************************************
 * 函数名称： PutChar
 * 功能描述： 从串口输出单个字符到上位机
 * 输入参数：单个字符
 * 输出参数： 无
 * 返 回 值： 无
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/
void PutChar(int c);

 #endif
		  			 		  						  					  				 	   		  	  	 	  