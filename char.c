/*
    Demonstrates different ways of taking input in C:
    - %c    -> reads a single character
    - %s    -> reads a single word (stops at space)
    - %[^\n] -> reads a full sentence including spaces

    getchar() is used to consume the leftover newline character
    from previous input before reading the sentence.
*/
#include <stdio.h>

int main() 
{
 char ch, s[100], sen[100];
 
 scanf("%c", &ch);
 printf("%c\n", ch);
 
 scanf("%s", s);
 printf("%s\n", s);
 //scanf("\n");
 getchar();
 scanf("%[^\n]", sen);
 //fgets(sen, sizeof(sen), stdin);
 printf("%s", sen);
    
 return 0;
}
