/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 16:05:15 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/16 17:35:53 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newn;
	t_list	*newl;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	newl = NULL;
	while (lst != NULL )
	{
		newn = ft_lstnew (f (lst ->content));
		if (newn == NULL)
		{
			ft_lstclear (&newl, del);
			return (NULL);
		}
		ft_lstadd_back (&newl, newn);
		lst = lst ->next;
	}
	return (newl);
}
