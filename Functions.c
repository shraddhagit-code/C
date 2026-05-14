/*
    This file contains function-based C code 
    1. for finding the maximum value among four integers.
    The max_of_four() function compares the numbers
    and returns the largest one.
*/
#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int max=a;
    if(b>max) {max = b;}
    if(max<c) {max = c;}
    if(max<d){max= d;}
    return max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
