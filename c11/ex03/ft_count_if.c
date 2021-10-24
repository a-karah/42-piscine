/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:49:11 by akarahan          #+#    #+#             */
/*   Updated: 2021/10/24 19:32:16 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	count;
	int	ret_val;

	i = 0;
	count = 0;
	while (i < length)
	{
		ret_val = (*f)(tab[i]);
		if (ret_val != 0)
			count++;
		i++;
	}
	return (count);
}
