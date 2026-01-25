/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:48:15 by dajohnso          #+#    #+#             */
/*   Updated: 2026/01/25 17:10:36 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	*combo;
	int		i;

	combo = "012";
	i = 2;
	while (i >= 0)
	{
		while (combo[i - 1] < combo[i])
		{
			combo[i]++;
			write(1, &combo, 3);
			write(1, ", ", 2);
			combo[i]++;
		}
		//if (combo == "789")
		//	break ;
		i--;
	}
}

int	main()
{
	ft_print_comb();
}