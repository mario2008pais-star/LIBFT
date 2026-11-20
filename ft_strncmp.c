/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:13:08 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/20 11:16:20 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		if (i == n)
			return (s1[i] - s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include<stdio.h>

// int main()
// {
//     char pri[] = "abc";
//     char seg[] = "abC";
//     int p;

//     p = 0;
//     printf ("%d", ft_strncmp("test\200", "test\0", 6));
// }