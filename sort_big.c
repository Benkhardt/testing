/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:32:57 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/19 21:46:06 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// sorts big stack
t_elem	**sort_big(t_elem **stack, int max_shift)
{
	int		shift;
	t_elem	*last;
	int		count;

	shift = 0;
	count = 0;
	while (shift <= max_shift)
	{
		while (check_bit(shift, stack[1]) && stack[1] != NULL)
		{
			//ft_putnbr_fd(stack[1]->lable, 1);
			last = find_last_elem(stack[1]);
			if (!((stack[1]->lable >> shift) & 1))
			{
				stack = push_a(stack);
			}
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
		// ft_putstr_fd("stack a:\n", 1); // DEBUG
		// printlist(stack[1]);
		// ft_putstr_fd("stack b:\n", 1); // DEBUG
		// if (stack[2] != NULL)
		// 	printlist(stack[2]);
		shift++;
		count = 0;
		while (stack[2] != NULL)
			stack = push_b(stack);
	}
	return (stack);
}
