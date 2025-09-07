/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:20:01 by fomanca           #+#    #+#             */
/*   Updated: 2025/08/30 18:25:56 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (dest[d])
	{
		d++;
	}
	while (s < nb && src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main()
{
	char dest[30] = "destination";
	char src[30] = "source";

	unsigned int 	n= 3;

	ft_strncat(dest, src, n);
	printf("%s \n", dest);
}*/
