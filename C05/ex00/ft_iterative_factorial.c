/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factoriale.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 09:12:36 by ctardy            #+#    #+#             */
/*   Updated: 2021/09/20 09:13:40 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	compteur;
	int	nombre;

	compteur = 1;
	nombre = 1;
	if (nb < 0)
		return (0);
	while (nb >= compteur && nb >= 0)
	{
		nombre = nombre * compteur;
		compteur++;
	}
	return (nombre);
}
