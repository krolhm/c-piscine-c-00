/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:39:35 by rbourgea          #+#    #+#             */
/*   Updated: 2019/08/28 14:49:57 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_print(int *t, int taille)
{
	int	i;
	int	estpetit;

	i = 1;
	estpetit = 1;
	while (i < taille)
	{
		if (t[i - 1] >= t[i])
		estpetit = 0;
		i++;
	}
	if (estpetit)
	{
		i = 0;
		while (i < taille)
			ft_putchar(t[i++] + '0');
		if (t[0] < (10 - taille))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void ft_print_combn(int n)
{
	int	i;
	int	tab[n];

	i = 0;
	if (n == 1)
	while (i < 10)
		ft_putchar(i++ + '0');
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n) && n > 1)
	{
		ft_print(tab, n);
		tab[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}

