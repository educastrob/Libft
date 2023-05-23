/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcaso <edcaso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:23:13 by edcaso          #+#    #+#             */
/*   Updated: 2023/05/18 12:23:13 by edcaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*last_occurrence;

	last_occurrence = NULL;
	while (*s)
	{
		if (*s == (unsigned char) c)
			last_occurrence = (char *) s;
		s++;
	}
	if (c == '\0')
		return ((char *) s);
	return (last_occurrence);
}
