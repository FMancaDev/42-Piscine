/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:06:36 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/06 15:09:32 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_words(char *str)
{
	int 	count;
	int	 	in_words;
	
	count = 0;
	in_words = 0;
	
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\0')
		{
			in_words = 0;
		}
		else
		{
			if (in_words == 0)
			{
				count++;
			}
			in_words = 1;
		}
		str++;
	}
	return (count);
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int 	main()
{
	char str[] = "     t  h  is i  s my st   ri  ng  yy ";
	printf("the amount of words is: %d\n", count_words(str));
	printf("string: %s\n", str);
}
