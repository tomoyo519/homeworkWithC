#include<stdio.h>
#include<string.h>

int main(void){
    float arr[20]={0};
    int subject = 5;
    float subjectscoreSum = 0.0;
    float result = 0.0;
    for(int i=0; i<subject; i++){
        char subjectName[21]={0};
        float point = 0;
        char subjectLevel[21] = {0};
        float subjectScore = 0.0;
        scanf("%s %f %s", subjectName, &point, subjectLevel);
        if(strcmp("A+", subjectLevel) == 0){
           subjectScore = 4.5;
        }else if(strcmp("A0", subjectLevel) == 0){
            subjectScore = 4.0;
        }else if(strcmp("B+", subjectLevel) == 0){
            subjectScore = 3.5;
        }else if(strcmp("B0", subjectLevel) == 0){
            subjectScore = 3.0;
        }else if(strcmp("C+", subjectLevel) == 0){
            subjectScore = 2.5;
        }else if(strcmp("C0", subjectLevel) == 0){
            subjectScore = 2.0;
        }else if(strcmp("D+", subjectLevel) == 0){
            subjectScore = 1.5;
        }else if(strcmp("D0", subjectLevel) == 0){
            subjectScore = 1.0;
        }else if(strcmp("P", subjectLevel) == 0){
           subject --;
           continue;
        }else{
             subjectScore = 0.0;
        }

        subjectscoreSum = subjectscoreSum + point;
        arr[i] = (point * subjectScore);
        result = result + arr[i];
        printf("%f\n", subjectscoreSum);
        printf("%f\n", result);
    }
    result = result / subjectscoreSum;
    printf("%f", result / subject);
}