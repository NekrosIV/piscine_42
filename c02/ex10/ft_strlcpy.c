/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 08:50:55 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/03 15:12:15 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}
/*int main(void)
{
	char	src[] = "bonjour je suis la mort";
	char	dest[0];
	unsigned int	n;

	n = ft_strlcpy(dest,src,sizeof(dest));

	printf("src = %s\n",src);
	printf("dest = %s\n",dest);
	printf("n = %d",n);
}*/
