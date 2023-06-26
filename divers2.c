/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divers2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romartin <romartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:13:07 by romartin          #+#    #+#             */
/*   Updated: 2023/06/26 15:13:33 by romartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_octet_max(t_number *stack)
{
	int	nb;
	int	mul;
	int	ret;

	mul = 1;
	ret = 1;
	nb = ft_max(stack);
	while (nb - mul > 0)
	{
		nb = nb - mul;
		ret++;
		mul = mul * 2;
	}
	return (ret);
}

void	ft_radix(t_number **stack_a, t_number **stack_b)
{
	int	n_octet;
	int	check;

	n_octet = 0;
	check = -1;
	while (ft_sorted(*stack_a) != 1 || n_octet < ft_octet_max(*stack_a))
	{
		if (*stack_a && (((*stack_a)->index >> n_octet) & 1) == 0)
			ft_push(stack_a, stack_b, "pb");
		else
		{
			if (check == -1)
				check = (*stack_a)->index;
			ft_rotate(stack_a, "ra");
		}
		if ((*stack_a) && (*stack_a)->index == check)
		{
			check = -1;
			n_octet++;
			while ((*stack_b) != NULL)
				ft_push(stack_b, stack_a, "pa");
		}
	}
}

void	ft_add_back(t_number **lst, int number)
{
	t_number	*new;

	new = ft_lst_new(number);
	if (lst)
	{
		if (*lst)
			ft_lstlast(*lst)->next = new;
		else
			*lst = new;
	}
}

void	ft_if(t_value *value, t_number **stack_a, t_number **stack_b)
{
	if (value->max == 2)
		ft_swap(stack_a, "sa");
	if (value->max == 3)
		ft_sort_three(stack_a);
	if (value->max == 4)
		ft_sort_four(stack_a, stack_b);
	if (value->max == 5)
		ft_sort_five(stack_a, stack_b);
	if (value->max > 5)
		ft_radix(stack_a, stack_b);
}
