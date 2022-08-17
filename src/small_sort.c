/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:32:08 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/21 17:00:59 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_pile	*ft_small_sorta(t_pile **alst)
{
	t_pile	*node;

	while (ft_sorted(alst) != 1)
	{
		node = *alst;
		if (node->next->next->content == ft_biggest(alst))
			ft_sa(alst);
		else if (node->content == ft_biggest(alst))
			ft_ra(alst);
		else
			ft_rra(alst);
	}
	return (*alst);
}

t_pile	*ft_small_sortb(t_pile **blst)
{
	t_pile	*node;

	while (ft_sorted(blst) != 1)
	{
		node = *blst;
		if (node->next->next->content == ft_biggest(blst))
			ft_sb(blst);
		else if (node->content == ft_biggest(blst))
			ft_rb(blst);
		else
			ft_rrb(blst);
	}
	return (*blst);
}
