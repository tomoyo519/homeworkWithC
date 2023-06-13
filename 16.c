#include<stdio.h>

int main(void){
    int top = 1;
    int bottom =1;
    int num;
    scanf("%d", &num);
    int count = 1;
    int idx = 1;
    for(int i=1 ; i<num; i++){
        if( num ==i){
            printf("%d / %d\n", top, bottom);
            idx++;
            break;
        }else{

            while(1){

                if(count % 2 == 1){
                    bottom++;
                    if(count + 1 != num){
                        for(int n=0; n<count; n++){
                            top++;
                            bottom --;
                        }
                        count++;
                    }else{
                        break;
                    }
                   
                      
                }
                 if(count % 2 == 0){
                    top++;
                  
                    if(count +1 != num){

                    for(int j=0; j<count; j++){
                        bottom++;
                        top--;
                     
                    }
                     count++;
                    }else{
                        break;
                    }
                    
                      
                }
            }
        }
    }
                printf("%d / %d\n", top, bottom);
}