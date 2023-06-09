/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:52:38 by eduardo           #+#    #+#             */
/*   Updated: 2023/06/09 20:19:21 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp_node;

	temp_node = lst;
	if (!lst || !f)
		return ;
	while (temp_node)
	{
		f(temp_node->content);
		temp_node = temp_node->next;
	}
}
