/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:42:34 by akarahan          #+#    #+#             */
/*   Updated: 2021/09/13 18:42:35 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	g_solution_sum;

int	check_diag(int board[10][10], int row, int col)
{
	int	i;
	int	j;

	i = row;
	j = col;
	while (i >= 0 && j >= 0)
	{
		if (board[i][j])
		{
			return (0);
		}
		i--;
		j--;
	}
	i = row;
	j = col;
	while (i < 10 && j >= 0)
	{
		if (board[i][j])
			return (0);
		i++;
		j--;
	}
	return (1);
}

int	validate(int board[10][10], int row, int col)
{
	int	j;

	j = 0;
	while (j <= col)
	{
		if (board[row][j])
			return (0);
		j++;
	}
	if (!check_diag(board, row, col))
		return (0);
	return (1);
}

void	print_solution(int board[10][10])
{
	int		i;
	int		j;
	char	c;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 10)
		{
			if (board[i][j])
			{
				c = i + '0';
				write(1, &c, 1);
			}
			i++;
		}
		j++;
	}
}

void	solve(int board[10][10], int col)
{
	int	i;

	i = 0;
	if (col >= 10)
	{
		print_solution(board);
		g_solution_sum++;
		write(1, "\n", 1);
		return ;
	}
	while (i < 10)
	{
		if (validate(board, i, col))
		{
			board[i][col] = 1;
			solve(board, col + 1);
			board[i][col] = 0;
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	solve(board, 0);
	return (g_solution_sum);
}
