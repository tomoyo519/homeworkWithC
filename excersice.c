#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  typedef struct point {
    int xpos;
    int ypos;
  } Point;

int SwapPoint(Point * ptr1, Point * ptr2);
int ShowPos(Point pos1, Point pos2);
int main(void){

  Point pos1 = {1,2};
  Point pos2 = {3,4};

  SwapPoint(&pos1, &pos2);
  ShowPos(pos1, pos2);
  return 0;
}

int SwapPoint(Point * ptr1, Point * ptr2){
  // Point ptr3 = {ptr1->xpos, ptr1->ypos};
  // ptr1->xpos = (ptr2->xpos);
  // ptr1->ypos = (ptr2->ypos);
  // ptr2->xpos = ptr3.xpos;
  // ptr2->ypos = ptr3.ypos;
  Point tmp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = tmp;
  return 0;
}

int ShowPos(Point pos1, Point pos2){
  printf("pos1의 값: %d %d", pos1.xpos, pos1.ypos);
  printf("pos2의 값: %d %d", pos2.xpos, pos2.ypos);
  return 0;
}