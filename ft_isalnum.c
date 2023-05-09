/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:10:01 by edcastro          #+#    #+#             */
/*   Updated: 2023/05/09 17:27:24 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isalnum(int c);

// int	main()
// {
// 	char	c;

// 	c = 'C';
// 	if (isalnum(c) != 0)
// 		printf("ORIGINAL: Isso é uma letra/dígito!\n");
// 	else
// 		printf("ORIGINAL: Isso NÃO é uma letra/dígito!\n");

// 	if (ft_isalnum(c) != 0)
// 		printf("NATIVO: Isso é uma letra/dígito!\n");
// 	else
// 		printf("NATIVO: Isso NÃO é uma letra/dígito!\n");
// 	return (0);
// }

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (42);
	else
		return (0);
}
