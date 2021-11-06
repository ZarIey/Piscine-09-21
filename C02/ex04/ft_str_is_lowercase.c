/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:31:21 by ctardy            #+#    #+#             */
/*   Updated: 2021/09/14 11:53:36 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	char	*i;

	i = str;
	while (*i != '\0')
	{
		if (*i >= 97 && *i <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}	