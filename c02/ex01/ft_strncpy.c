/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 08:57:12 by kasingh           #+#    #+#             */
/*   Updated: 2023/07/02 14:05:06 by kasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int main(void)
{
	char	src[] = "bonjour je suis la mort";
	char	dest[25];
	unsigned int	n = 5;

	ft_strncpy(dest,src,n);

	printf("src = %s\n",src);
	printf("dest = %s",dest);
	printf("n = %d",n);
}*/
