/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 09:37:43 by fomanca           #+#    #+#             */
/*   Updated: 2025/08/29 09:46:50 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
	int 	res;
	char	num[] = "0123456789";

	res = ft_str_is_numeric(num);
	printf ("Is the Output Numeric: %d \n", res);
}*/
