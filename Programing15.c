#include<stdio.h>

int main(void){
    printf("야호?");
    int n;
    scanf("%d", &n);
    int count = 1;
    int twice = 1;
    while(1){
        if(2*twice < n){
            twice = twice * 2;
            count++;
            printf("야호");
        }if(2*twice >= n){
            if(2*twice == n){
                printf("최대값: %d", count);
                break;
            }else{
                printf("최대값:%d", count-1);
                break;
            }
        }
    }
    return 0;
}
