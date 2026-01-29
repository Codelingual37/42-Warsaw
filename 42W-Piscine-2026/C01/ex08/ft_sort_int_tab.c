/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:17:27 by dajohnso          #+#    #+#             */
/*   Updated: 2026/01/29 14:17:47 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	max;
	int	i;

	i = 0;
	while (size > 0)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				max = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = max;
			}
			i++;
		}
		size--;
		i = 0;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[10] = {3, 7, 8, 2, 1, 9, 6, 5, 4, 10};
	int	i;

	i = 0;
	printf("%s", "The unsorted array is: ");
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, 10);
	i = 0;
	printf("%s", "The array in ascending order is: ");
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}*/