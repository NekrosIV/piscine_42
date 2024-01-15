/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 10:44:07 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/10 10:51:15 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_size_base(char *base);
int	ft_atoi_base(char *str, char *base);
int	ft_is_base_ok(char *base);
int	ft_i_base(char c, char *base);
int	ft_is_in_base(char c, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	s;
	int	nb;

	i = 0;
	s = 1;
	nb = 0;
	if (ft_is_base_ok(base) == 0)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i++] == 45)
			s *= -1;
	}
	while (ft_is_in_base(str[i], base))
	{
		nb = nb * ft_size_base(base) + ft_i_base(str[i], base);
		i++;
	}
	return (nb * s);
}

int	ft_is_base_ok(char *base)
{
	int	i;
	int	j;
	int	s;

	s = ft_size_base(base);
	i = 0;
	if (s <= 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[i] != base[j] && base[j] != '\0')
			j++;
		if (base[i] == '-' || base[i] == '+'
			|| base[i] == base[j])
			return (0);
		i++;
	}
	return (1);
}

int	ft_size_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_is_in_base(char c, char *base)
{
	int	i;
	int	s_base;

	i = 0;
	s_base = ft_size_base(base);
	while (i < s_base)
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_i_base(char c, char *base)
{
	int	i;
	int	s_base;

	i = 0;
	s_base = ft_size_base(base);
	while (i < s_base)
	{
		if (c == base[i])
			break ;
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	int i;
	i = ft_atoi_base("FF","0123456789ABCDEF");
	printf("i = %d",i);
}*/
