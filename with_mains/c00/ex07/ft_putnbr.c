/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 11:32:07 by akarahan          #+#    #+#             */
/*   Updated: 2021/09/05 12:23:26 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	remainder;

	if (nb == -2147483648)
	{
		ft_putnbr(-21474);
		ft_putnbr(83648);
		return ;
	}
	if (nb < 0)
	{
		nb = -1 * nb;
		write(1, "-", 1);
	}
	if (nb < 10)
	{
		remainder = nb % 10 + '0';
		write(1, &remainder, 1);
		return ;
	}
	remainder = nb % 10 + '0';
	nb = nb / 10;
	ft_putnbr(nb);
	write(1, &remainder, 1);
}
