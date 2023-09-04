/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:00:20 by edcastro          #+#    #+#             */
/*   Updated: 2023/06/15 17:08:16 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	destiny;
	size_t	source;
	size_t	result;

	if (((!src || !dst) && !size))
		return (0);
	i = 0;
	result = 0;
	destiny = ft_strlen(dst);
	source = ft_strlen(src);
	if (size > destiny)
		result = source + destiny;
	else
		result = source + size;
	while (size > (destiny + 1) && src[i] != '\0')
	{
		dst[destiny] = src[i];
		destiny++;
		i++;
	}
	dst[destiny] = '\0';
	return (result);
}
