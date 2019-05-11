//uart parser
//parser data from the uart so that settings can be changed on the fly
// useful for robots

#define NB_VAR 30
#define NB_UART 80
//actions ??

//parser 

void initVar(int * a,int index);

void parseUart(char data[NB_UART]);