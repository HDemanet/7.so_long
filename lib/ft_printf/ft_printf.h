/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:44:08 by hdemanet          #+#    #+#             */
/*   Updated: 2024/09/09 14:44:09 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	print_char(char c);
int	print_str(char *s);
int	print_pointer(size_t nbr, int *count);
int	print_int(int nbr, int *count);
int	putnbr_base(unsigned int nb, char *base, int *count);
#endif
