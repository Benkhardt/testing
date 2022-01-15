/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:32:57 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/15 22:24:05 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Sorts a stack less equal 5 elements
t_elem	**sort_small(t_elem **stack, int max_shift)
{
	int		shift;
	t_elem	*last;
	
	shift = 0;
	last = NULL;
	while (shift < 4) // have to get max_shift out of argc!
	{
		while (check_bit(shift, stack[1]) && stack[1] != NULL)
		{
			last = find_last_elem(stack[1]);
			stack[0] = stack[1]->bot;
			if (!((stack[1]->lable >> shift) & 1))
				stack = push_a(stack); // we have to get new stack top
			else if (!((stack[0]->lable >> shift) & 1) && stack[0] != NULL)
			{
				stack = swap_a(stack); // getting new stack top aswell
				stack = push_a(stack);
			}
			else if (!((last->lable >> shift) & 1) && last != NULL)
			{	
				stack = rev_rotate_a(stack);
				stack = push_a(stack);
			}
			else
				stack = rotate_a(stack);
		}
		shift++;
		while (stack[2] != NULL)
			push_b(stack);
	}
	return (stack);
}
