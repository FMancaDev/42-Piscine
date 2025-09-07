/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:14:09 by fomanca           #+#    #+#             */
/*   Updated: 2025/08/27 12:18:31 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	counter;

	counter = '0';
	while (counter <= '9')
	{
		write (1, &counter, 1);
		counter++;
	}
}
