#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int arr[10000]= {0,};
    int idx = 0;
    int result = 0;
    if(num1==2 && num2 ==2){
        printf("%d %d", num1, num2);
        exit(0);
    }
    for(int i=num1; i<=num2; i++){
        int countSosu = 0;
        for(int j=1; j<=i; j++){
            if(i % j ==0){
                countSosu++;
            }
            if(i == j && countSosu ==2){
                arr[idx] = i;
                result += i;
                idx++;
            }
        }
    }
    if(result ==0){
        printf("-1");
    }else{
    printf("%d\n", result);
    printf("%d", arr[0]);
    }


}