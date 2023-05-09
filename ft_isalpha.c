/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:00:49 by edcastro          #+#    #+#             */
/*   Updated: 2023/05/09 17:02:08 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isalpha(int c);

// int	main()
// {
// 	char	c;

// 	c = 'a';
// 	if (isalpha(c) != 0)
// 		printf("ORIGINAL: Isso é uma letra do alfabeto!\n");
// 	else
// 		printf("ORIGINAL: Isso NÃO é uma letra do alfabeto!\n");

// 	if (ft_isalpha(c) != 0)
// 		printf("NATIVO: Isso é uma letra do alfabeto!\n");
// 	else
// 		printf("NATIVO: Isso NÃO é uma letra do alfabeto!\n");
// 	return (0);
// }

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (42);
	else
		return (0);
}
