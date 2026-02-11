/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:15:14 by dajohnso          #+#    #+#             */
/*   Updated: 2026/01/29 14:15:15 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	hold;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		hold = tab[i];
		tab[i] = tab[j];
		tab[j] = hold;
		i++;
		j--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[7] = {1, 2, 3, 4, 5, 6, 7};
	int	i;

	i = 0;
	printf("%s", "The original array is: ");
	while (i < 7)
	{
		printf("%d ", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, 7);
	printf("\n%s", "The reversed array is: ");
	i = 0;
	while (i < 7)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}*/