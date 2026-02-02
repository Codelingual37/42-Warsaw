/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:03:15 by dajohnso          #+#    #+#             */
/*   Updated: 2026/02/02 16:03:16 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first;

	i = 0;
	first = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (first && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!first && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			first = 0;
		}
		else
			first = 1;
		i++;
	}
	return (str);
}
//#include <stdio.h>
/*int main(void) {
	char string[] = "salut, ? 42mots quarante-deux; cinquante+et+un";
	char* str = string;
	ft_strcapitalize(str);

	printf("%s\n", str);

}*/
