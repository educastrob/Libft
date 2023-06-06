/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:18:53 by edcastro          #+#    #+#             */
/*   Updated: 2023/06/05 21:04:56 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	size_t	i;

	string = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!string)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
