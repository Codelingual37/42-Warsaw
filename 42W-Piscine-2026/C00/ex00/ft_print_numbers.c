/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajohnso <dajohnso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:29:43 by dajohnso          #+#    #+#             */
/*   Updated: 2026/01/20 17:45:32 by dajohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void)
{
    char    letter;

    letter = 'a';
    while (letter <= 'z')
    {
        write(1, &letter, 1);
        letter++;
    }
}
/*
int main()
{
    ft_print_alphabet();
}*/