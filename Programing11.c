#include<stdio.h>

int main(void){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if(num1 <num2){
        int swap;
        swap = num1;
        num1 = num2;
        num2 = swap;
    }
    int result = 1;
    while(1){
        if((num1 % num2) == 0){
            printf("num 나머지 num2 = 0 // num1:%d num2:%d\n", num1,num2);
            result = num2;
            break;
        }else{
            int tmp = num2;
              num2 = num1 % num2;
            num1 = tmp;
            printf("num1:%d num2:%d\n", num1,num2);
        }
       
    }
    printf("%d", result);
}
