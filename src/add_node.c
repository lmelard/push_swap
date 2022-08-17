/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:48:58 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/21 16:55:02 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_add_node(t_pile **alst, long int nb)
{
	t_pile	*new;
	t_pile	*last;

	new = malloc(sizeof(t_pile));
	if (!new)
	{
		ft_freeall(alst);
		return (0);
	}
	new->content = nb;
	new->next = NULL;
	new->prev = NULL;
	if (ft_lstlast_ps(*alst) == 0)
	{
		*alst = new;
		return (1);
	}
	last = ft_lstlast_ps(*alst);
	last->next = new;
	new->prev = last;
	return (0);
}
