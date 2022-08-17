/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:37:38 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/21 16:41:53 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long int	ft_biggest(t_pile **alst)
{
	t_pile		*node;
	long int	nb;

	node = (*alst)->next;
	nb = (*alst)->content;
	while (node != NULL)
	{
		if (nb < node->content)
			nb = node->content;
		node = node->next;
	}
	return (nb);
}
