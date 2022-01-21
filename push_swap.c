/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:16:20 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/20 22:17:49 by dbenkhar         ###   ########.fr       */
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
	if (argc >= 5 && argc < 7)
		stack = sort_five(stack);
	if (argc > 6)
		stack = sort_big(stack, get_max_shift(argc - 1));
	free_stacks(stack);
	free(store);
}
