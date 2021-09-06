/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:28:14 by akarahan          #+#    #+#             */
/*   Updated: 2021/09/06 14:29:25 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	bubble_sort(int *tab, int size)
{
	int	i;

	if (size == 1)
		return ;
	i = 0;
	while (i++ < size - 1)
	{
		if (tab[i - 1] > tab[i])
		{
			ft_swap(&tab[i - 1], &tab[i]);
		}
	}
	bubble_sort(tab, size - 1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	bubble_sort(tab, size);
}
