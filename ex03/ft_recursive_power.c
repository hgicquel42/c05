/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:23:03 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/08 14:23:04 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

// int	main(void)
// {
// 	printf("0:%d\n", ft_recursive_power(1, -10));
// 	printf("0:%d\n", ft_recursive_power(1, -1));
// 	printf("1:%d\n", ft_recursive_power(10, 0));
// 	printf("10:%d\n", ft_recursive_power(10, 1));
// 	printf("100:%d\n", ft_recursive_power(10, 2));
// 	printf("216:%d\n", ft_recursive_power(6, 3));
// }
