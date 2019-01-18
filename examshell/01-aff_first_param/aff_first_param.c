/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredsiik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 00:32:26 by fredsiik          #+#    #+#             */
/*   Updated: 2019/01/18 00:34:39 by fredsiik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc_sucks, char **argv_sucks_even_more)
{
	if (argc_sucks > 1)
		while (*argv_sucks_even_more[1])
			write(1, argv_sucks_even_more[1]++, 1);
	write(1, "\n", 1);
	return(0);
}
