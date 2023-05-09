/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:28:58 by edcastro          #+#    #+#             */
/*   Updated: 2023/05/09 17:56:12 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isascii(int c);

// int	main()
// {
// 	char	c;

// 	c = '6';
// 	if (isascii(c) != 0)
// 		printf("ORIGINAL: Isso é um ascii! %s\n", &c);
// 	else
// 		printf("ORIGINAL: Isso NÃO é um ascii! %s\n", &c);

// 	if (ft_isascii(c) != 0)
// 		printf("NATIVO: Isso é um ascii! %s\n", &c);
// 	else
// 		printf("NATIVO: Isso NÃO é um ascii! %s\n", &c);
// 	return (0);
// }

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (42);
	else
		return (0);
}
