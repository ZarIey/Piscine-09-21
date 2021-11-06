/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:43:21 by ctardy            #+#    #+#             */
/*   Updated: 2021/09/25 09:47:04 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>
#include <unistd.h>                         
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_cat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	int		cpt;
	char	*dest;
	char	bs;

	bs = '\0';
	j = 0;
	cpt = 0;
	while (j < size)
		cpt = cpt + ft_strlen(strs[j++]);
	dest = malloc(sizeof(char) * (cpt + (ft_strlen(sep) * (size - 1))) + 1);
	if (dest == NULL)
		return (0);
	j = 0;
	while (j < size)
	{
		ft_cat(dest, strs[j++]);
		if (!(j == size))
			ft_cat(dest, sep);
	}
	if (j == size - 1)
		ft_cat(dest, &bs);
	return (dest);
}
/*int main()
{
	char *strs[3];
	char *str;
	strs[0] = "coucou je suis le programme";
	strs[1] = "si je ne marche pas Charly va jump";
	strs[2] = "ceci n'est pas un exercice";
		str = ft_strjoin(3, strs, "||,/,/,/,/,/|| ");
	printf("%s\n",str);
	free(str);
}*/
