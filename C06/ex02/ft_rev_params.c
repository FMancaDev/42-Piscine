/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:13:01 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/03 11:22:12 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	end;

	end = argc - 1;
	while (end > 0)
	{
		i = 0;
		while (argv[end][i])
		{
			write (1, &argv[end][i], 1);
			i++;
		}
		write (1, "\n", 1);
		end--;
	}
	return (0);
}
