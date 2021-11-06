/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:42:21 by ctardy            #+#    #+#             */
/*   Updated: 2021/09/13 08:34:53 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unisted.h>

void	ft_swap(int *a, int *b)
{
	int		c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_rev_int_tab(int *tab, int *size)
{
	int	i;
	int	j;
	int	demi_size;

	i = 0;
	j = size;
	demi_size = j / 2;
	while (demi_size > i && tab[i] != '\0')
	{
		ft_swap(i, j);
		i++;
		demi_size--;
	}
}
