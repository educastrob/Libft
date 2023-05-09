/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:04:37 by edcastro          #+#    #+#             */
/*   Updated: 2023/05/09 19:49:07 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isdigit(int c);

// int	main()
// {
// 	char	c;

// 	c = 'a';
// 	if (isdigit(c) != 0)
// 		printf("ORIGINAL: Isso é um dígito! '%s'\n", &c);
// 	else
// 		printf("ORIGINAL: Isso NÃO é um dígito! '%s'\n", &c);

// 	if (ft_isdigit(c) != 0)
// 		printf("NATIVO: Isso é um dígito! '%s'\n", &c);
// 	else
// 		printf("NATIVO: Isso NÃO é um dígito! '%s'\n", &c);
// 	return (0);
// }

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (42);
	else
		return (0);
}
