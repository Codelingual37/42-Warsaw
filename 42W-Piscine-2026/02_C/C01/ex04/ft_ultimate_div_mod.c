/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:13:00 by dajohnso          #+#    #+#             */
/*   Updated: 2026/01/29 14:13:02 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	quotient;
	int	remainder;

	quotient = *a / *b;
	remainder = *a % *b;
	*a = quotient;
	*b = remainder;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = 11;
	int b = 4;

	printf("%s", "Integer A is: ");
	printf("%d\n", a);
	printf("%s", "Integer B is: ");
	printf("%d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("%s", "The result of a / b is: ");
	printf("%d\n", a);
	printf("%s", "The remainder of a / b: ");
	printf("%d\n", b);
}*/