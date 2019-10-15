# C Standard Library Functions

C Standard library functions or simply C Library functions are inbuilt functions in C programming.

The prototype and data definitions of the functions are present in their respective header files, and must be included in your program to access them. For CLI compilers, you may need to explicitly link to the header that the linker requires (for example, `gcc` requires you to pass a `-lm` flag if you use `<math.h>` in your program).

![C Library Functions](https://cdn.programiz.com/sites/tutorial2program/files/c-standard-library-functions.jpg)

**For example:** Let's say you want to use <code>printf()</code> function, the header file <code><stdio.h></code> should also be included.
```c
#include <stdio.h>

int main()
{
    printf("int main is the main function which is always executed.");
    return (0);
}
```

**Output**
```c
int main is the main function which is always executed.
```
