#include <stdio.h>
#include <stdlib.h>

int main(void){
    while(1){
    int arr[3]={0};
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    if(arr[0] ==0 && arr[1] ==0 && arr[2]==0){
        exit(0);
    }

        int largest = arr[0];
        if(largest < arr[1]){
            largest = arr[1];
        }if(largest < arr[2]){
            largest = arr[2];
        }
        if(largest == arr[0] && (arr[1]+ arr[2]) <= arr[0]){
            printf("Invalid\n");
            continue;
        }      if(largest == arr[1] && (arr[0]+ arr[2]) <= arr[1]){
            printf("Invalid\n");
            continue;
        }      if(largest == arr[2] && (arr[1]+ arr[0]) <= arr[2]){
            printf("Invalid\n");
            continue;
        }
    else if(arr[0] == arr[1] && arr[0] == arr[2] && arr[1] == arr[2]){
        printf("Equilateral\n");
        continue;
    }else if(arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]){
        printf("Isosceles\n");
        continue;
    }else{
        printf("Scalene\n");
    }
    }
}