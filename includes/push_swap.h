/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenamelard <lenamelard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:18:53 by lmelard           #+#    #+#             */
/*   Updated: 2022/04/22 15:27:50 by lenamelard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

typedef struct s_pile{
	long int		content;
	int				rank;
	struct s_pile	*next;
	struct s_pile	*prev;
}	t_pile;

int			ft_add_node(t_pile **alst, long int nb);
int			ft_add_rank(t_pile **alst);
long int	ft_atoi_ps(char *str);
long int	ft_biggest(t_pile **alst);
int			ft_check_digit(char **str);
int			ft_check_double(t_pile **alst);
int			ft_check_sort(t_pile **alst);
int			ft_check_value(t_pile **alst);
int			ft_check_lst(t_pile **alst);
void		ft_freeall(t_pile **alst);
void		ft_free_str(char **str);
char		**ft_join_split(char **argv);
t_pile		*ft_lstlast_ps(t_pile *lst);
t_pile		*ft_med_sort(t_pile **a, t_pile **b, int size, long int mx);
t_pile		*ft_push(t_pile **alst, t_pile **blst);
t_pile		*ft_pb(t_pile **alst, t_pile **blst);
t_pile		*ft_pa(t_pile **blst, t_pile **alst);
t_pile		*ft_radix_sort(t_pile **alst, t_pile **blst, int size);
t_pile		*ft_reverse_rotate(t_pile **alst);
t_pile		*ft_rra(t_pile **alst);
t_pile		*ft_rrb(t_pile **blst);
t_pile		*ft_rotate(t_pile **alst);
t_pile		*ft_ra(t_pile **alst);
t_pile		*ft_rb(t_pile **blst);
t_pile		*ft_small_sorta(t_pile **alst);
t_pile		*ft_small_sortb(t_pile **blst);
long int	ft_smallest(t_pile **alst);
t_pile		*ft_sort_all(t_pile **alst, t_pile **blst, int size);
int			ft_sorted(t_pile **alst);
char		**ft_split(char *s, char c);
char		*ft_strjoin_ps(char *s1, char *s2);
t_pile		*ft_swap(t_pile **alst);
t_pile		*ft_sa(t_pile **alst);
t_pile		*ft_sb(t_pile **blst);

#endif