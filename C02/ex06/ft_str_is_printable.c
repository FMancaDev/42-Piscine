/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:17:27 by fomanca           #+#    #+#             */
/*   Updated: 2025/08/29 13:33:31 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int 	main()
{
	int 	result;
	char	 pr[] = " !@#$%^&*()_+";

	result = ft_str_is_printable(pr);
	printf("Printable caracters: %d \n", result);
}*/
