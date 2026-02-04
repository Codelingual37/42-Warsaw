/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:19:42 by dajohnso          #+#    #+#             */
/*   Updated: 2026/02/04 16:19:43 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					break ;
				i++;
			}
			if (to_find[i] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	char	str[] = "Warsaw";
	char	to_find[] = "r";
	char	*result = ft_strstr(str, to_find);
	printf("%s\n", result);
}*/
