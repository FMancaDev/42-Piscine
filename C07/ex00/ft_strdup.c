/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 20:34:19 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/05 12:45:28 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>   // Para printf
#include <stdlib.h>  // Para free


int main(void)
{
    char *original = "Teste de duplicação!";
    char *duplicada;

    duplicada = ft_strdup(original);
    if (!duplicada)
    {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Duplicada: %s\n", duplicada);

    free(duplicada);  // Sempre liberar a memória alocada
    return 0;
}*/
