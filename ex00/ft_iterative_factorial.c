/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:23:52 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/08 14:23:53 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		x *= i + 1;
		i++;
	}
	return (x);
}

// int	main(void)
// {
// 	printf("0:%d\n", ft_iterative_factorial(-10));
// 	printf("0:%d\n", ft_iterative_factorial(-1));
// 	printf("1:%d\n", ft_iterative_factorial(0));
// 	printf("1:%d\n", ft_iterative_factorial(1));
// 	printf("3628800:%d\n", ft_iterative_factorial(10));
// 	printf("6:%d\n", ft_iterative_factorial(3));
// }
