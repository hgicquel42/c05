/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:23:19 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/08 14:23:20 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	x;

	i = 0;
	x = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (i < power - 1)
	{
		x *= nb;
		i++;
	}
	return (x);
}

// int	main(void)
// {
// 	printf("0:%d\n", ft_iterative_power(1, -10));
// 	printf("0:%d\n", ft_iterative_power(1, -1));
// 	printf("1:%d\n", ft_iterative_power(10, 0));
// 	printf("10:%d\n", ft_iterative_power(10, 1));
// 	printf("100:%d\n", ft_iterative_power(10, 2));
// 	printf("216:%d\n", ft_iterative_power(6, 3));
// }
