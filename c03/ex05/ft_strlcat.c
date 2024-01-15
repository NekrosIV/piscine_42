/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:40:29 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/04 13:41:39 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_d;
	unsigned int	size_s;
	unsigned int	i;

	size_d = 0;
	size_s = 0;
	i = 0;
	while (dest[size_d] && size_d < size)
		size_d++;
	while (src[size_s])
		size_s++;
	if (size <= size_d)
		return (size + size_s);
	while (src[i] && size_d + i < size - 1)
	{
		dest[size_d + i] = src[i];
		i++;
	}
	dest[size_d + i] = '\0';
	return (size_d + size_s);
}
/*int	main()
{
	char tab1[20] = "bonjour ";
	char tab2[] = "salut";
	unsigned int	i;

	i = ft_strlcat(tab1,tab2, 0);
	printf("src = %s \ndest = %s \nsize = %d",tab2,tab1,i);
}*/
