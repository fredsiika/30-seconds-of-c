/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredsiik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 05:15:31 by fredsiik          #+#    #+#             */
/*   Updated: 2019/01/31 05:17:36 by fredsiik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	result;

	result = my_function(argv[1], atoi(argv[2]));
	printf("%d\n", result);
	
	return 0;
}
