/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:37:07 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/07 14:33:54 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int columns, char start, char midle, char end)
{
	int	i;

	i = 1;
	while (i <= columns)
	{
		if (i == 1)
			ft_putchar(start);
		else if (i == columns)
			ft_putchar(end);
		else
			ft_putchar(midle);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	i = 1;
	while (i <= y)
	{
		if (i == 1)
			ft_print(x, '/', '*', '\\');
		else if (i == y)
			ft_print(x, '\\', '*', '/');
		else
			ft_print(x, '*', ' ', '*');
		i++;
	}
}
