/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 10:28:07 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/06 11:23:14 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	array = (int *) malloc (sizeof(int) * ((max - min) + 1));
	if (array != NULL)
	{
		while (min < max)
		{
			array[i] = min;
			i++;
			min++;
		}
		*range = array;
		return (i);
	}
	else
		return (-1);
}

/*#include <stdio.h>

int 	main()
{
	int	min = 5;
	int	max = 3;
	int	i = 0;
	int	*range;
	int	size = ft_ultimate_range(&range, min, max);

	i = 0;
	printf("\n Range size: %d\n", size);
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
}*/
