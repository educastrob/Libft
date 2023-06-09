/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:52:38 by eduardo           #+#    #+#             */
/*   Updated: 2023/06/09 19:25:49 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list **lst, void (*f)(void *))
{
	t_list	*temp_node;

	if (!lst || !f)
		return ;
	while (temp_node)
	{
		f(temp_node->content);
		temp_node = temp_node->next;
	}
}
