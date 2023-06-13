#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
   int num1=1, num2=2, num3=3;

   srand(time(NULL));
   while(1){
    num1 = rand() %10;
    num2 = rand() %10;
    num3 = rand() %10;
    if(num1-num2 !=0 && num1- num3!=0 && num2-num3 !=0){
        break;
    }
   }
   int numArr[3]={0};
   
    numArr[0] = num1;
    numArr[1] = num2;
    numArr[2] = num3;
   int idx = 0;
   printf("컴퓨터의 선택은 ? %d %d %d\n", num1, num2, num3);
   while(1){
    idx++;
    int strike =0, ball =0;
    int input1, input2, input3;
    printf("3개의 숫자 선택 : ");
    scanf("%d %d %d", &input1, &input2, &input3 );
    int inputArr[3]={0};
     inputArr[0] = input1;
    inputArr[1] = input2;
    inputArr[2] = input3;


    for(int i=0; i<3; i++){
        

        if(numArr[i] ==inputArr[i]){
            strike++;
        }
    }
    for(int n=0; n<3; n++){
        for(int m=0; m<3; m++){
            if(n !=m && numArr[n] == inputArr[m]){
                ball++;
            }
        }
    }
    printf("%d번째 도전결과: %d strike, %d ball\n", idx,strike, ball);
    if(strike ==3){
        break;
    }
   }
}