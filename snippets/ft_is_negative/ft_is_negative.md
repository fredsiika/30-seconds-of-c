# ft_is_negative
This function declares n as integer, takes in a numberical value and prints outputs if the value is 'P' for positive or 'N' for negative.

```c
#include <unistd.h>
	
void    ft_putchar(char c)
{
		write(1, &c, 1);
}
	
void    ft_putstr(char *str)
{ 
	  	while (*str != '\0')
	    	ft_putstr("Is the number positive or negative?"); 
	      *str++;
}
	
void    ft_is_negative(int n)
{  
	    if (n >= 0)
	        ft_putchar('P');
    	else if (n < 0)
			ft_putchar('N');
}
int		main()
{
		int n;

		ft_is_negative(40);
		ft_is_negative(-50);
		ft_is_negative(234324);
		ft_is_negative(-1);
		ft_is_negative(-5);
		return (0);
}
```
**Output:** 
```c
PNPNP
```
