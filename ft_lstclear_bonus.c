/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoloher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:36:53 by tsoloher          #+#    #+#             */
/*   Updated: 2023/11/13 16:11:09 by tsoloher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (!del || !lst || !*lst)
		return ;
	while (*lst)
	{
		next = (*lst)-> next;
		del((*lst)-> content);
		free (*lst);
		*lst = next;
	}
	*lst = NULL;
}
