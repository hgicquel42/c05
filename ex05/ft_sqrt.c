/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:22:18 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/08 14:22:19 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <time.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (nb);
	i = 2;
	while (i < (nb / i) && i <= 46341)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

// int	main(void)
// {
// 	clock_t begin = clock();
// 	for (int i = 0; i < 100000; i++)
// 		if (ft_sqrt(i))
// 			printf("%d\n", i);
// 	printf("2147483647 = %d\n", ft_sqrt(2147483647));
// 	clock_t end = clock();
// 	printf("%lums\n", (end - begin));
// }
