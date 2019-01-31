/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredsiik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 05:21:46 by fredsiik          #+#    #+#             */
/*   Updated: 2019/01/31 05:58:40 by fredsiik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	y = 1;

int	main()
{
	int x = 4;
	int *address_of_x = &x;

	int tmp_value_stored = *address_of_x;
	int *address_of_x = 25;

	printf("x is stored at %p\n", &x);
	printf("New value stored: %d\n", tmp_value_stored);

	return 0;
}
