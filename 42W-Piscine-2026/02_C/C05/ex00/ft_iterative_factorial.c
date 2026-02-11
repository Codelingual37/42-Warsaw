/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:41:37 by dajohnso          #+#    #+#             */
/*   Updated: 2026/02/10 16:41:38 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	second;

	result = nb;
	second = nb - 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (second > 0)
		{
			result *= second;
			second--;
		}
		return (result);
	}
	return (0);
}

/*#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_factorial('a'));
}*/
