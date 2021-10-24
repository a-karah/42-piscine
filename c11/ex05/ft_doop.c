/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:29:45 by akarahan          #+#    #+#             */
/*   Updated: 2021/10/24 18:30:00 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

int	ft_doop(int nb1, char op, int nb2)
{
	if (op == '+')
		return (nb1 + nb2);
	else if (op == '-')
		return (nb1 - nb2);
	else if (op == '%')
		return (nb1 % nb2);
	else if (op == '/')
		return (nb1 / nb2);
	else
		return (0);
}
