/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frsiika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 04:51:13 by frsiika           #+#    #+#             */
/*   Updated: 2018/10/07 05:30:38 by frsiika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
