/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 19:05:20 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/06 19:19:22 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *swap_cases(char *str)
{
	int 	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

#include <unistd.h>
#include <stdio.h>

int 	main()
{
	char str[] = "abc ABC";
	printf("String Original: %s\n\n", str);
	printf("Swapped string: %s\n", swap_cases(str));
	return (0);
}
