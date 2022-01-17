/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:16:20 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/15 21:38:43 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int argc, char **argv)
{
	t_elem	**stack;
	t_elem	**store;

	stack = malloc(sizeof(t_elem) * 3);
	stack[0] = NULL;
	stack[1] = NULL;
	stack[2] = NULL;
	store = stack;
	stack = init_stack_a(argc, argv, stack);
	stack[1] = lable(argc - 1, stack[1]);
	if (is_sorted(stack[1]))
	{
		free_stacks(stack);
		free(store);
		return ;
	}
	if (argc < 5)
		stack = sort_three(stack);
	// if (argc < 7)
	// 	stack = sort_five(stack);
	// ft_putstr_fd("stack a\n", 1);
	// printlist(stack[1]);
	if (argc > 6)
		stack = sort_big(stack, get_max_shift(argc - 1));
	ft_putstr_fd("stack a sorted\n", 1);
	printlist(stack[1]);
	free_stacks(stack);
	free(store);
	}
