/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:37:16 by tschmitt          #+#    #+#             */
/*   Updated: 2021/08/25 18:39:44 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *str, size_t n)
{
	char	*duped;
	size_t	duped_len;

	duped_len = n;
	duped = malloc(duped_len + 1 * sizeof(*duped));
	if (duped == NULL)
		return (NULL);
	while (n--)
		*duped++ = *str++;
	*duped = '\0';
	return (duped - duped_len);
}
