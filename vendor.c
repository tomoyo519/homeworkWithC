#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char * fileName = "./word.txt";
    FILE * file = fopen(fileName, "rb");
    char word[256];
    char definition[256];
    char input[256];

      if(fileName == NULL){
        printf("파일 읽어오기 실패 \n");
      }
    for(int i=0; i<3; i++){
      fscanf(file,"%s %s", word, definition);
      printf("%s 의 뜻은 ?\n", word );
      scanf("%s", input);
      if(strcmp(input, word)==0){
        printf("정답입니다.\n");
      }else{
        printf("땡 탈락 \n");
        
      }
    }
    fclose(file);
    return 0;
}