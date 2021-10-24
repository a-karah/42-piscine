/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:48:30 by akarahan          #+#    #+#             */
/*   Updated: 2021/10/24 17:48:32 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	ret_val;

	i = 0;
	while (i < length - 1)
	{
		ret_val = (*f)(tab[i], tab[i + 1]);
		if (ret_val > 0)
			return (0);
		i++;
	}
	return (1);
}
