/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:14:02 by akarahan          #+#    #+#             */
/*   Updated: 2021/09/13 14:14:10 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	product;

	i = 1;
	product = 1;
	if (nb < 0)
		return (0);
	while (i < nb + 1)
	{
		product *= i;
		i++;
	}
	return (product);
}
