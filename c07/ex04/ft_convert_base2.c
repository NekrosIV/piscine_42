/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 07:39:40 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/14 10:57:57 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_base_ok(char *base);
int		ft_char_in_base(char c, char *base);
int		ft_strlen(char *str);
int		ft_size_nb(int nb, char *base);

int	ft_size_nb(int nb, char *base)
{
	int	i;
	int	size_base;

	i = 1;
	size_base = ft_strlen(base);
	if (nb < 0)
	{
		while (nb <= -size_base)
		{
			nb = nb / size_base;
			i++;
		}
	}
	else
	{
		while (nb >= size_base)
		{
			nb = nb / size_base;
			i++;
		}
	}
	return (i);
}

int	ft_is_base_ok(char *base)
{
	int	size_base;
	int	i;
	int	j;

	size_base = ft_strlen(base);
	if (size_base <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[i] != base[j] && base[j] != '\0')
			j++;
		if (base[i] == '-' || base[i] == '+' || base[i] == base[j]
			|| (base[i] >= '\t' && base[i] <= '\r') || base[i] == ' ')
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_char_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}
