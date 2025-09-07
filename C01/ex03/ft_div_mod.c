/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 23:59:02 by fomanca           #+#    #+#             */
/*   Updated: 2025/08/28 12:13:10 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int 	main()
{
	int 	a;
	int 	b;
	int 	div;
	int 	mod;

	a = 15;
	b = 10;

	ft_div_mod(a, b, &div, &mod);
	printf("%d\n%d", div, mod);
	return (0);
}*/
