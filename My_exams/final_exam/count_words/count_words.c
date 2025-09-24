/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 23:12:54 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/24 23:19:40 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int count_words(char *str)
{
	int 	count;
	int 	in_word;

	count = 0;
	in_word = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			in_word = 0;
		}
		else
		{
			if (in_word == 0)
			{
				count++;
			}
			in_word = 1;
		}
		str++;
	}
	return (count);
}

/*#include <stdio.h>

int 	main()
{
	char str[] = " DEF rgag 342 rgevv ravr  !!!!""⅛))) reg re g r rtrht   ";

	printf("Original: %s\n", str);
	printf("counted: %d\n", count_words(str));
}*/
