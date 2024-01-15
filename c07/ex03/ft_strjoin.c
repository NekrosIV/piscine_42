/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:34:19 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/19 10:42:49 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

char	*join(int size, char **strs, char *sep, char *tab)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < size -1)
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		total;

	total = 0;
	i = 0;
	if (size < 1)
	{
		tab = malloc(sizeof (char) * 1);
		tab[0] = 0;
		return (tab);
	}
	while (i < size)
	{
		total += len(strs[i]);
		i++;
	}
	tab = malloc (sizeof(char) * (total + ((size - 1) * len(sep)) + 1));
	if (!tab)
		return (NULL);
	tab[0] = 0;
	tab = join(size, strs, sep, tab);
	return (tab);
}
/*#include <stdio.h>
int	main(int argc, char **argv)
{
	char *res;

	res = ft_strjoin(argc, argv, "___");
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n", res);
	free(res);
}*/
