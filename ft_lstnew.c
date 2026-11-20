/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:28:58 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/20 12:25:08 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*i;

	i = malloc (sizeof(t_list));
	if (i == NULL)
		return (NULL);
	i ->content = content;
	i ->next = NULL;
	return (i);
}

// int	main(void)
// {
// 	int	i;
// 	i = 10;
// 	printf ("%d", ft_lstnew (i));
// }
