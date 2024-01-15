/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:50:02 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/10 17:25:52 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i > 0)
	{
		if (i * i == nb)
			return (i);
		if (i * i > nb)
			break ;
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d",ft_sqrt(0));
	printf("%d",ft_sqrt(16));
	printf("%d",ft_sqrt(20));
	printf("%d",ft_sqrt(2147483647));
	printf("%d",ft_sqrt(-2147483648));
	printf("%d",ft_sqrt(580000));
	printf("%d",ft_sqrt(99075));
	printf("%d",ft_sqrt(81));
}*/
