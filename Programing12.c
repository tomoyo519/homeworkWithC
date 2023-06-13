#include<stdio.h>
int gogo(int num1, int num2);
int main(void){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
        if(num1>num2){
        int swap;
        swap = num1;
        num1 = num2;
        num2 = swap;
        //무조건 num1 < num2 가 될수있게
    }
    gogo(num1, num2);
    return 0;
}

int gogo(int num1, int num2){
    printf("%d %d\n", num1, num2);
    for(int j=num1; j<=num2; j++){

    for(int i=1; i<=9; i++){
        printf("%d x %d = %d\n", j, i, num1*i);
    }
    }
    return 0;
}