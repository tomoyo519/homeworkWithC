#include <stdio.h>

int main(void){
    int x1,y1,x2,y2,x3,y3;
    int resultx=0; 
    int resulty=0;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);
    
        if(x1 == x2){
            resultx = x3;
        } if(x1 == x3){
            resultx = x2;
        } if(x2 == x3){
            resultx = x1;
        }if(y1 == y2){
            resulty = y3;
        }if(y2 == y3){
            resulty = y1;
        }if(y1 == y3){
            resulty = y2;
        }
    
    printf("%d %d", resultx, resulty;)
}