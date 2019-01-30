#include <unistd.h>

int				main(void)
{
					char countdown;
					countdown = '9';
					while (countdown >= '0')
					{
							write(1, &countdown, 1);
							countdown--;
					}
					write(1, "\n", 1);
					return (0);
}

