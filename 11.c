#include<stdio.h>

int main(void){
    char arr[50];
    scanf("%s", arr);
    int count = 0;
    int i=0;
    while(arr[i] !='\0'){
        count++;
        i++;
    }
    printf("count:%d\n", count);

   
    printf("arr:%s\n", arr);
    printf("size:%lu", sizeof(arr)/ sizeof(char));
    for(int j=count-1; j>=0; j--){
        printf("역순:%c", arr[j]);
    }
}
