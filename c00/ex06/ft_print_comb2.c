/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:06:26 by akarahan          #+#    #+#             */
/*   Updated: 2021/09/05 17:06:20 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char i, char j, char k, char l)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &l, 1);
}

void	print_control(char i, char j, char k, char l)
{
	if (i == k && j == l)
		return ;
	else if (j > '7' && i == '9')
	{
		print_num(i, j, k, l);
	}
	else
	{
		print_num(i, j, k, l);
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	k;
	char	l;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = i;
			while (k <= '9')
			{
				l = j - 1;
				while (++l <= '9')
					print_control(i, j, k, l);
				k++;
			}
			j++;
		}
		i++;
	}
}
