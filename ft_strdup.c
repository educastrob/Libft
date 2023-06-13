/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:59:40 by edcastro          #+#    #+#             */
/*   Updated: 2023/06/13 20:53:45 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	src_len;

	src_len = ft_strlen(s) + 1;
	dest = (char *) malloc(src_len);
	if (s != NULL && dest != NULL)
		ft_strlcpy(dest, s, src_len);
	return (dest);
}
