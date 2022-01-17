/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:48:48 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/15 22:19:51 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	**sort_three(t_elem **stack)
{
	stack[0] = find_last_elem(stack[1]);
	if (stack[1]->lable == 1 && stack[0]->lable == 2)
		return (swap_a(stack));
	else if (stack[1]->lable == 2 && stack[0]->lable == 0)
		return (rev_rotate_a(swap_a(stack)));
	else if (stack[1]->lable == 2 && stack[0]->lable == 1)
		return (rotate_a(stack));
	else if (stack[1]->lable == 0 && stack[0]->lable == 1)
		return (rotate_a(swap_a(stack)));
	else
		return (rev_rotate_a(stack));
}
