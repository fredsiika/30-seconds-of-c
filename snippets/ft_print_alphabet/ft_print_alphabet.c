/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frsiika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 03:36:38 by frsiika           #+#    #+#             */
/*   Updated: 2018/10/07 03:39:23 by frsiika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
		char letter;

		letter = 'a';
		while (letter <= 'z')
		{
			ft_putchar(letter);
			letter++;
		}
}

int		main(void)
{
		ft_print_alphabet();
		return(0);
}

