/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 10:05:39 by fomanca           #+#    #+#             */
/*   Updated: 2025/08/29 10:12:53 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main()
{
	int 	res;
	char 	tex[] = "abcdefghijklmnopqrstuvwxyz";

	res = ft_str_is_lowercase(tex);
	printf("Is the string alphabetic lowercase only: %d \n", res);
}*/
