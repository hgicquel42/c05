/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:22:39 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/08 14:22:41 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int	main(void)
// {
// 	printf("0:%d\n", ft_fibonacci(0));
// 	printf("1:%d\n", ft_fibonacci(1));
// 	printf("1:%d\n", ft_fibonacci(2));
// 	printf("2:%d\n", ft_fibonacci(3));
// 	printf("55:%d\n", ft_fibonacci(10));
// }
