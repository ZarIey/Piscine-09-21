/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:38:01 by ctardy            #+#    #+#             */
/*   Updated: 2021/09/27 16:15:37 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (ft_len(str) + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*dest;

	i = 0;
	dest = malloc(sizeof(t_stock_str) * (ac + 1));
	if (dest == NULL)
		return (0);
	while (i < ac)
	{
		dest[i].size = ft_len(av[i]);
		dest[i].str = ft_strdup(av[i]);
		dest[i].copy = ft_strdup(av[i]);
		if (dest[i].str == NULL || dest[i].copy == NULL)
			return (0);
		i++;
	}
	dest[i].str = NULL;
	return (dest);
}
/*int main(int ac, char **av)
{
	int i;

	i = ac - 1;
	t_stock_str *dest;

	dest = ft_strs_to_tab(ac, av);
	while (i > 1)
	{
			printf("%d\n %s\n %s\n", dest[i].size, dest[i].str, dest[i].copy);
			i--;
	}
}*/
