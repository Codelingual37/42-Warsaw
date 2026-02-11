/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:12:09 by dajohnso          #+#    #+#             */
/*   Updated: 2026/01/29 14:12:17 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a = 10;
	int b = 4;
	int	div;
	int	mod;

	printf("%s", "Integer A is: ");
	printf("%d\n", a);
	printf("%s", "Integer B is: ");
	printf("%d\n", b);
	ft_div_mod(a, b, &div, &mod);
	printf("%s", "The result of a / b is: ");
	printf("%d\n", div);
	printf("%s", "The remainder of a / b: ");
	printf("%d\n", mod);
}*/