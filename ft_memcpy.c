/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 10:13:47 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/20 10:50:58 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*l;
	unsigned char	*p;
	size_t			c;

	if (!dest && !src)
		return (NULL);
	c = 0;
	l = (unsigned char *)dest;
	p = (unsigned char *)src;
	while (c < n)
	{
		l[c] = p[c];
		c++;
	}
	return (dest);
}
