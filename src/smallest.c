/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:41:21 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/21 16:42:32 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long int	ft_smallest(t_pile **alst)
{
	t_pile		*node;
	long int	nb;

	node = (*alst)->next;
	nb = (*alst)->content;
	while (node != NULL)
	{
		if (node->content < nb)
			nb = node->content;
		node = node->next;
	}
	return (nb);
}
