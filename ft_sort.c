/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romartin <romartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:43:33 by romartin          #+#    #+#             */
/*   Updated: 2023/05/29 14:30:26 by romartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_number **stack)
{
	if (ft_sorted(*stack))
		return ;
	if ((*stack)->index > (*stack)->next->index \
		&& (*stack)->index > (*stack)->next->next->index)
		ft_rotate(stack, "ra");
	if (((*stack))->index > ((*stack))->next->index)
		ft_swap(stack, "sa");
	if ((*stack)->index < (*stack)->next->index \
		&& (*stack)->next->index > (*stack)->next->next->index)
		ft_reverse_rotate(stack, "rra");
	if ((*stack)->index > (*stack)->next->index)
		ft_swap(stack, "sa");
}

void	ft_sort_four(t_number **stack_a, t_number **stack_b)
{
	int	tmp;

	tmp = -1;
	ft_push(stack_a, stack_b, "pb");
	ft_sort_three(stack_a);
	while ((*stack_a)->index != tmp && (*stack_b)->index > (*stack_a)->index)
	{
		if (tmp == -1)
			tmp = (*stack_a)->index;
		ft_rotate(stack_a, "ra");
	}
	ft_push(stack_b, stack_a, "pa");
	while (ft_sorted(*stack_a) != 1)
		ft_rotate(stack_a, "ra");
}

void	ft_sort_five(t_number **stack_a, t_number **stack_b)
{
	int	tmp;

	tmp = -1;
	ft_push(stack_a, stack_b, "pb");
	ft_push(stack_a, stack_b, "pb");
	ft_sort_three(stack_a);
	if ((*stack_b)->index > (*stack_b)->next->index)
		ft_swap(stack_b, "sb");
	if ((*stack_a)->index > (*stack_b)->index)
		ft_push(stack_b, stack_a, "pa");
	while (*stack_b)
	{
		if ((*stack_b) != NULL && (*stack_b)->index + 1 == (*stack_a)->index)
			ft_push(stack_b, stack_a, "pa");
		else if ((*stack_b) != NULL
			&& (*stack_b)->index - 1 == (*stack_a)->index)
		{
			ft_rotate(stack_a, "ra");
			ft_push(stack_b, stack_a, "pa");
		}
		else
			ft_rotate(stack_a, "ra");
	}
	while (ft_sorted(*stack_a) != 1)
		ft_rotate(stack_a, "ra");
}
