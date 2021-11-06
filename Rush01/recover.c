/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recover.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrendo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:24:13 by afrendo           #+#    #+#             */
/*   Updated: 2021/09/18 18:53:28 by afrendo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_initiate_data(char data[6][6]);
void	ft_print_data(char data[6][6]);
void	ft_rec_col_up(char *parameter, char data[6][6]);
void	ft_rec_col_down(char *parameter, char data[6][6]);
void	ft_rec_row_left(char *parameter, char data[6][6]);
void	ft_rec_row_right(char *parameter, char data[6][6]);

char	*ft_clean_parameter(char *clean_parameter, char *parameter)
{
	int	i;
	int	j;	

	j = 0;
	i = 0;
	while (!(i > 31))
	{
		clean_parameter[j] = parameter[i];
		i += 2;
		j++;
	}
	clean_parameter[j] = '\0';
	return (clean_parameter);
}



void	ft_recover(char *parameter, char data[6][6])
{	
	ft_initiate_data(data);
	ft_rec_col_up(parameter, data);
	ft_rec_col_down(parameter, data);
	ft_rec_row_left(parameter, data);
	ft_rec_row_right(parameter, data);
	ft_print_data(data);
}

void	ft_initiate_data(char data[6][6])
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (j <= 6)
	{
		i = 0;
		while (i <= 6)
		{
			data[i][j] = 120;
			i++;
		}
		j++;
	}
}

void	ft_print_data(char data[6][6])
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (j < 6)
	{
		i = 0;
		while (i < 6)
		{
			
			printf("%c", data[i][j]);
			i++;
		}
		printf("\n");
		j++;
	}
}




void	ft_rec_col_up(char *parameter, char data[6][6])
{
	int	i;
	int	x;

	x = 0;
	i = 1;
	while (i < 5)
	{
		data[i][0] = parameter[x];
		x++;
		i++;
	}
}

void	ft_rec_col_down(char *parameter, char data[6][6])
{
	int	i;
	int	x;

	x = 4;
	i = 1;
	while (i < 5)
	{
		data[i][5] = parameter[x];
		x++;
		i++;
	}
}

void	ft_rec_row_left(char *parameter, char data[6][6])
{
	int	i;
	int	x;

	x = 8;
	i = 1;
	while (i < 5)
	{
		data[0][i] = parameter[x];
		x++;
		i++;
	}
}

void	ft_rec_row_right(char *parameter, char data[6][6])
{
	int	i;
	int	x;

	x = 12;
	i = 1;
	while (i < 5)
	{
		data[5][i] = parameter[x];
		x++;
		i++;
	}
}


