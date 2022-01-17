/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:16:42 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/15 21:35:31 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h> 
# include <unistd.h>

typedef struct s_elem{
	struct s_elem	*top;
	int				value;
	int				lable;
	struct s_elem	*bot;
}	t_elem;

void	push_swap(int argc, char **argv);

t_elem	*find_last_elem(t_elem	*stack);

t_elem	**sort_big(t_elem **stack, int max_shift);

t_elem	**sort_three(t_elem **stack);

// t_elem	**sort_five(t_elem **stack);

t_elem	**init_stack_a(int argc, char **argv, t_elem **stack);

t_elem	*lable(int argc, t_elem *topa);

int	check_bit(int shift, t_elem *stack);

// t_elem	**sort_small_stack(t_elem **stack);

// t_elem	*sort_big_stack(t_elem *topa, t_elem *topb);

t_elem	**push_a(t_elem **stack);

t_elem	**push_b(t_elem **stack);

t_elem	**sort_three(t_elem **stack);

void	printlist(t_elem *top);

int		get_max_shift(int argc);

t_elem	**swap_a(t_elem **stack);

t_elem	**swap_b(t_elem **stack);

t_elem	**rotate_a(t_elem **stack);

t_elem	**rev_rotate_a(t_elem **stack);

t_elem	**rotate_b(t_elem **stack);

t_elem	**rev_rotate_b(t_elem **stack);

int		is_sorted(t_elem *top);

int		check_dup(int argc, char **argv);

int		check_num(int argc, char **argv);

void	free_stacks(t_elem **stack);

#endif