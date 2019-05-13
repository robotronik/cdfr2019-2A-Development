//uart parser
//parser data from the uart so that settings can be changed on the fly
// useful for robots

#ifndef UART_PARSER_H
#define UART_PARSER_H

#define NB_VAR 30
#define NB_UART 80

#include <ctype.h> 
#include <stdlib.h> 

//parser 

void initVar(int * a,int index);

void parseUart(char data[NB_UART]);

#endif