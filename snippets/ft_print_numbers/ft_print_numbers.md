# ft_print_numers
Print numbers '0' to '9' to standard output.

```c
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}

int main(void)
{
	ft_print_numbers();
	return (0);
}
```
**Output:**
```c
0123456789
```

