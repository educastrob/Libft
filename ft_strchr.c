/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:30:08 by edcastro          #+#    #+#             */
/*   Updated: 2023/05/15 15:51:52 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *str, char c) // CHAR C PARA INT!!! NÃO ESQUECE
{
	while (*str != '\0')
	{
		if (*str == c)
			return (char *) str;
		str++;
	}
	if (c == '\0')
		return (char *) str;
	return NULL;
}

int	main(void)
{
	const char	str[] = "http://www.tutorialspoint.com";
	const char	c = '.';
	
	printf("String: %s\n Strchr: %s\n", str, ft_strchr(str, c));
	return(0);
}
