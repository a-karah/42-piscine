/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:12:47 by akarahan          #+#    #+#             */
/*   Updated: 2021/09/09 12:39:14 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(char c)
{
	char	*data;

	data = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(data[c / 16]);
	ft_putchar(data[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] == 127)
			ft_puthex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
