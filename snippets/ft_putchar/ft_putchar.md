# ft_putchar
Print a character to standard output using the <code>write(1, &c, 1);</code>function.
Write attempts to write nbyte of data to the object referenced by the file discriptor.

```c
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_putchar(1, 'c', 1);
	ft_putchar(1, '\n', 1);
	return (0);
```

**Output:**
```c
c
```
