/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:30:57 by fomanca           #+#    #+#             */
/*   Updated: 2025/08/30 18:35:46 by fomanca          ###   ########.fr       */
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

int	main()
{
	int	len;
	char	*str;

	str = "This is my ft_strlen";
	len = ft_strlen(str);
	ft_strlen(str);

	printf("My string len is : %d \n", len);
}*/
