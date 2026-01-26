/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:48:15 by dajohnso          #+#    #+#             */
/*   Updated: 2026/01/26 18:18:58 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	combo[3];
	char	*start;
	int		i;
	int		j;
	int		end;

	i = 0;
	j = 2;
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
		while (combo[j - 1] < combo[j] && combo[j] < end)
		{
			write(1, &combo, 3);
			write(1, ", ", 2);
			combo[j]++;
		}
		//if (combo == "789")
		//	break ;
		end--;
		j--;
	}
}

int	main()
{
	ft_print_comb();
}