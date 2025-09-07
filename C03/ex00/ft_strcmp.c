/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 20:56:19 by fomanca           #+#    #+#             */
/*   Updated: 2025/08/29 22:06:02 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int 	main()
{
	char s1[] = "hello world";
	char s2[] = "hello world";

	printf("%d \n", ft_strcmp(s1, s2));
}*/
