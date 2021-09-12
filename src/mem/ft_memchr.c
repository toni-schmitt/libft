/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:50:39 by tschmitt          #+#    #+#             */
/*   Updated: 2021/07/14 12:34:39 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*buf;

	buf = s;
	while (n > 0)
	{
		if (*buf == c)
			return ((void *)buf);
		buf++;
		n--;
	}
	return (NULL);
}
