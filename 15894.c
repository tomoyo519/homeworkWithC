#include <stdio.h>

int recur(int num);
int main(void){
    int number;
    scanf("%d", &number);
    printf("%d", recur(number));
}


int recur(int num){
    if(num ==1){
        return 4;
    }else{
        return recur(num-1) - (num-1) + (num+3);
    }
}