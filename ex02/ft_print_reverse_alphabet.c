/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 10:38:43 by rbourgea          #+#    #+#             */
/*   Updated: 2019/08/28 14:59:20 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
		write(1, &c, 1);
}

void ft_print_reverse_alphabet(void) 
{
	char lettre;
	lettre = 'z';

	while (lettre >= 'a')
	{
		ft_putchar(lettre);
		lettre--;
	}
}
