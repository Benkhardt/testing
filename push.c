/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:25:29 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/15 19:31:56 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	**push_a(t_elem **stack)
{
	t_elem	*tmp;

	tmp = stack[1]->bot;
	stack[1]->bot = stack[2];
	if (stack[2] != NULL)
		stack[2]->top = stack[1];
	stack[2] = stack[1];
	stack[1] = tmp;
	if (stack[1] != NULL)
		stack[1]->top = NULL;
	ft_putstr_fd("pa\n", 1);
	return (stack);
}

t_elem	**push_b(t_elem **stack)
{
	t_elem	*tmp;

	tmp = stack[2]->bot;
	stack[2]->bot = stack[1];
	if (stack[1] != NULL)
		stack[1]->top = stack[2];
	stack[1] = stack[2];
	stack[2] = tmp;
	if (stack[2] != NULL)
		stack[2]->top = NULL;
	ft_putstr_fd("pb\n", 1);
	return (stack);
}
