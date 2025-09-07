/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:39:42 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/01 12:42:00 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	count;
	int	convert;

	i = 0;
	sign = 1;
	count = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	if (count % 2 == 1)
		sign = -1;
	convert = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		convert = convert * 10 + str[i] - '0';
		i++;
	}
	return (sign * convert);
}

/*#include <stdio.h>
int     main()
{
        char *n = " ---+--+1234ab567";
        printf("My Atoi: %d \n", ft_atoi(n));

}*/
