/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:52:46 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/20 11:08:37 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	int		b;

	i = 0;
	j = 0;
	b = 0;
	if (size == 0)
		return (0);
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0')
		j++;
	if (i == size)
		return (size + j);
	while (src[b] != '\0' && ((b + i) + 1) < size)
	{
		dest[i + b] = src[b];
		b++;
	}
	dest[i + b] = '\0';
	return (i + j);
}

// #include <stdio.h>

// int main()
// {
//     char pri[] = "abc";
//     char seg[] = "def";
//     size_t tri;

//     tri = 10;
//     printf ("%li", ft_strlcat(pri, seg, tri));
// }