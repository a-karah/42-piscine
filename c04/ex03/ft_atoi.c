/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:20:42 by akarahan          #+#    #+#             */
/*   Updated: 2021/09/11 18:30:02 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	product;
	int	sign;

	i = 0;
	product = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sign = -sign;
		if (str[i] >= '0' && str[i] <= '9')
			product = product * 10 + (str[i] - '0');
		if (('A' <= str[i] && str[i] <= 'Z')
			|| ('a' <= str[i] && str[i] <= 'z'))
			break ;
		i++;
	}
	return (sign * product);
}
