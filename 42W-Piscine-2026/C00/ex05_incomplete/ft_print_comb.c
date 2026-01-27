/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:48:15 by dajohnso          #+#    #+#             */
/*   Updated: 2026/01/27 17:21:04 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	combo[3];
	char	*start;
	int		i;
	int		j;
	int		k;
	int		end;

	i = 0;
	j = 2;
	k = 1;
	end = 9;
	start = "012";
	while (*start)
	{
		combo[i] = *start;
		start++;
		i++;
	}
	while (j >= 0)
	{
		if (combo[j] > combo[k])
		{
			while (combo[j] < end)
			{
				write(1, &combo, 3);
				write(1, ", ", 2);
				combo[j]++;
			}
			end--;
			j--;
		}
		combo[k]++;
		combo[j] = combo[k] + 1;
	}
}

int	main()
{
	ft_print_comb();
}