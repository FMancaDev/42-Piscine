/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:12:17 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/02 14:10:14 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, --power));
}

/*include <stdio.h>

int main(void)
{
    int base = 2;
    int expoente = 5;
    int resultado;

    resultado = ft_recursive_power(base, expoente);
    printf("%d elevado a %d é %d\n", base, expoente, resultado);
    printf("\n");

    // Testando outros casos
    printf("3 elevado a 0 é %d\n", ft_recursive_power(3, 0));  // Deve ser 1
    printf("5 elevado a -2 é %d\n", ft_recursive_power(5, -2)); // Deve ser 0
    printf("4 elevado a 3 é %d\n", ft_recursive_power(4, 3));  // Deve ser 64

    return 0;
}*/
