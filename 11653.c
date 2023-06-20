#include <stdio.h>

int main(void){
    int number;
    scanf("%d", &number);
    int idx = 2;
    for(int i=idx; i<=number; ){
        // printf("idx:%d number:%d\n", idx, number);
        if(number % i ==0){
            printf("%d\n", i);
            number =( number /  i);
        }else if(number % i !=0){
            i++;
        }
    }
}