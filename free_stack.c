/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:11:13 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/15 12:54:31 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_stack_a(t_elem **stack)
{
	t_elem	*tmp1;
	t_elem	*tmp2;

	tmp1 = stack[1];
	while (tmp1 != NULL)
	{
		tmp2 = tmp1->bot;
		free(tmp1);
		tmp1 = tmp2;
	}
}

static void	free_stack_b(t_elem **stack)
{
	t_elem	*tmp1;
	t_elem	*tmp2;

	tmp1 = stack[2];
	while (tmp1 != NULL)
	{
		tmp2 = tmp1->bot;
		free(tmp1);
		tmp1 = tmp2;
	}
}

void	free_stacks(t_elem **stack)
{
	free_stack_a(stack);
	free_stack_b(stack);
}
