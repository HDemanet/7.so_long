/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:57:50 by hdemanet          #+#    #+#             */
/*   Updated: 2024/09/10 12:46:55 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	free_map(char **map)
{
	int	i;

	if (map == NULL)
		exit(0);
	i = 0;
	while (map[i] != NULL)
	{
		free(map[i]);
		i++;
	}
	free(map);
}

void	print_error_message(char *error_message, t_game *game)
{
	ft_printf(error_message);
	free_map(game->map->vector);
	exit(EXIT_FAILURE);
}

void	print_error(char *error_message)
{
	perror(error_message);
	exit(EXIT_FAILURE);
}
