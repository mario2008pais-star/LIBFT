/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:01:47 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/20 16:47:53 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		t1;
	int		ct;
	char	*sstr;

	if (!s1 || !s2)
		return (NULL);
	sstr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (sstr == NULL)
		return (NULL);
	t1 = 0;
	ct = 0;
	while (s1[t1] != '\0')
	{
		sstr[ct++] = s1[t1++];
	}
	t1 = 0;
	while (s2[t1] != '\0')
	{
		sstr[ct++] = s2[t1++];
	}
	sstr[ct] = '\0';
	return (sstr);
}
