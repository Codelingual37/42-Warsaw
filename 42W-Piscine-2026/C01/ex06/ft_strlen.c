/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:14:10 by dajohnso          #+#    #+#             */
/*   Updated: 2026/01/29 14:14:52 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str = "Hello";
	int		length;

	length = ft_strlen(str);
	printf("%s%s%s%d%s\n", "The length of string \"",
	 str, "\" is ", length, ".");
}*/