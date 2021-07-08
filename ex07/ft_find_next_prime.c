/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:21:29 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/08 14:21:31 by hgicquel         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (1)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	clock_t begin = clock();
// 	for (int i = 0; i < 10000; i++)
// 		printf("%d\n", ft_find_next_prime(i));
// 	clock_t end = clock();
// 	printf("%lums\n", (end - begin));
// }
