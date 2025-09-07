/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 10:14:09 by fomanca           #+#    #+#             */
/*   Updated: 2025/08/29 13:16:39 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	int 	rest;
	char 	up[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	rest = ft_str_is_uppercase(up);
	printf("Is the Output Uppercase: %d \n", rest);
}*/
