/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:35:34 by ctardy            #+#    #+#             */
/*   Updated: 2021/09/16 10:38:15 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	char	*i;
	char	*j;
	int		diff;

	i = s1;
	j = s2;
	diff = 0;
	while ((*i != '\0') && (*j != '\0'))
	{
		if (*i == *j)
		{
			i++;
			j++;
		}
		else
		{
			diff = *i - *j;
			return (diff);
		}
	}
	diff = *i - *j;
	return (diff);
}
