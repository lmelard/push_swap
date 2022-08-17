/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:33:45 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/21 17:39:19 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	**ft_join_split(char **argv)
{
	char	*s;
	char	**str;
	int		i;
	int		j;

	i = 1;
	j = 0;
	s = NULL;
	str = NULL;
	while (argv[i] != NULL)
	{
		s = ft_strjoin_ps(s, " ");
		s = ft_strjoin_ps(s, argv[i]);
		i++;
	}
	str = ft_split(s, ' ');
	while (str[j] != 0)
		j++;
	free(s);
	return (str);
}
