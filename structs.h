/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romartin <romartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:46:46 by romartin          #+#    #+#             */
/*   Updated: 2023/05/30 14:44:55 by romartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_number
{
	int				num;
	int				index;
	struct s_number	*next;
}	t_number;

typedef struct s_value
{
	int			ac;
	int			i;
	int			split;
	int			max;
	int			nb_min;
	int			j;
	int			signe;
	long int	nb;
	int			minus;
}	t_value;

#endif