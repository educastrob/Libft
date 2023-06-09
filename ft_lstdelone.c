/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:25:53 by eduardo           #+#    #+#             */
/*   Updated: 2023/06/09 17:51:20 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*temp_node;

	if (!lst || !del)
		return ;
	temp_node = lst;
	del(temp_node->content);
	lst = lst->next;
	free(temp_node);
}
