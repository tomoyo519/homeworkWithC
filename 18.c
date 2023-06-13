#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int draw =0, win=0;
    while(1){
        int input;
        char * inputResult;
        char * computerResult;
        printf("바위는 1, 가위는 2, 보는 3");
        scanf("%d", &input);
        if(input ==1 ){
            inputResult = "바위";
        }else if(input ==2){
            inputResult = "가위";
        }else{
            inputResult = "보";
        }

         srand( time(NULL) );
         int computerInput = rand() % 3 + 1;
          if(computerInput ==1 ){
            computerResult = "바위";
        }else if(computerInput ==2){
            computerResult = "가위";
        }else{
            computerResult = "보";
        }

        if(input - computerInput ==0 ){
            printf("당신은 %s 선택, 컴퓨터는 %s 선택. 비겼습니다\n", inputResult, computerResult);
            draw++;
        }else if( (input ==1 && computerInput ==2 )|| (input ==2 && computerInput ==3 ) || (input ==3 && computerInput ==1)){
            printf("당신은 %s 선택, 컴퓨터는 %s 선택. 당신이 이겼습니다.\n", inputResult, computerResult);
            win++;
        }else{
            printf("당신은 %s 선택, 컴퓨터는 %s 선택. 당신이 졌습니다.\n", inputResult, computerResult);
            printf("게임의 결과 : %d 승 %d 무", win, draw);
            break;
        }
        
    }
}