#include <stdio.h>
#include <stdlib.h>

int main(void){
    int repeat;
    scanf("%d", &repeat);
    if(repeat == 1){
        printf("%c",'0');
        exit(0);
    }
    int idx = 0;
    int largeX, largeY;
    int smallX, smallY;


        int x, y;
        scanf("%d %d", &x, &y);
        largeX = x;
        largeY = y;
        smallX = x;
        smallY = y;

    for(int i=1; i<repeat; i++){
        
  int num1, num2;
        scanf("%d %d", &num1, &num2);
        if(largeX < num1){
            largeX = num1;
        }else if(smallX > num1){
            smallX = num1;
        }
         if(largeY < num2){
            largeY = num2;
        }else if(smallY > num2){
            smallY = num2;
         }
    }

    printf("%d %d %d %d\n", largeX, smallX, largeY, smallY);
    printf("%d", (largeX - smallX) * (largeY - smallY));
}