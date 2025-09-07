/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 10:15:10 by fomanca           #+#    #+#             */
/*   Updated: 2025/08/28 10:32:33 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

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
	int	len;
	char	*str;

	str = "Hello world what's going on";
	len = ft_strlen(str);
	ft_strlen(str);

	printf("My string lenght is %d\n", len);
	return (0);
	
}*/
