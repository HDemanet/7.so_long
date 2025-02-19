/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:54:16 by hdemanet          #+#    #+#             */
/*   Updated: 2024/09/09 14:54:17 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calculate_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = (n / 10);
		len++;
	}
	return (len);
}

static char	*create_n(char *arr, int n, int len)
{
	while (len >= 0)
	{
		arr[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (arr);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*arr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = calculate_len(n);
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (0);
	arr[len] = '\0';
	len = len - 1;
	if (n == 0)
		arr[0] = '0';
	else if (n < 0)
	{
		n = -n;
		arr[0] = '-';
		create_n(&arr[1], n, len - 1);
	}
	else
		create_n(arr, n, len);
	return (arr);
}
