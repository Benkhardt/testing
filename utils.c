/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:13:10 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/15 21:46:43 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*conv_base(int argc, int base, char *nbrs)
{
	
}

int	get_max_shift(int argc)
{
	return (ft_strlen(conv_base(argc, 2, "01")));
}

int	check_bit(int shift, t_elem *stack)
{
	while (stack != NULL)
	{
		if (!((stack->lable >> shift) & 1))
			return (1);
		stack = stack->bot;
	}
	return (0);
}

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
