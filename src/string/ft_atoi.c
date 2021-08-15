/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 13:43:42 by tschmitt          #+#    #+#             */
/*   Updated: 2021/08/15 17:37:25 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_digit(const char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	is_space(const char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

static int	is_sign(const char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	ft_atoi(const char *s)
{
	long long int	n;
	int				is_negative;

	n = 0;
	is_negative = 1;
	while (is_space(*s))
		s++;
	if (is_sign(*s))
	{
		if (*s == '-')
			is_negative = -1;
		s++;
	}
	while (is_digit(*s))
	{
		n = (n * 10) + (*s - '0');
		if (n < 0 && is_negative == -1)
			return (0);
		else if (n < 0 && is_negative == 1)
			return (-1);
		s++;
	}
	return (n * is_negative);
}
