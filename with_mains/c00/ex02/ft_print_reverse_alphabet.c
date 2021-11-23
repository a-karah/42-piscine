/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 12:26:15 by akarahan          #+#    #+#             */
/*   Updated: 2021/09/06 11:40:00 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	end;

	end = 'z';
	while (end >= 'a')
	{
		write(1, &end, 1);
		end--;
	}
}
