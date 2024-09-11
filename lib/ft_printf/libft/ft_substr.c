/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:46:54 by hdemanet          #+#    #+#             */
/*   Updated: 2024/09/09 14:46:56 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*sub;

	if (s == 0)
		return (0);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if ((slen - start) < len)
		len = slen - start;
	sub = (char *)malloc(len + 1);
	if (sub == 0)
		return (0);
	ft_memcpy(sub, &s[start], len);
	sub[len] = '\0';
	return (sub);
}
