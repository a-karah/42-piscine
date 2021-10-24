/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:30:04 by akarahan          #+#    #+#             */
/*   Updated: 2021/10/24 18:30:05 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

int	main(int argc, char *argv[])
{
	int		nb1;
	char	op;
	int		nb2;
	int		res;

	if (argc == 4)
	{
		nb1 = ft_atoi(argv[1]);
		op = *argv[2];
		nb2 = ft_atoi(argv[3]);
		if (op == '/' && nb2 == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
		else if (op == '%' && nb2 == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
		res = ft_doop(nb1, op, nb2);
		ft_putnbr(res);
		write(1, "\n", 1);
	}
	return (0);
}
