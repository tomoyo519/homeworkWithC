#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  typedef struct {
    int xpos;
    int ypos;
  } Point;

  typedef struct {
    Point left ;
    Point right;
  } Rectangle;

int showWidth(Rectangle sqr);

int printDots(Rectangle sqr1);

int main(void){
  Rectangle sqr1 = {{0,0}, {100,100}};
  showWidth(sqr1);
  printDots(sqr1);
}

int showWidth(Rectangle sqr){
  int width = ((sqr.right.xpos) - (sqr.left.xpos)) * ((sqr.right.ypos) - (sqr.left.ypos));
  printf("너비는 : %d", width);
  return width;
}

int printDots(Rectangle sqr1){
  printf("좌상단의 x,y 좌표 : %d %d\n", sqr1.left.xpos, sqr1.left.ypos);
  printf("우상단의 x,y 좌표:%d %d\n", sqr1.right.xpos, sqr1.right.ypos);
  return 0;
}