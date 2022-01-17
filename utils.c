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

static char	*conv_base(int argc)
{
	char		buffer[64];
	static char	rtn[64];
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (argc != 0)
	{
		buffer[i] = (argc & 1) + '0';
		argc = argc >> 1;
		printf("(%d)", argc);
		i++;
	}
	while (--i != -1)
	{
		rtn[j] = buffer[i];
		j++;
	}
	return (rtn);
}

int	get_max_shift(int argc)
{
	return (ft_strlen(conv_base(argc)) - 1);
}

int	check_bit(int shift, t_elem *stack)
{
	int check;

	check = shift * 2;
	while (stack != NULL)
	{
		if (!((stack->lable >> shift) & 1) && stack->lable >= check)
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
