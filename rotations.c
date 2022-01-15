/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:30:48 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/15 12:51:06 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_elem	*find_last_elem(t_elem	*stack)
{
	while (stack->bot != NULL)
		stack = stack->bot;
	return (stack);
}

t_elem	**rotate_a(t_elem **stack)
{
	t_elem	*last;

	last = find_last_elem(stack[1]);
	stack[1]->top = last;
	last->bot = stack[1];
	last = stack[1]->bot;
	last->top = NULL;
	stack[1]->bot = NULL;
	stack[1] = last;
	return (stack);
}

t_elem	**rev_rotate_a(t_elem **stack)
{
	t_elem	*last;

	last = find_last_elem(stack[1]);
	last->bot = stack[1];
	stack[1]->top = last;
	stack[1] = last->top;
	stack[1]->bot = NULL;
	last->top = NULL;
	stack[1] = last;
	return (stack);
}

t_elem	**rotate_b(t_elem **stack)
{
	t_elem	*last;

	last = find_last_elem(stack[2]);
	stack[2]->top = last;
	last->bot = stack[2];
	last = stack[2]->bot;
	last->top = NULL;
	stack[2]->bot = NULL;
	stack[2] = last;
	return (stack);
}

t_elem	**rev_rotate_b(t_elem **stack)
{
	t_elem	*last;

	last = find_last_elem(stack[2]);
	last->bot = stack[2];
	stack[2]->top = last;
	stack[2] = last->top;
	stack[2]->bot = NULL;
	last->top = NULL;
	stack[2] = last;
	return (stack);
}
