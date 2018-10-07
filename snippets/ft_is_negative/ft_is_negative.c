/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frsiika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 04:51:13 by frsiika           #+#    #+#             */
/*   Updated: 2018/10/07 05:00:06 by frsiika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
