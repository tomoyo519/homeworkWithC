#include<stdio.h>
int main(void){
  int num, chance;
  scanf("%d", &num);
  scanf("%d", %chance);
  int q, d, n , p;
  for(int j=0; j<4; j++){};
    if(chance / 25 >0){
        q = chance / 25;
        chance = chance - (25 * q);
    }else if(chance / 10 > 0){
        d = chance / 10;
        chance = chance - (10*d);
    }else if(chacne / 5 > 0){
        n = chance / 5;
        chance = chance - (5*n);
    }else {
        p = chance;

    }

    printf("%d %d %d %d", q, d, n p);
}