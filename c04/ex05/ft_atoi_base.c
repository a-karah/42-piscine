/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:29:39 by akarahan          #+#    #+#             */
/*   Updated: 2021/09/11 18:30:15 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_cmp_char(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	product;
	int	sign;
	int	base_len;

	i = 0;
	product = 0;
	sign = 1;
	base_len = ft_strlen(base);
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sign = -sign;
		if (str[i] >= base[0] && str[i] <= base[base_len - 1])
			product = product * base_len + ft_cmp_char(base, str[i]);
		if (('A' <= str[i] && str[i] <= 'Z')
			|| ('a' <= str[i] && str[i] <= 'z'))
			break ;
		i++;
	}
	return (sign * product);
}
