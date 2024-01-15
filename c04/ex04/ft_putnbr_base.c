/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:09:23 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/10 10:40:35 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr_base(int nbr, char *base);
int		ft_is_base_ok(char *base);
int		ft_size_base(char *base);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;

	if (ft_is_base_ok(base) == 0)
		return ;
	size_base = ft_size_base(base);
	if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / size_base, base);
		ft_putnbr_base(-(nbr % size_base), base);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base(-nbr, base);
	}
	else if (nbr >= size_base)
	{
		ft_putnbr_base(nbr / size_base, base);
		ft_putnbr_base(nbr % size_base, base);
	}
	else
	{
		ft_putchar(base[nbr]);
	}
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
/*int main(void)
{

	char tab[] = "0123456789ABCDEF";
	ft_putnbr_base(255, tab);
}*/
