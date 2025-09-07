/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 13:26:09 by fomanca           #+#    #+#             */
/*   Updated: 2025/08/28 15:40:07 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
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

/*#include <stdio.h> 

int	main()
{
	char 	dest[] = "#######";
	char	src[] = "Source";
	int 	n = 4;

	printf("dest before: %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("dest before: %s\n", dest);

}*/
