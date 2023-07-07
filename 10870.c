#include <stdio.h>

int pibo(int number);
    
int main(void){
    int number;
    scanf("%d", &number);
    printf("%d", pibo(number+1));
}

int pibo(int number){
    if(number ==1){
        return 0;
    }else if(number==2){
        return 1;
    }else{
        return (pibo(number-1) + pibo(number-2));
    }
}