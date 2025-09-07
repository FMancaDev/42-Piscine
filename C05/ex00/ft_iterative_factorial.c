/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:28:21 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/01 14:20:19 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*#include <stdio.h>

int	main()
{
	printf("factorial de -1: %d\n", ft_iterative_factorial(-1));
	printf("factorial de 0: %d\n", ft_iterative_factorial(0));
	printf("factorial de 1: %d\n", ft_iterative_factorial(1));
	printf("factorial de 5: %d\n", ft_iterative_factorial(5));
}*/
