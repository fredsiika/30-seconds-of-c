/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredsiik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 01:28:18 by fredsiik          #+#    #+#             */
/*   Updated: 2019/01/18 01:31:28 by fredsiik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

<<<<<<< HEAD
void	ft_print_numbers(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
	write(1, "\n", 1);
}

int	main()
||||||| merged common ancestors
int				main(void)
=======
int	main(void)
>>>>>>> c3f1b0936dbcc4c2e1ceb927a3edf742d3f148ac
{
<<<<<<< HEAD
	ft_print_numbers();
	return(0);
||||||| merged common ancestors
					char c;

					c = '0';
					while (c <= '9')
					{
							write(1, &c,1);
							c++;
					}
					write(1, "\n", 1);
					return (0);
=======
	char c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c,1);
		c++;
	}
	write(1, "\n", 1);
	return (0);
>>>>>>> c3f1b0936dbcc4c2e1ceb927a3edf742d3f148ac
}

