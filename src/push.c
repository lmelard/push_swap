/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:30:41 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/20 17:31:23 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_pile	*ft_push(t_pile **alst, t_pile **blst)
{
	t_pile	*nodea;

	if (*alst == NULL)
		return (*blst);
	nodea = (*alst);
	if ((*blst) != NULL)
		(*blst)->prev = nodea;
	(*alst) = nodea->next;
	nodea->next = (*blst);
	nodea->prev = NULL;
	(*blst) = nodea;
	if ((*alst) != NULL)
		(*alst)->prev = NULL;
	return (*blst);
}

t_pile	*ft_pb(t_pile **alst, t_pile **blst)
{
	*blst = ft_push(alst, blst);
	write(1, "pb\n", 3);
	return (*blst);
}

t_pile	*ft_pa(t_pile **blst, t_pile **alst)
{
	*alst = ft_push(blst, alst);
	write(1, "pa\n", 3);
	return (*alst);
}
