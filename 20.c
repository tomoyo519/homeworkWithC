#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int checkAge( char arr1[], char arr2[]);
int checkName( char arr1[], char arr2[]);
int checkSpace(char arr[]);

int main(void){

   char firstInput[30] ={'0',};
   char secondInput[30]={'0',};
   fgets(firstInput, sizeof(firstInput), stdin);
   fgets(secondInput, sizeof(secondInput), stdin);

   if(checkAge( firstInput, secondInput)){
      printf("나이가 같다");
   }else{
      printf("나이가 다르다");
   }
   if(checkName( firstInput, secondInput)){
      printf("이름이 같다");
   }else{
      printf("이름이 다르다.");
   }
   // printf("firstInput[firstSpaceIdx + 1]):%d", firstInput[firstSpaceIdx + 1]);
   // printf("%d", firstSpaceIdx);
}

int checkName( char arr1[], char arr2[]){
   int firstIdx = checkSpace(  arr1);
   int secondIdx = checkSpace( arr2);
   if(firstIdx >= secondIdx){
      for(int i=0; i<firstIdx; i++){
         printf("arr1[i], arr2[i]: %c %c ", arr1[i], arr2[i]);
         if(arr1[i] != arr2[i]){
            return 0;
         }
      }
     
   }
   else if(firstIdx < secondIdx){
      for(int i=0; i<secondIdx; i++){
         if(arr1[i] !=arr2[i]){
            return 0;
         }
      }
     
   }
    return 1;
}

int checkAge(char arr1[], char arr2[]){
   int firstIdx = checkSpace(  arr1);
   int secondIdx = checkSpace( arr2);

   if( atoi(&arr1[firstIdx+1]) == atoi(&arr2[secondIdx+1])){
      return 1;
   }else{
      return 0;
   }
}

int checkSpace( char arr[]){
   int idx = 0;
   while(arr[idx] != ' '){
      idx++;

   }
   return idx;
}