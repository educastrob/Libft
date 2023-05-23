/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:55:38 by edcastro          #+#    #+#             */
/*   Updated: 2023/05/18 11:06:47 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrcpy(void *dest, const void *src, size_t n)
{
	while (n--)
		*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	return (dest);
}
