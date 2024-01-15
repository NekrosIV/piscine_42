/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:35:19 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/04 08:36:18 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*c1;
	unsigned char	*c2;
	int				i;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	while (c1[i] || c2[i])
	{
		if (c1[i] != c2[i])
		{
			return (c1[i] - c2[i]);
		}
		i++;
	}
	return (c1[i] - c2[i]);
}
/*int	main(void)
{
	char p1[] = "r";
	char p2[] = "R";
	int		n;

	n = ft_strcmp(p1,p2);
	printf("%d",n);
}*/
