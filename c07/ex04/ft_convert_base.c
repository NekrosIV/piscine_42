/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:24:09 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/15 14:50:39 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_base_ok(char *base);
int		ft_char_in_base(char c, char *base);
int		ft_atoi_base(char *nbr, char *base);
int		ft_strlen(char *str);
int		ft_size_nb(int nb, char *base);
char	*ft_put_in_tab(char *tab, char *base, int nb, int size);
char	*nbr_base(int nb, char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*tab;

	if (!ft_is_base_ok(base_from) || !ft_is_base_ok(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	tab = nbr_base(nb, base_to);
	return (tab);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int	i;
	int	s;
	int	nb;

	i = 0;
	s = 1;
	nb = 0;
	while ((nbr[i] >= '\t' && nbr[i] <= '\r') || nbr[i] == ' ')
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			s = s * -1;
		i++;
	}
	while (ft_char_in_base(nbr[i], base) != -1)
	{
		nb = nb * ft_strlen(base) + ft_char_in_base(nbr[i], base);
		i++;
	}
	return (nb * s);
}

char	*nbr_base(int nb, char *base)
{
	char	*tab;
	int		size_nb;

	size_nb = ft_size_nb(nb, base);
	tab = malloc(size_nb * sizeof (char) + 2);
	if (tab == NULL)
		return (NULL);
	ft_put_in_tab(tab, base, nb, size_nb);
	return (tab);
}

char	*ft_rev_tab(char *tab, int size)
{
	int		i;
	char	temp;

	i = 0;
	while (i < size)
	{
		temp = tab[size];
		tab[size] = tab[i];
		tab[i] = temp;
		size--;
		i++;
	}
	return (tab);
}

char	*ft_put_in_tab(char *tab, char *base, int nb, int size)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (nb < 0)
	{
		tab[size] = '-';
		nb = nb * -1;
		flag++;
	}
	while (i < size)
	{	
		tab[i++] = base[nb % ft_strlen(base)];
		nb = nb / ft_strlen(base);
	}
	tab[i + flag] = '\0';
	ft_rev_tab(tab, i - 1 + flag);
	return (tab);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%s", ft_convert_base("--FF", "0123456789ABCDEF", "0123456789"));
}*/
