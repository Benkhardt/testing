/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:13:10 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/15 12:55:16 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printlist(t_elem *top)
{
	t_elem	*tmp;

	tmp = top;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->value, 1);
		ft_putchar_fd(' ', 1);
		ft_putnbr_fd(tmp->lable, 1);
		ft_putchar_fd('\n', 1);
		tmp = tmp->bot;
	}
}

void	swap(t_elem *top)
{
	int		store_value;
	t_elem	*elem;

	if (top->bot == NULL)
		return ;
	elem = top->bot;
	store_value = top->value;
	top->value = elem->value;
	elem->value = store_value;
}

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
	return (stack);
}
