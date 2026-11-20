/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:46:30 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/02 09:35:46 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	char			ch;

	i = 0;
	ch = c;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = ch;
		i++;
	}
	return (s);
}
