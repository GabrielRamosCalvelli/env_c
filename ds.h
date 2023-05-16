/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ds.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcalvell <gcalvell@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:11:57 by gcalvell          #+#    #+#             */
/*   Updated: 2023/05/01 19:11:57 by gcalvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DS_H
# define DS_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node{
	char			*key;
	char			*value;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

typedef struct s_list{
	t_node	*head;
	t_node	*tail;
}					t_list;

t_node	*new_node(char *key, char *value);
void	empty_list(t_list *lst, t_node *node);
void	add_buttom(t_list *lst, t_node *node);
void	add_top(t_list *lst, t_node *node);
t_node	*remove_top(t_list *lst);
t_node	*remove_buttom(t_list *lst);
void	del_one(t_node *node);
void	del_lst(t_list *lst);
int		ft_strlen(const char *s);
int		ft_putstr(char *s);
int		ft_putchar(char c);
char	*ft_substr(char const *s, int start, size_t len);
int		find_equal(char	*s);
t_node	*set_node(char *s);
void	copy_env(t_list *env, char *envp[]);
void	print_lst(t_list *ref);

#endif
