/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantiag <msantiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:49:26 by msantiag          #+#    #+#             */
/*   Updated: 2026/11/16 14:06:21 by msantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pn;
	t_list	*sn;

	if (lst == NULL || del == NULL)
		return ;
	pn = *lst;
	while (pn != NULL)
	{
		sn = pn ->next;
		del (pn ->content);
		free (pn);
		pn = sn;
	}
	*lst = NULL;
}
