isdigit() function
---
isdigit( ) function in C language checks whether given character is digit or not. Syntax for isdigit( ) function is given below.
```c
int isdigit ( int x );
```
EXAMPLE PROGRAM FOR isdigit() FUNCTION IN C:
```c
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character\n");
    scanf("%c", &ch);
    if (isdigit(ch));
        printf("\n Character input IS a digit");
    else
        printf("\n Character input is NOT a digit");
}
```
Output:
<pre><code>Enter any character
2342938
Character input IS a digit</code></pre>

### Remember...
All “int, char validation functions” used in C programming language are given below. “ctype.h” header file support all these functions in C language.

### Check out these snippets:
- [isalnum()]()     checks whether character is alphabetic
- [isalpha()]()   checks whether character is digit
- [iscntrl()]()     Checks whether character is a control character
- [isdigit()]()     Checks whether character is alphanumeric
- [isgraph()]()     Checks whether character is a graphical character
- [islower()]()     Checks whether character is lower case
- [isprint()]()     Checks whether character is a printable character
- [ispunct()]()     Checks whether character is a punctuation
- [isspace()]()    Checks whether character is space
- [isupper()]()    Checks whether character is upper case
- [isxdigit()]()    Checks whether character is hexadecimal
- [sizeof()](https://github.com/fredsiika/30-seconds-of-c/blob/master/snippets/sizeof/sizeof.md)      Checks the memory space allocated for each C data types.
- [tolower()]()     Checks whether character is alphabetic & converts to lower case
- [toupper()]()     Checks whether character is alphabetic & converts to upper case
