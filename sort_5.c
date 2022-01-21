/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:52:20 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/21 01:58:39 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_elem	**pre_sort_a(t_elem **stack)
{
	t_elem	*last;

	last = find_last_elem(stack[1]);
	stack[0] = stack[1]->bot;
	if (stack[1]->lable < last->lable
		&& stack[1]->lable > stack[0]->lable)
		return (swap_a(stack));
	else if (stack[0]->lable > last->lable
		&& stack[0]->lable < stack[1]->lable)
		return (rev_rotate_a(swap_a(stack)));
	else if (last->lable < stack[1]->lable
		&& last->lable > stack[0]->lable)
		return (rotate_a(stack));
	else if (last->lable > stack[1]->lable
		&& last->lable < stack[0]->lable)
		return (rotate_a(swap_a(stack)));
	else if (stack[1]->lable < stack[0]->lable
		&& stack[1]->lable > last->lable)
		return (rev_rotate_a(stack));
	else
		return (stack);
}

static t_elem	**after_sort(t_elem **stack)
{
	if (stack[1]->lable <= 2)
		while (stack[1]->lable != 0)
			stack = rev_rotate_a(stack);
	else
		while (stack[1]->lable != 0)
			stack = rotate_a(stack);
	return (stack);
}

t_elem	**sort_five(t_elem **stack)
{
	stack = push_a(stack);
	stack = push_a(stack);
	stack = pre_sort_a(stack);
	while (stack[2] != NULL)
	{
		if (stack[2]->bot == NULL
			&& (stack[1]->lable - stack[2]->lable) == 1)
			stack = push_b(stack);
		else if (stack[2]->lable == 4 && stack[2]->bot != NULL)
			stack = rotate_b(stack);
		else if (stack[2]->lable == 4 && stack[1]->lable == 0)
			stack = push_b(stack);
		else if (stack[2]->lable < stack[1]->lable && stack[2]->bot != NULL)
			stack = push_b(stack);
		else
			stack = rotate_a(stack);
	}
	stack = after_sort(stack);
	return (stack);
}
