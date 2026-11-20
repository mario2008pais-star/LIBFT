/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 08:40:45 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/03 08:56:05 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*l;

	if (n == 0)
		return (0);
	i = 0;
	p = (unsigned char *)s1;
	l = (unsigned char *)s2;
	while (p[i] == l[i] && i < n - 1)
	{
		i++;
	}
	return (p[i] - l[i]);
}
