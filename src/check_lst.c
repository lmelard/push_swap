/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:52:17 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/21 17:56:47 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_lst(t_pile **alst)
{
	ft_check_value(alst);
	ft_check_sort(alst);
	ft_check_double(alst);
	return (0);
}
