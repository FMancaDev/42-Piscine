/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buzzfizz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:26:59 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/03 17:33:50 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void 	ft_putchar(char c)
{
	write (1, &c, 1);
}

void 	ft_putnbr(int n)
{
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}



int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < 100)
	{
		if (i % 4 == 0 && i % 7 == 0)
		{
			write (1, "buzzfizz", 8);
		}
		else if (i % 4 == 0)
		{
			write (1, "buzz", 4);
		}
		else if (i % 7 == 0)
		{
			write (1, "fizz", 4);
		}
		else
			ft_putnbr(i);
		write (1, "\n", 1);
		i++;
	}
}
