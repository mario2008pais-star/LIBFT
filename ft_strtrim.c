/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:22:37 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/20 15:04:17 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_confirm(char const c, char const *l)
{
	int	i;

	i = 0;
	while (l[i] != '\0')
	{
		if (c == l[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		ini;
	int		fin;
	char	*sstr;

	if (!s1 || !set)
		return (NULL);
	ini = 0;
	fin = ft_strlen(s1);
	while (s1[ini] != '\0' && ft_confirm(s1[ini], set) == 1)
		ini++;
	while (fin > ini && ft_confirm(s1[fin - 1], set) == 1)
		fin--;
	fin = fin - ini;
	sstr = ft_substr(s1, ini, fin);
	return (sstr);
}

// int	main(void)
// {
// 	char pri[] = "   adcabca";
// 	char seg[] = "a c";

// 	printf ("%s", ft_strtrim(pri, seg));
// }
