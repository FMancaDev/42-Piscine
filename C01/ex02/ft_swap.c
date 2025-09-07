/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 23:55:58 by fomanca           #+#    #+#             */
/*   Updated: 2025/08/28 12:06:49 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*#include <stdio.h>

int	main()
{
	int 	num1 = 15;
	int 	num2 = 30;

	printf("before swapping: num1 is %d, num2 is %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("after swapping: num1 is %d, num2 is %d\n", num1, num2);
}*/
