/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 10:03:57 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/02 11:08:59 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*#include <stdio.h>
int main(void)
{
    printf("2^3 = %d\n", ft_iterative_power(2, 3));
    printf("5^0 = %d\n", ft_iterative_power(5, 0));
    printf("3^-1 = %d\n", ft_iterative_power(3, -1));
    return 0;
}*/
