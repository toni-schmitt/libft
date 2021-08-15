/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:05:29 by tschmitt          #+#    #+#             */
/*   Updated: 2021/07/06 20:04:21 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int		full_size;
	char	*buf;

	full_size = size * count;
	buf = malloc(full_size);
	if (buf == NULL)
		return (NULL);
	while (full_size > 0)
	{
		buf[full_size - 1] = 0;
		full_size--;
	}
	return ((void *)buf);
}
