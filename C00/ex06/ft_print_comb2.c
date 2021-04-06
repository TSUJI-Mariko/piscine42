/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:02:34 by mtsuji            #+#    #+#             */
/*   Updated: 2021/03/23 10:48:57 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			print_number(nb1 / 10 + '0');
			print_number(nb1 % 10 + '0');
			print_number(' ');
			print_number(nb2 / 10 + '0');
			print_number(nb2 % 10 + '0');
			if (nb1 < 98)
			{
				write(1, ", ", 2);
			}
			nb2++;
		}
		nb1++;
	}
}
