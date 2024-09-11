/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:55:11 by hdemanet          #+#    #+#             */
/*   Updated: 2024/09/09 14:55:13 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcounter(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*s)
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			return (count);
		while (s[i] != c && s[i])
			i++;
		count++;
	}
	return (count);
}

static int	charlencounter(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	char	**str;
	int		i;

	i = 0;
	index = 0;
	if (!s)
		return (0);
	str = (char **)malloc(sizeof(char *) * (wordcounter(s, c) + 1));
	if (!str)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		str[index] = ft_substr(s + i, 0, charlencounter(s + i, c));
		index++;
		i += charlencounter(s + i, c);
	}
	str[index] = 0;
	return (str);
}
