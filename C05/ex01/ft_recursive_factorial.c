/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:27:42 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/02 10:03:00 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>

int	main()
{
	printf("recursive de -1: %d \n", ft_recursive_factorial(-1));
	printf("recursive de 0: %d \n", ft_recursive_factorial(0));
	printf("recursive de 3: %d \n", ft_recursive_factorial(3));
	printf("recursive de 5: %d \n", ft_recursive_factorial(5));
	printf("recursive de 1: %d \n", ft_recursive_factorial(1));
}*/
