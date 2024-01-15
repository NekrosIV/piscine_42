/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 09:09:35 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/01 13:50:38 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		t;

	size--;
	i = 0;
	while (i < size)
	{
		t = tab[i];
		tab[i] = tab[size];
		tab[size] = t;
		i++;
		size--;
	}
}
