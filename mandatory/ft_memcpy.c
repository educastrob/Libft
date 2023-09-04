/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 03:51:07 by edcastro          #+#    #+#             */
/*   Updated: 2023/06/13 19:32:31 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destiny;
	unsigned char	*source;
	size_t			i;

	if (!src && !dest)
		return (NULL);
	destiny = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (destiny);
}
