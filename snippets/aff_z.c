/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frsiika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 04:18:47 by frsiika           #+#    #+#             */
/*   Updated: 2018/10/01 05:03:17 by frsiika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	
	int *argc = numberOfArguments;
	while(numberOfArguments != 2 && *argv[1] == 'z')
	{
		write(1, "z", 1);
		argv[1]++;
		break;
	}
	write(1, "\n", 1);
	return(0);
}

