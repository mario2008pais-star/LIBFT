/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:33:18 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/03 10:49:21 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*f;

	i = 0;
	while (src[i] != '\0')
		i++;
	j = i;
	i = 0;
	f = malloc(j + 1);
	if (f == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		f[i] = src[i];
		i++;
	}
	f[i] = '\0';
	i = 0;
	return (f);
}
