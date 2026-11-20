/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:57:07 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/12 14:29:01 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	r;

	i = 0;
	n = 1;
	r = 0;
	while (str[i] == 32 || str[i] == 12
		|| str[i] == 10 || str[i] == 13
		|| str[i] == 9 || str[i] == 11)
		i++;
	if (str[i] == '-')
	{
		n = n * -1;
		i++;
	}
	else
		if (str[i] == '+')
			i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * n);
}

// #include <stdlib.h>
// #include <stdio.h>

// int main()
// {
//     char pri[] = "-10564gdhd72";
//     printf ("%d\n", ft_atoi(pri));
//     printf ("%d", atoi(pri));
// }