/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:15:29 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/15 12:41:16 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_elem	*create_elem_ontop(int value, t_elem *top)
{
	t_elem	*rtn;

	rtn = malloc(sizeof(t_elem));
	if (!rtn)
		return (NULL);
	rtn->value = value;
	rtn->bot = top;
	rtn->top = NULL;
	rtn->lable = -1;
	return (rtn);
}

t_elem	**init_stack_a(int argc, char **argv, t_elem **stack)
{
	while (--argc > 0)
	{
		stack[1] = create_elem_ontop(atoi(argv[argc]), stack[0]);
		if (stack[0] != NULL)
			stack[0]->top = stack[1];
		stack[0] = stack[1];
	}
	return (stack);
}
