/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:30:03 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/20 17:30:24 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_pile	*ft_reverse_rotate(t_pile **alst)
{
	t_pile		*node;
	t_pile		*tmp;

	if (*alst == NULL || (*alst)->next == NULL)
		return (*alst);
	tmp = (*alst);
	node = ft_lstlast_ps(*alst);
	if (tmp->next->next == NULL)
	{
		ft_swap(alst);
		return (*alst);
	}
	(*alst) = node;
	node->prev->next = NULL;
	(*alst)->prev = NULL;
	(*alst)->next = tmp;
	tmp->prev = (*alst);
	return (*alst);
}

t_pile	*ft_rra(t_pile **alst)
{
	write(1, "rra\n", 4);
	ft_reverse_rotate(alst);
	return (*alst);
}

t_pile	*ft_rrb(t_pile **blst)
{
	write(1, "rrb\n", 4);
	*blst = ft_reverse_rotate(blst);
	return (*blst);
}
