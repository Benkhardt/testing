/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:16:26 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/15 12:57:05 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	if (argc < 3 || check_dup(argc, argv) || check_num(argc, argv) < 1)
	{
		ft_putstr_fd("Error\n", 1);
		return (-1);
	}	
	push_swap(argc, argv);
	return (0);
}
