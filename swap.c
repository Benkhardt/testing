/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:26:28 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/15 19:30:45 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	**swap_a(t_elem **stack)
{
	t_elem	*tmp;

	if (stack[1]->bot == NULL)
		return (stack);
	tmp = stack[1];
	stack[0] = tmp->bot;
	tmp->bot = stack[0]->bot;
	tmp->top = stack[0];
	stack[0]->bot = tmp;
	stack[0]->top = NULL;
	stack[1] = stack[0];
	ft_putstr_fd("sa\n", 1);
	return (stack);
}

t_elem	**swap_b(t_elem **stack)
{
	t_elem	*tmp;

	if (stack[2]->bot == NULL)
		return (stack);
	tmp = stack[2];
	stack[0] = tmp->bot;
	tmp->bot = stack[0]->bot;
	tmp->top = stack[0];
	stack[0]->bot = tmp;
	stack[0]->top = NULL;
	stack[2] = stack[0];
	ft_putstr_fd("sb\n", 1);
	return (stack);
}
