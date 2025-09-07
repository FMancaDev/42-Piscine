/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 09:10:53 by fomanca           #+#    #+#             */
/*   Updated: 2025/08/28 10:03:15 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*#include <stdio.h>

int	main()
{
	int 	a = 15;
	int 	b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("%d""\n""%d", a, b);
	return (0);
}*/
