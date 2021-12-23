/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:57:06 by akarahan          #+#    #+#             */
/*   Updated: 2021/12/23 21:53:18 by akarahan         ###   ########.fr       */
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

void	print_hex(unsigned char *p)
{
	int	j;

	j = 0;
	while (j < 16)
	{
		write(1, &g_hex[(*(p + j) / 16) % 16], 1);
		write(1, &g_hex[*(p + j) % 16], 1);
		if (j % 2 == 1)
			write(1, " ", 1);
		if (*(p + j) == 0)
		{
			write(1, "    ", 4);
			break ;
		}
		++j;
	}
}

void	print_text(unsigned char *p)
{
	int	j;

	j = 0;
	while (j < 16)
	{
		if (31 < *(p + j) && *(p + j) < 128)
			write(1, (p + j), 1);
		else
			write(1, ".", 1);
		if (*(p + j) == 0)
			break ;
		++j;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	int				i;

	i = 0;
	ptr = (unsigned char *)addr;
	while (i < size)
	{
		print_address((intptr_t)(ptr + i));
		print_hex(ptr + i);
		print_text(ptr + i);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
