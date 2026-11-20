/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 09:56:43 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/02 13:52:11 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = c;
	while (s[i] != '\0' && s[i] != ch)
	{
		i++;
	}
	if (s[i] == ch)
		return (&s[i]);
	else
		return (NULL);
}
