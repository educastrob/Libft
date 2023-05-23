/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:47:40 by edcastro          #+#    #+#             */
/*   Updated: 2023/05/23 17:17:24 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*first_occurrence;
	size_t	i;
	size_t	little_len;

	first_occurrence = NULL;
	i = 0;
	little_len = ft_strlen(little);
	while (big[i] && i < len && little_len)
	{
		if (!ft_strncmp((big + i), little, little_len) && (little_len
				+ i <= len))
		{
			first_occurrence = (char *)(big + i);
			break ;
		}
		i++;
	}
	if (!little_len)
		first_occurrence = (char *)big;
	return (first_occurrence);
}
