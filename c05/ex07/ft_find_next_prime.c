/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:22:21 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/11 10:52:15 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i > 0 && i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = nb;
	while (!ft_is_prime(i))
	{
		if (i % 2 == 0)
			i++;
		else
			i = i + 2;
	}
	return (i);
}
/*#include <stdio.h>
int	main(void)
{

	printf("i = %d\n", ft_find_next_prime(841));
	printf("i = %d\n", ft_find_next_prime(961));
	printf("i = %d\n", ft_find_next_prime(-2147483648));
	printf("i = %d\n", ft_find_next_prime(2147483647));
	printf("i = %d\n", ft_find_next_prime(9000));
	printf("i = %d\n", ft_find_next_prime(-90));
}*/
