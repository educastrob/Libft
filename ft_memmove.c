/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:07:04 by edcastro          #+#    #+#             */
/*   Updated: 2023/06/05 17:52:49 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memrcpy(void *dest, const void *src, size_t n)
{
	while (n--)
		*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (ft_strlen(src) < ft_strlen(dest))
		ft_memcpy(dest, src, n);
	else
		ft_memrcpy(dest, src, n);
	return (dest);
}
