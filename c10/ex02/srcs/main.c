/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:40:56 by akarahan          #+#    #+#             */
/*   Updated: 2021/10/11 20:40:57 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	print_header(char *fname)
{
	ft_putstr(STDOUT, "==> ");
	ft_putstr(STDOUT, fname);
	ft_putstr(STDOUT, " <==");
	ft_putchar(STDOUT, '\n');
}

int	main(int argc, char *argv[])
{
	int	i;
	int	offset;

	if (argc == 1 || (argv[1][0] == '-' && argv[1][1] == '\0'))
		read_stdin();
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			if (!ft_strcmp(argv[i], "-c"))
			{
				offset = ft_atoi(argv[++i]);
				i++;
			}
			if (argc > 4)
				print_header(argv[i]);
			if (offset >= 0)
				read_from_beginning(argv[i], offset - 1);
			else
				read_from_end(argv[i], offset * (-1));
			if (i < argc - 1)
				ft_putchar(STDOUT, '\n');
			i++;
		}
	}
	return (0);
}
