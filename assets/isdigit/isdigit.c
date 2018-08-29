/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsiika <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 07:44:20 by fsiika            #+#    #+#             */
/*   Updated: 2018/08/28 07:50:42 by fsiika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char ch;

	printf("Enter any character\n");
	scanf("%c", &ch);
	if (isdigit(ch));
		printf("\n Character input IS a digit");
	else
		printf("\n Character input is NOT a digit");
}
