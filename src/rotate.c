/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:29:07 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/20 17:29:34 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_pile	*ft_rotate(t_pile **alst)
{
	t_pile		*node;	
	t_pile		*tmp;

	if (*alst == NULL || (*alst)->next == NULL)
		return (*alst);
	node = (*alst);
	tmp = ft_lstlast_ps(*alst);
	if (node->next->next == NULL)
	{
		ft_swap(alst);
		return (*alst);
	}
	(*alst) = node->next;
	(*alst)->prev = NULL;
	node->next = NULL;
	node->prev = tmp;
	tmp->next = node;
	return (*alst);
}

t_pile	*ft_ra(t_pile **alst)
{
	*alst = ft_rotate(alst);
	write(1, "ra\n", 3);
	return (*alst);
}

t_pile	*ft_rb(t_pile **blst)
{
	*blst = ft_rotate(blst);
	write(1, "rb\n", 3);
	return (*blst);
}
