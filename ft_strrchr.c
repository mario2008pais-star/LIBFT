/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:33:22 by msantiag          #+#    #+#             */
/*   Updated: 2026/10/30 17:51:39 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *s, int c)
{
	int		i;
	char	j;
	int		g;

	i = 0;
	g = -1;
	j = c;
	while (s[i] != '\0')
	{
		if (s[i] == j)
			g = i;
		i++;
	}
	if (j == '\0')
		return (&s[i]);
	if (g == -1)
		return (0);
	else
		return (&s[g]);
}

// #include <stdio.h>

// int main()
// {
//     char pri[] = "abababammmmmmm";
//     char seg;

//     seg = '\0';
//     printf ("%s", ft_strrchr(pri, seg));
// }