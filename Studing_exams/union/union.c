/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 20:54:49 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/06 21:05:25 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int 	vai_primeiro(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
		{
			return (1);
		}
		str++;
	}
	return (0);
}

int 	vai_depois(char c, char *str, int pos)
{
	int	i;

	i = 0;
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

void	ft_union(char *s1, char *s2)
{
	int 	i;

	i = 0;
	while (s1[i])
	{
		if (!vai_depois(s1[i], s1, i))
		{
			write (1, &s1[i], 1);
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!vai_primeiro(s2[i], s1))
		{
			if (!vai_depois(s2[i], s2, i))
			{
				write (1, &s2[i], 1);
			}
		}
		i++;
	}
}

int 	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	write (1, "\n", 1);
	return (0);
}
