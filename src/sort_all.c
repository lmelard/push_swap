/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:26:40 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/21 16:52:46 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_pile	*ft_sort_all(t_pile **alst, t_pile **blst, int size)
{
	if (size == 2)
		ft_sa(alst);
	else if (size == 3)
		ft_small_sorta(alst);
	else if (size > 3 && size <= 6)
		ft_med_sort(alst, blst, size, ft_biggest(alst));
	else if (size > 6)
		ft_radix_sort(alst, blst, size);
	return (*alst);
}
