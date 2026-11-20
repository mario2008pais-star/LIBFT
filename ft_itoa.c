/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 11:48:07 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/17 14:06:03 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	boolneg(long num)
{
	if (num < 0)
		return (1);
	else
		return (0);
}

static int	lenstr(long num, int bool)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	if (bool == 1)
		return (i +1);
	else
		return (i);
}

static char	*psolvstr(long num, int len, char *sstr)
{
	int	mod;

	while (len - 1 >= 0)
	{
		mod = num % 10;
		num = num / 10;
		sstr[len - 1] = '0' + mod;
		len--;
	}
	return (sstr);
}

static char	*nsolvstr(long num, int len, char *sstr)
{
	int	mod;

	sstr[0] = '-';
	while (len - 1 > 0)
	{
		mod = num % 10;
		num = num / 10;
		sstr[len - 1] = '0' + mod;
		len--;
	}
	return (sstr);
}

char	*ft_itoa(int n)
{
	char	*pstr;
	int		i;
	int		nf;
	long	nbr;

	nbr = n;
	nf = boolneg(nbr);
	if (nf == 1)
		nbr = nbr * -1;
	pstr = malloc (lenstr (nbr, nf) + 1);
	if (pstr == NULL)
		return (NULL);
	i = lenstr (n, nf);
	if (nf == 1)
		pstr = nsolvstr (nbr, i, pstr);
	else
		pstr = psolvstr (nbr, i, pstr);
	pstr[lenstr (nbr, nf)] = '\0';
	return (pstr);
}

// int	main(void)
// {
// 	int	pri;

// 	pri = -2147483648;
// 	printf ("%s\n", ft_itoa(pri));
// }
