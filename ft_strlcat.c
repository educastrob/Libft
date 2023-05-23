/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:00:20 by edcastro          #+#    #+#             */
/*   Updated: 2023/05/23 15:12:08 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	result;

	result = 0;
	i = 0;
	dest_len = ft_strlen(dst);
	if (dest_len < size)
		result = ft_strlen(src) + dest_len;
	else
		result = ft_strlen(src) + size;
	while ((dest_len + 1) < size && src[i])
		dst[dest_len++] = src[i++];
	if (size)
		dst[dest_len + i] = '\0';
	return (result);
}

