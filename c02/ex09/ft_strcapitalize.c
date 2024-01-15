/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 07:26:22 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/03 08:09:51 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		flage;

	ft_strlowcase(str);
	i = 0;
	flage = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (flage == 1))
		{
			str[i] -= 32;
			flage = 0;
		}
		else if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			flage = 0;
		}
		else
		{
			flage = 1;
		}
		i++;
	}
	return (str);
}
