/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:03:37 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/21 17:51:50 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_sort(t_pile **alst)
{
	t_pile	*node1;
	t_pile	*node2;

	if (*alst == NULL)
	{
		ft_freeall(alst);
		exit(0);
	}
	node1 = *alst;
	node2 = node1->next;
	while (node2 && (node1->content < node2->content))
	{
		node1 = node1->next;
		node2 = node2->next;
	}
	if (node2 == NULL)
	{
		ft_freeall(alst);
		exit(0);
	}
	return (0);
}
