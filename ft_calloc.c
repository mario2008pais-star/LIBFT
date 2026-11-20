/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 17:15:43 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/20 11:24:10 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	long	i;
	char	*pstr;

	i = nmemb * size;
	if (i > 2147483647)
		return (NULL);
	pstr = malloc (i);
	if (pstr == NULL)
		return (NULL);
	ft_bzero (pstr, i);
	return (pstr);
}
