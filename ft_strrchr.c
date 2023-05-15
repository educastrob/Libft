/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:08:56 by edcastro          #+#    #+#             */
/*   Updated: 2023/05/15 17:44:15 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last_occurrence;

	last_occurrence = NULL;
	while (*str != '\0')
	{
		if (*str == c)
			last_occurrence = (char *) str;
		str++;
	}
	if (c == '\0')
		return ((char *) str);
	return (last_occurrence);
}
