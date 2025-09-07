/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 09:10:22 by fomanca           #+#    #+#             */
/*   Updated: 2025/08/31 21:09:54 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int 	main()
{
	int 	res;
	char 	tx[] = "aghghj5";
	
	res = ft_str_is_alpha(tx);

	printf("Is the Output alphabetic: %d \n", res);
}*/
