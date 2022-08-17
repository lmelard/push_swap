/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:40:28 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/26 16:07:07 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_pile	*ft_radix_sort(t_pile **alst, t_pile **blst, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < 32 && ft_sorted(alst) != 1)
	{
		j = size;
		while (j)
		{
			if ((((*alst)->rank >> i) & 1) == 0)
				ft_pb(alst, blst);
			else
				ft_ra(alst);
			j--;
		}
		while (*blst != NULL)
			ft_pa(blst, alst);
		i++;
	}
	return (*alst);
}
