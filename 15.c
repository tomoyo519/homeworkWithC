#include<stdio.h>
#include <stdlib.h>
int main(void){
    int number,zin;
    scanf("%d %d", &number, &zin);
    int zipzip = 1;
    int idx = 0;
    while(1){
        if(number > zipzip){
            zipzip *= zin;    
            idx++;
        }
        else if(number < zipzip){
            zipzip /= zin;
            break;
        }
        else if(number == zipzip){
            idx++;
            break;
        }
    }


    // printf("idx:%d\n", idx);
    int i=0;
    while(1){
        int tmp = (number)/zipzip;
        if(tmp >=10){
            printf("%c", (tmp+55));
            number = number - (tmp * zipzip);
            i++;
        }else if(tmp<10){
            number = number - (tmp*zipzip);
            printf("%d", tmp);
            i++;
        }else if(number ==0 && i==idx){
            break;
        }else{
            printf("%c",'0');
        }
    }
    // char arr[36] = {'0', '0','0','0','0','0', '0','0','0','0','0', '0','0','0','0','0', '0','0','0','0','0', '0','0','0','0','0', '0','0','0','0','0', '0','0','0','0','0'};
    // int result = 0;
    // for(int j=0; j<idx; j++){
    //         if(number == zipzip){
    //     arr[0] = '1';
    //     break;
    // }
    //     for(int i=1; i<zin; i++){
    //         if(((i+1)* zipzip) == number){
    //             printf("%d 같음\n", i+1);
    //             number = 0;
    //             if(i+1>=10){
    //                  arr[j] = (i+8) + '0';
    //                    break;
    //             }else{
    //                 arr[j] = (i) + '0';
    //                   break;
    //             }
    
    //         }
    //         else if(((i+1) * zipzip) > number){
    //             printf("i:%d\n", i);
    //             if(i+1 >=10){
    //                arr[j] = (i+7) + '0';
    //                 printf("i :%d\n",i );
    //                 number = number - (i*zipzip);
    //                 zipzip /= zin;
    //             }else{
    //                  arr[j] = (i+1) + '0';
    //                 number = number - (i*zipzip);
    //                 zipzip /= zin;
    //             }
    //      }else if(number ==0){
    //        break;
    //      }
    //     }
    //     if(number == 0){
    //        break;

    //     }
    // }

    // for(int n=0; n<idx; n++){
    //     printf("%c", arr[n]);
    // }
}