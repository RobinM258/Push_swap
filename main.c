/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romartin <romartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:01:38 by romartin          #+#    #+#             */
/*   Updated: 2023/06/26 15:17:19 by romartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sorted(t_number *stack_a)
{
	if (stack_a == NULL)
		return (-1);
	while (stack_a->next)
	{
		if (stack_a->index > stack_a->next->index)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

int	ft_max(t_number *stack)
{
	int	max;

	max = 0;
	while ((stack) != NULL)
	{
		if ((stack)->index > max)
			max = (stack)->index;
		stack = (stack)->next;
	}
	return (max);
}

void	ft_check(t_number *stack_a)
{
	t_number	*tmp;

	while (stack_a)
	{
		tmp = stack_a->next;
		while (tmp)
		{
			if (stack_a->num == tmp->num)
			{
				ft_printf("Error\n");
				exit(EXIT_FAILURE);
			}
			tmp = tmp->next;
		}
		stack_a = stack_a->next;
	}
}

void	ft_index(t_number *stack_a)
{
	t_number	*tmp;
	t_number	*start;
	int			index;

	start = stack_a;
	tmp = stack_a;
	while (stack_a)
	{
		index = 0;
		while (tmp)
		{
			if (stack_a->num > tmp->num)
				index++;
			tmp = tmp->next;
		}
		stack_a->index = index;
		stack_a = stack_a->next;
		tmp = start;
	}
}

int	main(int ac, char **av)
{
	t_number	*stack_a;
	t_number	*stack_b;
	t_value		*value;

	value = malloc(sizeof(t_value));
	stack_a = 0;
	stack_b = 0;
	value->max = 0;
	split(&stack_a, ac, value, av);
	ft_check(stack_a);
	ft_index (stack_a);
	if (ft_sorted(stack_a) == 1)
	{
		free(value);
		ft_lstclear(stack_a, free);
		return (0);
	}
	ft_if(value, &stack_a, &stack_b);
	free(value);
	ft_lstclear(stack_a, free);
	return (0);
}
