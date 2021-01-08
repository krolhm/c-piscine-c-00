/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 10:44:30 by rbourgea          #+#    #+#             */
/*   Updated: 2019/08/28 14:59:01 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putint(int i)
{
	write(1, &i, 1);
}

void ft_print_numbers(void) 
{
	int nombre;
	nombre = '0';

	while (nombre <= '9')
	{
		ft_putint(nombre);
		nombre++;
	}
}
