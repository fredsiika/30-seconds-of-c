/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizeof.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsiika <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 04:32:09 by fsiika            #+#    #+#             */
/*   Updated: 2018/08/28 04:37:32 by fsiika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int main()
{
		int a;
		char b;
		float c;
		double d;
		printf("Size of integer data type: %d \n", sizeof(a));
		printf("Storage size of character data type: %d \n", sizeof(b));l
		printf("Storage size for float data type: %d \n", sizeof(c));
}		printf("Storage size of double data type: %d \n", sizeof(d));
		return 0;
}

