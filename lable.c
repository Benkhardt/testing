/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lable.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:16:33 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/15 11:22:53 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_elem	*get_next_nlabled(t_elem *topa)
{
	t_elem	*tmp1;
	t_elem	*tmp2;

	tmp1 = topa;
	tmp2 = topa->bot;
	while (tmp1->lable != -1 && tmp2 != NULL)
	{
		tmp1 = tmp2;
		tmp2 = tmp1->bot;
	}
	return (tmp1);
}

t_elem	*lable(int argc, t_elem *topa)
{
	t_elem	*tmp1;
	t_elem	*tmp2;
	int		lable;

	tmp1 = topa;
	tmp2 = topa->bot;
	lable = 0;
	while (lable < argc)
	{
		while (tmp2 != NULL)
		{
			if (tmp1->value > tmp2->value && tmp2->lable == -1)
				tmp1 = tmp2;
			tmp2 = tmp2->bot;
		}
		tmp1->lable = lable;
		lable++;
		tmp1 = get_next_nlabled(topa);
		tmp2 = tmp1->bot;
	}
	return (topa);
}
