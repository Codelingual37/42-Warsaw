/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:20:15 by dajohnso          #+#    #+#             */
/*   Updated: 2026/01/29 14:20:17 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	return (dest);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char	*src;
	char	*dest;

	src = "Hello";
	dest = (char *)malloc(6 * sizeof(char));
	ft_strcpy(dest, src);
	printf("%s %s\n", "The source string is:", src);
	printf("%s %s\n", "The copied string is now:", dest);
	free(dest);
}*/