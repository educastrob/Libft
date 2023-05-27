/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 22:53:21 by edcastro          #+#    #+#             */
/*   Updated: 2023/05/27 03:00:27 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(long n)
{
	size_t	counter;

	counter = 0;
	if (n <= 0)
	{
		n *= -1;
		counter++;
	}
	while (n)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

static void	putnbr_str(long number, size_t i, size_t len, char *str)
{
	while (i < len)
	{
		len--;
		str[len] = (number % 10) + 48;
		number /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	number;
	size_t	len;
	char	*str;

	number = n;
	len = count_digits(number);
	str = ft_calloc(len + 1, sizeof(char));
	if (number < 0)
	{
		number *= -1;
		*str = '-';
		putnbr_str(number, 1, len, str);
	}
	else
		putnbr_str(number, 0, len, str);
	return (str);
}
