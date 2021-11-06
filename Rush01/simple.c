/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrendo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 08:37:50 by afrendo           #+#    #+#             */
/*   Updated: 2021/09/19 20:49:15 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_simple_logic(char data[6][6]);
void	ft_check_up(char data[6][6]);
void	ft_integrate_lowgrolo_up(int x, char data[6][6]);
void	ft_check_down(char data[6][6]);
void	ft_integrate_lowgrolo_down(int x, char data[6][6]);
void	ft_check_left(char data[6][6]);
void	ft_integrate_lowgrolo_left(int y, char data[6][6]);
void	ft_check_right(char data[6][6]);
void	ft_integrate_lowgrolo_right(int y, char data[6][6]);
void	ft_print_data(char data[6][6]);


void	ft_simple_logic(char data[6][6])
{
	ft_check_up(data);
	ft_check_down(data);
	ft_check_left(data);
	ft_check_down(data);
	//ft_print_data(data);
}

void	ft_check_up(char data[6][6])
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (x < 5)
	{	
		if (data[x][0] == '4')
		{
			//ft_print_data(data);
			while (y < 5)
			{	
				data[x][y] = y;
				y++;
			}
		}
		if (data[x][0] == '1')
			ft_integrate_lowgrolo_up(x, data);
		x++;
	}
	ft_print_data(data);
}

void	ft_integrate_lowgrolo_up(int x, char data[6][6])
{
	data[x][1] = '4';
}

void	ft_check_down(char data[6][6])
{
	int	x;
	int	y;
	int	v;

	v = 1;
	x = 1;
	y = 4;
	while (x < 5)
	{
		if (data[x][5] == '4')
		{
			while (y > 0)
			{	
				data[x][y] = v;
				y--;
				v++;
			}
		}
		if (data[x][0] == '1')
			ft_integrate_lowgrolo_down(x, data);	
		x++;
	}
}

void	ft_integrate_lowgrolo_down(int x, char data[6][6])
{
	data[x][4] = '4';
}

void	ft_check_left(char data[6][6])
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y < 5)
	{
		if (data[0][y] == '4')
		{
			while (x < 5)
			{	
				data[x][y] = x;
				x++;
			}
			if (data[0][y] == '1')
				ft_integrate_lowgrolo_left(y, data);	
		}
		y++;
	}
}

void	ft_integrate_lowgrolo_left(int y, char data[6][6])
{
	data[1][y] = '4';
}

void	ft_check_right(char data[6][6])
{
	int	x;
	int	y;
	int	v;

	v = 4;
	x = 1;
	y = 1;
	while (y > 0)
	{
		if (data[5][y] == '4')
		{
			while (y > 0)
			{	
				data[x][y] = v;
				x--;
				v--;
			}
		}
		if (data[5][y] == '1')
			ft_integrate_lowgrolo_right(y, data);	
	}
	x++;
}

void	ft_integrate_lowgrolo_right(int y, char data[6][6])
{
	data[4][y] = '4';
}


