/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_rank.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:24:01 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/20 17:26:05 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_add_rank(t_pile **alst)
{
	t_pile		*fnode;
	t_pile		*node;
	int			i;

	fnode = (*alst);
	node = (*alst);
	i = 0;
	while (node != NULL)
	{
		while (fnode != NULL)
		{
			if (fnode->content < node->content)
				i++;
			fnode = fnode->next;
		}
		node->rank = i;
		node = node->next;
		i = 0;
		fnode = (*alst);
	}
	return (0);
}
