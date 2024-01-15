/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:02:07 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/18 07:48:36 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	size;

	if (min >= max)
		return (0);
	i = 0;
	size = max - min;
	tab = malloc(size * sizeof (int));
	if (tab == NULL)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*#include <stdio.h>
int	main(void)
{
	int *range;
	range = ft_range(-1, 1);
	printf("-1, 0 : %d, %d", range[0], range[1]);
}*/
