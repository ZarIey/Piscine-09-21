/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:15:20 by ctardy            #+#    #+#             */
/*   Updated: 2021/09/23 21:46:37 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab_int;
	int	i;

	i = 0;
	tab_int = NULL;
	tab_int = malloc(sizeof(int) * (max - min));
	if (min >= max || tab_int == NULL)
		return (0);
	while (min < max)
	{
		tab_int[i] = min;
		min++;
		i++;
	}
	return (tab_int);
}
