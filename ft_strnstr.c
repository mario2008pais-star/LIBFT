/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:09:36 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/20 11:19:57 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *hstr, char *nstr, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n <= 0 && (!hstr || !nstr))
		return (hstr);
	if (nstr[i] == '\0')
		return (hstr);
	while (hstr[i] != '\0' && i < n)
	{
		j = 0;
		while (hstr[i + j] != '\0' && hstr[i + j] == nstr[j] && (i + j < n))
		{
			if (nstr[j + 1] == '\0')
			{
				return (&hstr[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	char pri[] = "Atirei o pau ao gato";
// 	char seg[] = "pau";
//     int p;

//     p = 12;
// 	printf ("%s", ft_strnstr(pri, seg, p));
// }
