/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 19:20:48 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/06 19:36:11 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	printed_before(char c, char *str, int pos)
{
	int 	i;

	i  = 0;
	while (i < pos)
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void 	ft_inter(char *s1, char *s2)
{
	int 	i;
	int 	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				if (!printed_before(s1[i], s1, i))	
				{
					write (1, &s1[i], 1);
					break;
				}			
			}
			j++;
		}
		i++;
	}
	i++;
}










int		main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
	}
	write (1, "\n", 1);
	return (0);
}
