/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:02:12 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/21 17:51:58 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_value(t_pile **alst)
{
	t_pile	*node;

	node = *alst;
	while (node != NULL)
	{
		if (node->content < INT_MIN || node->content > INT_MAX)
		{
			ft_freeall(alst);
			write(2, "Error\n", 6);
			exit(1);
		}
		node = node->next;
	}
	return (0);
}
