/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:18:58 by dajohnso          #+#    #+#             */
/*   Updated: 2026/02/04 16:18:59 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		i--;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main(void) {
	char	s1[] = "Hello";
	char	s2[] = "Hell";
	int result = ft_strcmp(s1, s2);
	printf("%d\n", result);
	char s3[] = "Hell";
	char s4[] = "Hello";
	result = ft_strcmp(s3, s4);
	printf("%d\n", result);
	char s5[] = "Hello";
	char s6[] = "Hello";
	result = ft_strcmp(s5, s6);
	printf("%d\n", result);
}*/
