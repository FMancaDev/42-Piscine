/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:34:44 by fomanca           #+#    #+#             */
/*   Updated: 2025/08/29 13:55:15 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>

int main()
{
	char str[] = "abcdef";
	
	printf("Before: %s \n", str);

	ft_strupcase(str);
	printf("after: %s \n", str);
}*/
