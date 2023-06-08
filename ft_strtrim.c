/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:57:07 by edcastro          #+#    #+#             */
/*   Updated: 2023/06/07 22:00:06 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	length;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	length = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (length > start && ft_strrchr(set, s1[length]))
		length--;
	return (ft_substr((s1 + start), 0, (length - start + 1)));
}
