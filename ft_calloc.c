/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:29:20 by edcastro          #+#    #+#             */
/*   Updated: 2023/05/23 20:07:24 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*pointer;
	size_t	i;

	pointer = malloc(nmemb * size);
	i = 0;
	if (pointer == NULL)
		return (0);
	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	while (i < nmemb * size)
	{
		pointer[i] = 0;
		i++;
	}
	return (pointer);
}
