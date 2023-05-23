/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:07:04 by edcastro          #+#    #+#             */
/*   Updated: 2023/05/18 11:08:23 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (ft_strlen(src) < ft_strlen(dest))
		ft_memcpy(dest, src, n);
	else
		ft_memrcpy(dest, src, n);
	return (dest);
}
