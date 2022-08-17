/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:38:55 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/21 16:53:39 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_pile	*ft_join_smallsort(t_pile **alst, t_pile **blst, long int mx)
{
	while (*blst != NULL)
	{
		if ((*blst)->content < (*alst)->content)
			ft_pa(blst, alst);
		else if ((*blst)->content > ft_biggest(alst)
			&& (*alst)->content == ft_smallest(alst)
			&& (*blst)->content != mx)
			ft_pa(blst, alst);
		else if ((*blst)->content == mx
			&& (*alst)->content == ft_smallest(alst))
			ft_pa(blst, alst);
		else
			ft_ra(alst);
	}
	while (ft_sorted(alst) != 1)
		ft_ra(alst);
	return (*alst);
}

t_pile	*ft_med_sort(t_pile **a, t_pile **b, int size, long int mx)
{
	int	i;

	i = size;
	while (i > 3)
	{
		ft_pb(a, b);
		i--;
	}
	ft_small_sorta(a);
	if (size == 5 && (*b)->content > (*b)->next->content)
		ft_sb(b);
	else if (size == 6)
		ft_small_sortb(b);
	ft_join_smallsort(a, b, mx);
	return (*a);
}
