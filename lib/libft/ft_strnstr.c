/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:56:10 by hdemanet          #+#    #+#             */
/*   Updated: 2024/09/09 14:56:12 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while ((i < len) && (haystack[i] != '\0'))
	{
		if ((ft_strncmp(&haystack[i], needle, ft_strlen(needle)) == 0) && (i
				+ ft_strlen(needle) <= len))
			return (&((char *)haystack)[i]);
		i++;
	}
	return (0);
}
