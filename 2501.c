#include <stdio.h>

int printFactor(int count);
int main(void){
   while(1){
       int num;
       scanf("%d", &num);
       if(num == -1){
        break;
       }
       int count = 0;
       int idx = 0;
       if(num ==2){
          printf("%d is NOT perfect.\n", num);

       }else if(num ==3){
        printf("%d = %d + %d\n", 3,1,2);

       }
       for(int i=1; i<num; i++){
           count += i;
           if(num ==3){
            break;
           }
           if(count < num){
               continue;
           }else if(count == num){
               printFactor(count);
               break;
           }else if(count > num){
            printf("%d is NOT perfect.\n", num);
            break;
           }
       }
   }
}
int printFactor(int count){
    int arr[10000] = {0,};
    int idx = 0;
    printf("%d = ", count);
    for(int i=1; i<count; i++){
        if(count % i ==0){
            arr[idx] = i;
            idx++;
            if(i == (count / 2)){
                printf("%d\n", i);
                break;
            }else{
            printf("%d + ", i);
            }
        }
    }

    return 0;
}