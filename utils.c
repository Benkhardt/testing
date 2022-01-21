/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:13:10 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/21 16:06:43 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*conv_base(int argc, char *rtn)
{
	char	buffer[64];
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (rtn != NULL)
		free(rtn);
	rtn = malloc(sizeof(char) * 17);
	while (argc != 0)
	{
		buffer[i] = (argc & 1) + '0';
		argc = argc >> 1;
		i++;
	}
	while (--i != -1)
	{
		rtn[j] = buffer[i];
		j++;
	}
	rtn[j] = '\0';
	return (rtn);
}

int	get_max_shift(int argc)
{
	char	*tmp;
	int		rtn;

	tmp = conv_base(argc, NULL);
	rtn = ft_strlen(tmp) - 1;
	free(tmp);
	return (rtn);
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
	char	*rtn;

	tmp = top;
	rtn = NULL;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->value, 1);
		ft_putchar_fd(' ', 1);
		ft_putnbr_fd(tmp->lable, 1);
		ft_putchar_fd(' ', 1);
		ft_putstr_fd(conv_base(tmp->lable, rtn), 1);
		ft_putchar_fd('\n', 1);
		tmp = tmp->bot;
		free(rtn);
	}
}
