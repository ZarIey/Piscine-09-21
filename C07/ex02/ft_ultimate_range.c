/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:50:01 by ctardy            #+#    #+#             */
/*   Updated: 2021/09/25 09:36:58 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = NULL;
	*range = malloc(sizeof(int) * (len));
	if (range == NULL)
		return (-1);
	while (i < len)
	{
		range[0][i++] = min++;
	}
	return (len);
}
/*int	main()
{
	int **range;
	int taille = NULL;
	int i;

	i = 0;
	taille = ft_ultimate_range(&range[0], 5, 15);
	printf("Taille = %d\n", taille);
	if (!range)
	{
		printf("Pointer set to NULL.\n");
		return (0);
	}
	while (i < taille)
	{
		printf("%d ", *range[i]);
		i++;
	}
	return (0);
}*/
