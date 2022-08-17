/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:27:44 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/20 17:53:17 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_pile	*ft_swap(t_pile **alst)
{
	t_pile		*node;
	t_pile		*tmp;

	if (*alst == NULL || (*alst)->next == NULL)
		return (*alst);
	node = (*alst);
	tmp = node;
	node = tmp->next;
	tmp->next = tmp->next->next;
	tmp->prev = node;
	node->next = tmp;
	node->prev = NULL;
	(*alst) = node;
	if (tmp->next != NULL)
		tmp->next->prev = tmp;
	return (*alst);
}

t_pile	*ft_sa(t_pile **alst)
{
	ft_swap(alst);
	write(1, "sa\n", 3);
	return (*alst);
}

t_pile	*ft_sb(t_pile **blst)
{
	*blst = ft_swap(blst);
	write(1, "sb\n", 3);
	return (*blst);
}
