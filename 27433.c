#include<stdio.h>

int factorial(long num);
int main(void){
   long num;
   scanf("%lld", &num);
   printf("%lld", factorial(num));
}

int factorial(long num){
     if(num ==0 ){
        return 1;
    }else{
       return num * factorial(num-1);
    }
}

