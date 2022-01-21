/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:32:57 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/21 16:06:28 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_elem	**sorting(t_elem **stack, int shift)
{
	int	count;

	count = 0;
	while (check_bit(shift, stack[1]) && stack[1] != NULL)
	{
		if (!((stack[1]->lable >> shift) & 1))
			stack = push_a(stack);
		else
		{
			stack = rotate_a(stack);
			count++;
		}
	}
	while (count > 0)
	{
			stack = rev_rotate_a(stack);
			count--;
	}
	return (stack);
}

// sorts big stack
t_elem	**sort_big(t_elem **stack, int max_shift)
{
	int		shift;

	shift = -1;
	while (++shift <= max_shift)
	{
		stack = sorting(stack, shift);
		while (stack[2] != NULL)
			stack = push_b(stack);
	}
	return (stack);
}
