/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:22:48 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/17 08:37:55 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size_s;
	int		i;
	char	*cpy;

	size_s = ft_strlen(src);
	cpy = malloc((size_s + 1) * sizeof (char));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*my_struct;

	i = 0;
	my_struct = malloc((ac + 1) * sizeof(t_stock_str));
	if (my_struct == NULL)
		return (NULL);
	while (i < ac)
	{
		my_struct[i].str = av[i];
		my_struct[i].copy = ft_strdup(av[i]);
		my_struct[i].size = ft_strlen(av[i]);
		i++;
	}
	my_struct[i].str = 0;
	return (my_struct);
}
