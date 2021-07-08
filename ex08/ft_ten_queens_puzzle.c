/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:20:39 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/08 14:20:41 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

void	ft_print(int board[10])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = '0' + board[i];
		write(1, &c, 1);
		i++;
	}
	write (1, "\n", 1);
}

int	ft_is_safe(int board[10], int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (board[i] == y)
			return (0);
		if (i + board[i] == x + y)
			return (0);
		if (i - board[i] == x - y)
			return (0);
		i++;
	}
	return (1);
}

int	ft_solve(int board[10], int x)
{
	int	y;
	int	s;

	if (x == 10)
	{
		ft_print(board);
		return (1);
	}	
	y = 0;
	s = 0;
	while (y < 10)
	{
		if (ft_is_safe(board, x, y))
		{
			board[x] = y;
			s += ft_solve(board, x + 1);
		}
		y++;
	}
	return (s);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];

	return (ft_solve(board, 0));
}

// int	main(void)
// {
// 	printf("%d\n", ft_ten_queens_puzzle());
// }
