/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romartin <romartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:49:16 by romartin          #+#    #+#             */
/*   Updated: 2023/06/26 15:13:21 by romartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_number **stack_a, char *str)
{
	t_number	*tmp;

	tmp = *stack_a;
	if (stack_a == NULL)
		exit(EXIT_FAILURE);
	*stack_a = (*stack_a)->next;
	tmp->next = tmp->next->next;
	(*stack_a)->next = tmp;
	ft_printf("%s\n", str);
}

void	ft_rotate(t_number **stack_a, char *str)
{
	t_number	*tmp;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = NULL;
	ft_lstlast(*stack_a)->next = tmp;
	ft_printf("%s\n", str);
}

void	ft_reverse_rotate(t_number **stack_a, char *str)
{
	t_number	*tmp;
	t_number	*end;

	end = ft_lstlast(*stack_a);
	tmp = *stack_a;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	end->next = *stack_a;
	*stack_a = end;
	tmp->next = NULL;
	ft_printf("%s\n", str);
}

void	ft_push(t_number **stack_from, t_number **stack_to, char *str)
{
	t_number	*tmp;

	tmp = (*stack_from)->next;
	(*stack_from)->next = *stack_to;
	*stack_to = *stack_from;
	*stack_from = tmp;
	ft_printf("%s\n", str);
}
