/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:29:39 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/08 20:12:04 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	ft_isbase(char *base, char c)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (1);
	return (0);
}

int	ft_strlen(char *s)
{
	char	*p;

	p = s;
	while (*p)
		++p;
	return (p - s);
}

int	ft_atoi_base(char *str, char *base)
{
	long	n;
	int		i;
	int		b;
	int		sign;
	int		j;

	i = 0;
	n = 0;
	sign = 1;
	b = ft_strlen(base);
	while (ft_isspace(str[i]))
		++i;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		++i;
	while (ft_isbase(base, str[i]))
	{
		j = 0;
		while (base[j] != str[i])
			++j;
		n = n * b + j;
		++i;
	}
	return (sign * n);
}
