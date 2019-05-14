//uart parser
//parser data from the uart so that settings can be changed on the fly
// useful for robots

#ifndef UART_PARSER_H
#define UART_PARSER_H

#define NB_VAR 30
#define NB_UART 80

#include <ctype.h> 
#include <stdlib.h> 

#include "usart.h"

//parser 

void initVar(int * a,int index);

void parseUart(char data[NB_UART]);

int parseInit(char data[NB_UART],int size);

//usage

/* 
file to cat to ttyACM0:
!10b
*
0 0
0 1

first 5 characters define the lenght of the string coming next
after the '*' is the data to be interpreted 
the order which the commands are received is important
here the file is equivalent to :
!7bb
*0 1

a bash program can be usefull to calculate automaticaly the size of the data to be transmitted
for now this is ok : wc -m dat.txt
 */
#endif