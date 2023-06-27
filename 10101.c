#include <stdio.h>
#include <stdlib.h>

int main(void){
    int arr[3] = {0,};
    int result = 0;
    for(int i=0; i<3; i++){
        int number;
        scanf("%d", &number);
        arr[i] = number;
        result += number;
    }
    printf("%d %d %d", arr[0], arr[1], arr[2]);
    if(result != 180){
        printf("Error");
        exit(0);
    } if(arr[0] == arr[1] && arr[1]==arr[2] && arr[0] ==arr[2]){
        printf("Equilateral");
                exit(0);
    }
    else{
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                if(arr[j] == arr[k] && j!=k){
                    printf("Isosceles");
                            exit(0);
                }
            }
        }
        printf("Scalene");
    }
}