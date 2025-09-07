/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 10:37:01 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/01 15:06:18 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	swap;

	i = 0;
	temp = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[temp];
		tab[temp] = swap;
		i++;
		temp--;
	}
}

#include <stdio.h>

int main(void)
{
	int tab[10] = {10, 20, 30, 40};
	int size = 10;
	
	ft_rev_int_tab(tab, size);

	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d \n", tab[0], tab[1], tab[2],
	tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
	return(0);
}
