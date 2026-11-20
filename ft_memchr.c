/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:42:55 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/02 15:59:52 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	size_t			fl;
	unsigned char	ch;
	unsigned char	*p;

	ch = c;
	fl = 0;
	i = 0;
	p = (unsigned char *)s;
	while (fl == 0 && i < n)
	{
		if (p[i] == ch)
			fl = 1;
		else
			i++;
	}
	if (fl == 1)
		return (&p[i]);
	else
		return (NULL);
}
