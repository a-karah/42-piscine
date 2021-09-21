/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:02:01 by akarahan          #+#    #+#             */
/*   Updated: 2021/09/19 08:04:46 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = ft_strlen(src);
	dest = (char *) malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			len;
	t_stock_str	*tab;

	i = 0;
	tab = (t_stock_str *) malloc(sizeof(*tab) * (ac + 1));
	if (tab == NULL)
		return (0);
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		tab[i].size = len;
		tab[i].str = (char *) malloc(sizeof(char) * len + 1);
		if (tab[i].str == NULL)
			return (0);
		tab[i].str = av[i];
		tab[i].copy = (char *) malloc(sizeof(char) * len + 1);
		if (tab[i].copy == NULL)
			return (0);
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
