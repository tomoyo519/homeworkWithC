#include <stdio.h>

int main(void){
    int number;
    scanf("%d", &number);
    int count = 0;
    int idx = 1;
    for(int i=1; i<=number; i++){

        printf("count:%d idx:%d i:%d\n", count, idx, i);
         count += i;
            idx = i;
        if(number <= count){
               count = count - i;
               idx=i;
                break;
        }
    }
    printf("idx:%d count:%d\n", idx, count);
    int left = 1;
    int right = 1;
    int cnt = number - idx;

 printf("cnt:%d\n", cnt);
        if(idx % 2 ==1){
            printf("홀수일때\n");
            left = idx;
              while(1){
                 printf("야호");
            if(number == idx || cnt ==0){
                printf("%d/%d", left, right);
                break;
            }else{
             
                cnt--;
                left--;
                right++;
               }
            }
        }else if(idx %2 ==0){
            printf("짝수일때\n");
                right= idx;
                 while(1){
                    printf("야호");
                 if(number == idx || cnt ==0){
                     printf("%d/%d", left, right);
                     break;
                }else{
              
               
                cnt--;
                left++;
                right--;
                
               }
            }
        }
    
   
}