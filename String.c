/* Simple i/o program prints 'Hello, World!' and read Input sting with spaces and prints it 
scanf("%[^\n]%*c", s);
explaination - %[^\n] → reads the string, So this part is the real replacement for %s.
This is the part that reads the whole line into s
It reads characters until it hits \n
So it behaves like a “string input that allows spaces”
%c → read 1 character and store it
%*c → read 1 character and ignore it
*/
#include <stdio.h>

int main() 
{
	
    char s[100]; //allocates space for a string of up to 99 characters plus the null terminator \0
    printf("Hello, World!\n");
    scanf("%[^\n]%*c", s);  //%[^\n] reads everything until a newline (so it captures spaces too).
    printf("%s", s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
