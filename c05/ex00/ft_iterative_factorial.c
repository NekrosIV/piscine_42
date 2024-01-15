/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:01:27 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/10 11:14:54 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		r = r * nb;
		nb--;
	}
	return (r);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_iterative_factorial(-5);
	printf("i = %d",i);
}*/
