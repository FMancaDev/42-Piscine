/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 22:25:45 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/24 22:30:08 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int 	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>

int 	main()
{
	char str[] = "hi how are you doing";

	printf("Original: %s\n", str);
	printf("string size: %d\n", ft_strlen(str));
}*/
