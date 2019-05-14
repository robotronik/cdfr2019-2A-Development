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
    int i = 0;
    int index;
    int value;
    int state;
    while(i<NB_UART){
        if(data[i]=='*'){
            state = 0;
        }
        // else if : maybe not needed in terms of performance
        else if(data[i]=='\0'){
            i = NB_UART;
        }
        else{
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
                case 2:
                    if(!isblank(data[i])){
                        state = 0;
                        //get the value of the parameter
                        value = atoi(&(data[i]));
                        //doing the job, now that everything is parsed
                        if(pVar[index]!=0) *pVar[index]=value;
                    }
                    break;
            }
        }
        i++;
    }
}

int parseInit(char data[NB_UART],int size){
    int res =0;
    int i =0;
    int state =0;
    while(i<size){
        if(data[i]=='!'){
            state =0;
        }
        switch(state){
            case 0:
                state++;
                break;
            case 1:
                res =atoi(&(data[i]));
                i = size;
                break;
        }
        i++;
    }
    return res;
}