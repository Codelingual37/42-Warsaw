/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:01:51 by dajohnso          #+#    #+#             */
/*   Updated: 2026/02/02 16:02:00 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			if (str[i] < 'a' || str[i] > 'z')
				return (0);
		}
		i++;
	}
	return (1);
}
//#include <stdio.h>
/*int main(void) {

	char string[] = "Hello, World";
	char* str = string;
	int result = ft_str_is_alpha(str);
	printf("%d\n", result);
}*/
