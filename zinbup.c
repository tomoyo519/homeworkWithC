#include<stdio.h>
#include <stdlib.h>

int main(void){
    int zinNum, zinbup, tmp;
    scanf("%d %d", &zinNum, &zinbup);
    long long zin = 1;
    int idx = 0;
    while(1){
     
        if(zinNum / zin > 0){
            zin *= zinbup;
            idx++;
        }
        else if(zinNum / zin  == 0 || zinNum < zinbup){
            zin = zin / zinbup;
            break;
        }
    }
    


    while(1){
        tmp = (zinNum / zin) % zinbup;
        if(tmp<10){
            printf("%d", tmp);
        }else if(tmp>=10){
            printf("%c", tmp + 55);
        }if(zin ==1){
            break;
        }
        zin /= zinbup;
    }
}