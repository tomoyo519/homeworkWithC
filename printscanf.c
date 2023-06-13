#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrayAnimal[4][5];
char * strAnimal[10]
void initAnimalArray();
void initAnimalName();

int main(void) { 
    initAnimalArray();
    initAnimalName();
    return 0;
  }

void initAnimalArray(){
    for(int i=0; i<4;i++){
      for(int j=0; j<5;j++){
        arrayAnimal[i][j] = -1;
     }
  }
}

void initAnimalName(){
  strAnimal[0] = "원숭이";
  strAnimal[1] = "하마";
  strAnimal[2] = "강아지";
  strAnimal[3] = "고양이";
  strAnimal[4] = "돼지";
  strAnimal[5] = "코끼리";
  strAnimal[6] = "기린";
  strAnimal[7] = "낙타";
  strAnimal[8] = "호랑이";
  strAnimal[9] = "사자";
}

void shuffleAnimal(){
 while(1){

 }
}
