/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romartin <romartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:35:48 by romartin          #+#    #+#             */
/*   Updated: 2023/06/26 15:14:58 by romartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "structs.h"
# include <stdarg.h>

int			ft_octet_max(t_number *stack);
int			ft_atoi(const char *str, t_value	*value);
int			ft_sorted(t_number *stack_a);
int			ft_sorted(t_number *stack_a);
void		ft_sort_three(t_number **stack);
void		ft_sort_four(t_number **stack_a, t_number **stack_b);
void		ft_sort_five(t_number **stack_a, t_number **stack_b);
void		ft_push(t_number **stack_from, t_number **stack_to, char *str);
void		ft_reverse_rotate(t_number **stack_a, char *str);
void		ft_rotate(t_number **stack_a, char *str);
void		ft_swap(t_number **stack_a, char *str);
void		ft_check(t_number *stack_a);
void		ft_add_back(t_number **lst, int number);
void		ft_radix(t_number **stack_a, t_number **stack_b);
void		ft_index(t_number *stack_a);
t_number	*ft_lstlast(t_number *lst);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		*ft_calloc(size_t count, size_t size);
t_number	*ft_lst_new(int content);
size_t		ft_strlen(const char *s);
void		ft_bzero(void *b, size_t n);
void		ft_print(t_number *stack_a, t_number *stack_b);
size_t		ft_strlen(const char *s);
void		split(t_number **stack_a, int argc, t_value *value, char **av);
void		*freetab(char **tab);
char		**ft_split(char const *s, char c);
int			ft_max(t_number *stack);
void		error(int i);
int			ft_printf(const char *str, ...);
int			ft_unsigned_putnbr(unsigned int nb, int *error);
int			ft_hexa_min(unsigned int n, int *error);
int			ft_hexa_max(unsigned int n, int *error);
int			ft_pointer(unsigned long long n, int *error, int i);
int			ft_putchar_fd(char c, int fd, int *error);
int			ft_putnbr_fd(int nb, int fd, int *error);
int			ft_putstr_fd(char *s, int fd, int *error);
int			ft_atoi_bis(const char *str, t_value	*value);
int			ft_isspace(char c);
void		ft_value(t_value	*value);
void		ft_lstclear(t_number *lst, void (*del)(void *));
void		ft_if(t_value *value, t_number **stack_a, t_number **stack_b);

#endif