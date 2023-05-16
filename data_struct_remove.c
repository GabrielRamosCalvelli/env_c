/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_struct_remove.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcalvell <gcalvell@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:10:05 by gcalvell          #+#    #+#             */
/*   Updated: 2023/05/01 19:10:05 by gcalvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ds.h"

void	del_specifc(t_list *lst, char *ref)
{
	t_node	*temp;
	t_node	*aux;

	temp = lst->head;
	while (temp != NULL)
	{
		if (temp->key == ref)
		{
			if (temp == lst->head)
			{
				if (temp == lst->tail)
				{
					lst->head = NULL;
					lst->tail = NULL;
				}
				else
					lst->head = temp->next;
			}
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			aux = temp->next;
			del_one(temp);
		}
		temp = aux;
	}
}

void	del_one(t_node *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

void	del_lst(t_list *lst)
{
	t_node	*temp;
	t_node	*aux;

	temp = lst->head;
	while (temp != NULL)
	{
		aux = temp->next;
		del_one(temp);
		temp = aux;
	}
	lst->head = NULL;
	lst->tail = NULL;
}
