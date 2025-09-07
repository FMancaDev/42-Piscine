/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 21:08:25 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/06 21:17:45 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_strlen(char *str)
{
	int		i;

	i = 0;	
	while (str[i])
	{
		i++;
	}
	return (i);
}



int 	main(int argc, char *argv[])
{
	int 	i;
	int 	j;

	j = 0;
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] && argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				i++;
			}
			j++;
		}
		if (i == ft_strlen(argv[1]))
		{
			i = 0;
			while (argv[1][i])
			{
				write (1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
