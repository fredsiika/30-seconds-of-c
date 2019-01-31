/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rocks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredsiik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:57:22 by fredsiik          #+#    #+#             */
/*   Updated: 2019/01/30 21:14:43 by fredsiik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	printf("int: %lu\n", sizeof(int));
	printf("float: %lu\n", sizeof(float));
	printf("double: %lu\n",sizeof(double));
	printf("char %lu\n", sizeof(char));
	
	return 0;
}
