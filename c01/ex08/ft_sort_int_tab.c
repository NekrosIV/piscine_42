/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:52:48 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/01 15:17:41 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		f;

	j = 0;
	while (j <= size -1)
	{
		i = 0;
		while (i <= size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				f = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = f;
			}
			i++;
		}
		j++;
	}
}
