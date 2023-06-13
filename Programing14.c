#include<stdio.h>

int main(void){
    int count= 0;
    int num = 2;
    int arr[10]={2};
    while(1){
       
        printf("%d\n", count);
      for(int i=2; i<=num; i++){
      if( num % 2 ==0 && i != num){
        num++;
        i=2;
        continue;
      } if( num % 2 ==0 && i != num){
        num++;
        i=2;
        continue;
      } if( num % 3 ==0 && i != num ){
        num++;
        i=2;
        continue;
      } if( num % 5 ==0 && i != num){
        num++;
        i=2;
        continue;
      }else if( num % i == 0 && i == num){
        i=2;
        arr[count] = num;
        num++;
        count++;
        // num++;
      }
      if(count ==10){
        break;
      }
      }
        if(count ==10){
        break;
      }
    }
     for(int l=0 ; l<10; l++){
        printf("thisisarr[l]:%d\n", arr[l]);
    }
    
    return 0;
}


