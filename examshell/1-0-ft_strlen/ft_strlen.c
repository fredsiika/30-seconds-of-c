/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredsiik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 16:49:34 by fredsiik          #+#    #+#             */
/*   Updated: 2019/01/25 00:28:35 by fredsiik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// DO NOT SUBMIT ANYTHING BELOW

#include <stdio.h>

int	main(void)
{
	char str[] = "Papito Frederico";

	printf("%d characters\n", ft_strlen(str));
	return (0);
}
