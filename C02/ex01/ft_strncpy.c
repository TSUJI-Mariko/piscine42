/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:31:55 by mtsuji            #+#    #+#             */
/*   Updated: 2021/04/27 11:24:51 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* main
#include <stdio.h>
#include <string.h>

int main()
{
	char tab[] = "ABCDEFGHI";
	char abc[] = "12345";

	printf("%s\n", ft_strncpy(tab, abc, 3));
	printf("%s\n", strncpy(tab, abc, 8));
	return (0);
}

実行結果例；
1番目:123DEFGHI
2番目:12345
*/
