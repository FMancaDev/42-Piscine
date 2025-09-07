/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 20:38:40 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/06 20:42:49 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	main(int argc, char *argv[])
{
	int 	i;

	i = 0;
	if (argc == 4)
	{
		if (!argv[2][1] && !argv[3][1])
		{
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][0])
				{
					write (1, &argv[3][0], 1);
				}
				else
					write (1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
