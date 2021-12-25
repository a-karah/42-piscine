/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:57:06 by akarahan          #+#    #+#             */
/*   Updated: 2021/12/25 21:32:55 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>

char	*g_hex = "0123456789abcdef";

void	print_address(intptr_t nbr)
{
	char	tab[16];
	int		i;

	i = 0;
	while (nbr)
	{
		tab[15 - i] = g_hex[nbr % 16];
		nbr /= 16;
		++i;
	}
	while (i < 16)
	{
		tab[15 - i] = '0';
		++i;
	}
	write(1, tab, i);
	write(1, ": ", 2);
}

void	print_hex(unsigned char *p, unsigned int n)
{
	int	j;

	j = 0;
	while (j < n)
	{
		write(1, &g_hex[(*(p + j) / 16) % 16], 1);
		write(1, &g_hex[*(p + j) % 16], 1);
		if (j % 2)
			write(1, " ", 1);
		++j;
	}
	while (j < 16)
	{
		write(1, " ", 1);
		write(1, " ", 1);
		if (j % 2)
			write(1, " ", 1);
		++j;
	}
}

void	print_text(unsigned char *p, unsigned int n)
{
	int	j;

	j = 0;
	while (j < n)
	{
		if (31 < *(p + j) && *(p + j) < 128)
			write(1, (p + j), 1);
		else
			write(1, ".", 1);
		++j;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	int				n;
	int				i;

	i = 0;
	n = 16;
	ptr = (unsigned char *)addr;
	while (i < size)
	{
		if (i + 16 > size)
			n = size - i;
		print_address((intptr_t)(ptr + i));
		print_hex(ptr + i, n);
		print_text(ptr + i, n);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
