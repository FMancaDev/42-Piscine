/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:34:30 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/07 13:26:21 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	count_all(int size, char **strs, char *sep)
{
	int	total;
	int	sep_len;
	int	j;

	sep_len = ft_strlen(sep);
	j = 0;
	while (j < size)
	{
		total = ft_strlen(strs[j]);
		if (j < size -1)
			total += sep_len;
		j++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	char
		*join;

	j = 0;
	j = count_all(size, strs, sep);
	join = malloc(j * sizeof(char) + 1);
	if (!join)
		return (0);
	join[0] = '\0';
	i = 0;
	while (i < size)
	{
		join = ft_strcat(join, strs[i]);
		if (i < size - 1)
			join = ft_strcat(join, sep);
		i++;
	}
	return (join);
}

/*#include <stdio.h>

int main(void)
{
	char *array[] = {"Hello", "world", "this", "is", "C"};
	char *sep = ", ";
	char *result;

	result = ft_strjoin(5, array, sep);
	if (result)
	{
		printf("Resultado: %s\n", result);
		free(result);
	}
	else
	{
		printf("Falha na alocação de memória.\n");
	}
	return 0;
}*/
