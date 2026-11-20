/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:29:17 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/20 16:38:56 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	ct;
	size_t	slen;
	char	*sstr;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	i = start;
	sstr = malloc(len + 1);
	if (sstr == NULL)
		return (NULL);
	ct = 0;
	while (s[i] != '\0' && ct < len)
	{
		sstr[ct] = s[i];
		ct++;
		i++;
	}
	sstr[ct] = '\0';
	return (sstr);
}
