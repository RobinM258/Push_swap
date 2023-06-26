/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romartin <romartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:21:18 by romartin          #+#    #+#             */
/*   Updated: 2023/06/26 15:08:54 by romartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_number *lst, void (*del)(void *))
{
	t_number	*tmp;

	if (lst || del)
	{
		while (lst->next)
		{
			tmp = lst->next;
			del(lst);
			lst = tmp;
		}
		del(lst);
	}
}
