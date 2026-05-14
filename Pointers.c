/*
    Demonstrates the use of pointers and functions in C.

    The update() function uses pointers to directly modify
    the original variables by:
    - storing the sum in a
    - storing the absolute difference in b
*/

#include<stdio.h>

void update(int * ptr1, int* ptr2){
  int out;
  out = (*ptr1) + (*ptr2);
  *ptr2 = abs((*ptr1) - (*ptr2));
  *ptr1 = out;
}

int main(){
  int a, b;
  int * pa = &a, pb = &b;
  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d %d",a,b);
}
