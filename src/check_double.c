/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:33:26 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/21 16:37:57 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_double(t_pile **alst)
{
	t_pile	*node1;
	t_pile	*node2;

	node1 = *alst;
	node2 = node1->next;
	if (node2 == NULL)
		return (0);
	while (node2 != NULL)
	{
		while (node2 != NULL)
		{
			if (node1->content == node2->content)
			{
				ft_freeall(alst);
				write(2, "Error\n", 6);
				exit(1);
			}
			node2 = node2->next;
		}
		node1 = node1->next;
		node2 = node1->next;
	}
	return (0);
}
