/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:19:08 by dajohnso          #+#    #+#             */
/*   Updated: 2026/02/04 16:19:09 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	if (i == n)
		i--;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int main(void)
{
	char s1[] = "ridiculous";
	char s2[] = "ridonculous";
	int result = ft_strncmp(s1, s2, 3);
	printf("%d\n", result);
	char s3[] = "ridonculous";
	char s4[] = "ridiculous";
	result = ft_strncmp(s3, s4, 3);
	printf("%d\n", result);
	char s5[] = "ridiculous";
	char s6[] = "ridiculous";
	result = ft_strncmp(s5, s6, 3);
	printf("%d\n", result);
}*/
