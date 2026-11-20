/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:44:45 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/20 15:15:54 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	banana(unsigned int ato, char pot)
// {
// 	if ((pot >= 'a' && pot <= 'z') && ato >= 1)
// 		return (pot - 32);
// 	return (pot);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*sstr;

	if (!s || !f)
		return (NULL);
	i = 0;
	sstr = malloc (ft_strlen (s) + 1);
	if (sstr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		sstr[i] = f (i, s[i]);
		i++;
	}
	sstr[i] = '\0';
	return (sstr);
}

// int	main(void)
// {
// 	char pri[] = "abcdefg";

// 	printf ("%s\n", ft_strmapi(pri, banana));
// }