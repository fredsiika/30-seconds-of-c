###aff_a

Assignment name  : aff_a
Expected files   : aff_a.c
Allowed functions: write
---
Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.

```c
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "a", 1);
	else
	{
		while (*argv[1])
			if (*argv[1] == 'a')
			{
				write(1, "a", 1);
				argv[1]++;
				break;
			}
	}
	write(1, "\n", 1);
	return (0);
}
```

Example:
 
```c
$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$
```
