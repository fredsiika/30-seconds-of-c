#include <unistd.h>

int				main(int argc, char **argv)
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

