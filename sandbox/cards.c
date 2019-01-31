/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   card_decks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredsiik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 22:35:56 by fredsiik          #+#    #+#             */
/*   Updated: 2019/01/30 23:17:32 by fredsiik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Program to calculate the number of cards in the show.
 * This code is released under MIT License.
 */

#include <stdio.h>

int	main()
{
	int decks;
	
	puts("Enter a number of decks...");
	scanf("%i", &decks);
	if (decks < 1) 
	{
		puts("That is not a valid number of decks\n");
		break;
	}
	printf("There are %i cards\n", (decks * 52));
	return (0);
}
