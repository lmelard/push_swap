/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenamelard <lenamelard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:44:50 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/22 15:28:31 by lenamelard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

static void	ft_error(char **str)
{
	write(2, "Error\n", 6);
	ft_free_str(str);
	exit(1);
}

int	ft_check_digit(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i][j] == '-' || str[i][j] == '+')
			j++;
		if (str[i][j] == '\0')
			ft_error(str);
		while (str[i][j] != '\0')
		{
			if (ft_isdigit(str[i][j]) != 1)
				ft_error(str);
			j++;
		}
		i++;
	}
	return (0);
}
