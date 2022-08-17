/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:49:49 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/25 14:12:35 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_free_one(t_pile *node)
{
	node->next = NULL;
	node->prev = NULL;
	free(node);
}

void	ft_freeall(t_pile **alst)
{
	t_pile	*tmp;

	if (!*alst)
		return ;
	while (*alst)
	{
		tmp = (*alst)->next;
		ft_free_one(*alst);
		(*alst) = tmp;
	}
	(*alst) = NULL;
}

void	ft_free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}
