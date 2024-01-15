/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:07:38 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/10 12:20:28 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		r = r * nb;
		i++;
	}
	return (r);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_iterative_power(0, 0);
	printf("i = %d",i);
}*/
