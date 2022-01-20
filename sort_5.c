/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:52:20 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/20 10:38:00 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem  **sort_five(t_elem **stack)
{
    int i;

    i = -1;
    while (++i < 2)
        stack = push_a(stack);
    //sort 3 on both stacks... have rewrite a little
}