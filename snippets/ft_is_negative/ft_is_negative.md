# ft_is_negative

```c
#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

void	ft_putstr(char *str)
{
		ft_putchar(*str);
			str++;
}

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putstr("Positive");
	else
		ft_putstr("Negative");
}

int main()
{
	ft_putstr("Is the number positive or negative?");
	ft_is_negative();
	return (0);
}
```
**Output:**
```c

```
