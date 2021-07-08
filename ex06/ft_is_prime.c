/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:21:53 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/08 14:21:54 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <time.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

// int	main(void)
// {
// 	clock_t begin = clock();
// 	for (int i = 0; i < 100000; i++)
// 		if (ft_is_prime(i))
// 			printf("%d\n", i);
// 	printf("2147483647 = %d\n", ft_is_prime(2147483647));
// 	clock_t end = clock();
// 	printf("%lums\n", (end - begin));
// }
