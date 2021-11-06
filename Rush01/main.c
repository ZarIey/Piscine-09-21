/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrendo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 08:37:50 by afrendo           #+#    #+#             */
/*   Updated: 2021/09/18 18:35:11 by afrendo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_clean_parameter(char *clean_parameter,char *parameter);
void	ft_recover(char *parameter, char data[6][6]);

int	main(int argc, char **argv)
{

	char	uncleaned_data[6][6];
	char	data[6][6];
	char	clean_parameter[17];	
	char	*parameter = ft_clean_parameter(clean_parameter, argv[1]);
	ft_recover(parameter, data);
	//printf("resultat = %s", ft_clean_parameter(clean_parameter, argv[1]));
	printf("resultat = %s", parameter);
}
