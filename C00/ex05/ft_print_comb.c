/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:40:35 by ctardy            #+#    #+#             */
/*   Updated: 2021/09/11 13:38:15 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	nombre_entier(char c, char d, char u)
{
	char	virgule;
	char	espace;

	virgule = ',';
	espace = ' ';
	write (1, &c, 1);
	write (1, &d, 1);
	write (1, &u, 1);
	if (!(c == '7' && d == '8' && u == '9'))
	{
		write (1, &virgule, 1);
		write (1, &espace, 1);
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '1';
	u = '2';
	while (c <= '7')
	{
		while (d <= '8')
		{
			while (u <= '9')
			{
				if (c < d && d < u)
					nombre_entier (c, d, u);
				u++;
			}
			d++;
			u = '0';
		}
		c++;
		d = '0';
	}
}
