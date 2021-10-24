/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:31:28 by akarahan          #+#    #+#             */
/*   Updated: 2021/10/24 17:31:29 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_any(char **tab, int(*f)(char*))
{
	int	i;
	int	ret_val;

	i = 0;
	while (tab[i] != NULL)
	{
		ret_val = (*f)(tab[i]);
		if (ret_val != 0)
			return (1);
		i++;
	}
	return (0);
}
