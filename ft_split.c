/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 08:57:47 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/20 15:16:56 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contwords(char const *str, char ch)
{
	int	i;
	int	cnt;
	int	flgword;

	flgword = 1;
	cnt = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ch && flgword == 1)
		{
			cnt++;
			flgword = 0;
		}
		if (str[i] == ch)
			flgword = 1;
		i++;
	}
	return (cnt);
}

static int	ft_contlet(char const *str, char ch, int idx)
{
	int	i;

	i = 0;
	while (str[idx] != ch && str[idx] != '\0')
	{
		idx++;
		i++;
	}
	return (i);
}

static void	*freespace(char **cary, int pos)
{
	int	i;

	i = 0;
	while (i != pos)
	{
		free (cary[i]);
		i++;
	}
	free (cary);
	return (NULL);
}

static char	**ft_arrayfull(char **mary, char ch, const char *str, int phv)
{
	int	m;
	int	j;

	j = 0;
	while (str[phv] != '\0')
	{
		while (str[phv] != '\0' && str[phv] == ch)
			phv++;
		m = ft_contlet (str, ch, phv);
		if (str[phv] != '\0')
		{
			mary[j] = ft_substr (str, phv, ft_contlet (str, ch, phv));
			if (mary[j] == NULL)
				return (freespace (mary, j));
			phv = phv + m;
			j++;
		}
	}
	mary[j] = NULL;
	return (mary);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**astr;

	if (!s)
		return (NULL);
	i = 0;
	astr = malloc ((ft_contwords (s, c) + 1) * sizeof(char *));
	if (astr == NULL)
		return (NULL);
	astr = ft_arrayfull (astr, c, s, i);
	return (astr);
}
