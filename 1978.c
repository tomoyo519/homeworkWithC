#include <stdio.h>

int main(void){
    int count;
    scanf("%d", &count);
    int arr[100] = {0,};
    for(int i=0; i<count; i++){
        scanf("%d", arr[i]);
    }
    int result = 0;

        for(int n=0; n<count; n++){
            int countSosu = 0;
            for(int m=1; m<=arr[n]; m++){
                if(arr[n] ==0){
                    continue;
                }
                if(arr[n] % m ==0){
                    countSosu++;
                }
                if(m == arr[n] && countSosu == 2){
                    result ++;
                }
            }
        }
    printf("%d", result);
}