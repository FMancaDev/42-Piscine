/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:55:26 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/03 18:57:58 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
	int 	i;
	int	len;
	char 	temp;

	i = 0;
	len = 0;
	while (str[len])
	{
		len ++;
	}
	while (i < len - 1)
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = tenp;
		i++;
		len--
	}
	return (str);
}

