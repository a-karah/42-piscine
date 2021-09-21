/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */ /*                                                +#+#+#+#+#+   +#+           */ /*   Created: 2021/09/16 12:53:47 by akarahan          #+#    #+#             */
/*   Updated: 2021/09/16 13:47:47 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	else if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while ((par + i) -> size)
	{
		ft_putstr((par + i) -> str);
		write(1, "\n", 1);
		ft_putnbr((par + i) -> size);
		write(1, "\n", 1);
		ft_putstr((par + i) -> copy);
		write(1, "\n", 1);
		i++;
	}
}
