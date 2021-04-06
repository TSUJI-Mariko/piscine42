/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fft_print_comb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 07:37:38 by mtsuji            #+#    #+#             */
/*   Updated: 2021/03/15 16:58:13 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(char c)
{
	write(1, &c, 1);
}

void	print_line(char a, char b, char c)
{
	print_number(a);
	print_number(b);
	print_number(c);
}

void	ft_print_comb(void)
{
	char	centaine;
	char	dizaine;
	char	unite;

	centaine = '0';
	while (centaine <= '7')
	{
		dizaine = centaine + 1;
		while (dizaine <= '8')
		{
			unite = dizaine + 1;
			while (unite <= '9')
			{
				print_line(centaine, dizaine, unite);
				if (centaine < '7')
				{
					print_number(',');
					print_number(' ');
				}
				unite++;
			}
			dizaine++;
		}
		centaine++;
	}
}
