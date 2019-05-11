//uart parser
//parser data from the uart so that settings can be changed on the fly
// useful for robots

#include "UartParser.h"

//variables
int * pVar[NB_VAR] = {0};

void initVar(int * a,int index){
    if(index < NB_VAR){
        pVar[index] = a;
    }
}

void parseUart(char data[NB_UART]){
    int i;
    int index;
    int value;
    int state;
    for(i=0; i<NB_UART ;i++){
        switch (state)
        {
            case 0:
                if(data[i]=='\n'){
                    state++;
                }
                break;
            case 1:
                state++;
                index = data[i]-48;
                break;
            
        }
    }
}