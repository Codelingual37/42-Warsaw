/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:20:38 by dajohnso          #+#    #+#             */
/*   Updated: 2026/02/02 15:14:18 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char	*src;
	char	*dest;
	int		bytes;

	src = "Hello";
	bytes = 3;
	dest = (char *)malloc((bytes + 1) * sizeof(char));
	ft_strncpy(dest, src, bytes);
	printf("%s %s\n", "The source string is:", src);
	printf("%s %s\n", "The copied string is now:", dest);
	free(dest);
}*/
