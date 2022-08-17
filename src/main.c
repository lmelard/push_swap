/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenamelard <lenamelard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:17:59 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/22 15:30:07 by lenamelard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_pile	*stacka;
	t_pile	*stackb;
	char	**str;
	int		i;

	stacka = NULL;
	stackb = NULL;
	if (argc >= 2)
	{
		i = 0;
		str = ft_join_split(argv);
		ft_check_digit(str);
		while (str[i] != NULL)
		{
			ft_add_node(&stacka, ft_atoi_ps(str[i]));
			i++;
		}
		ft_free_str(str);
		ft_check_lst(&stacka);
		ft_add_rank(&stacka);
		ft_sort_all(&stacka, &stackb, i);
		ft_freeall(&stacka);
		ft_freeall(&stackb);
	}
	return (0);
}
