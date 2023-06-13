#include<stdio.h>

int main(void){
    int arr[5];
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
        int shortest = arr[0] ;
        int longest = arr[0];
        int sum =0;
    for(int j=0; j<5; j++){

        if(shortest > arr[j]){
            shortest = arr[j];
        }if(longest < arr[j]){
            longest = arr[j];
        }sum += arr[j];
        
    }
    printf("최대값:%d 최소값:%d 총합:%d", longest, shortest, sum);

}
