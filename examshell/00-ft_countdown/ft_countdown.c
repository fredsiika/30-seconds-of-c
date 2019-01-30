#include <unistd.h>

int	main(void)
{
<<<<<<< HEAD
					char countdown;
					countdown = '9';
					while (countdown >= '0')
					{
							write(1, &countdown, 1);
							countdown--;
					}
					write(1, "\n", 1);
					return (0);
||||||| merged common ancestors
					char c;
					c = '9';
					while (c >= '0')
					{
							write(1, &c, 1);
							c--;
					}
					write(1, "\n", 1);
					return (0);
=======
	char c;
	c = '9';
	while (c >= '0')
	{
		write(1, &c, 1);
		c--;
	}
	write(1, "\n", 1);
	return (0);
>>>>>>> c3f1b0936dbcc4c2e1ceb927a3edf742d3f148ac
}
