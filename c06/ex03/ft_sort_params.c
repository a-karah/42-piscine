/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:49:11 by akarahan          #+#    #+#             */
/*   Updated: 2021/09/15 12:19:57 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	bubble_sort(char **tab, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	if (size == 1)
		return ;
	while (i < size - 1)
	{
		if (i > 0 && ft_strcmp(tab[i - 1], tab[i]) > 0)
		{
			temp = tab[i - 1];
			tab[i - 1] = tab[i];
			tab[i] = temp;
		}
		i++;
	}
	bubble_sort(tab, size - 1);
}

int	main(int argc, char *argv[])
{
	int		j;

	j = 1;
	if (argc > 1)
	{
		bubble_sort(argv + 1, argc);
		while (j < argc)
		{
			ft_putstr(argv[j]);
			write(1, "\n", 1);
			j++;
		}
	}
	return (0);
}
