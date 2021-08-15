/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:51:51 by tschmitt          #+#    #+#             */
/*   Updated: 2021/07/11 16:42:48 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*substr;

	if (s == NULL)
		return (NULL);
	if (start > (size_t)ft_strlen(s))
		return (ft_calloc(1, 1));
	i = 0;
	substr = malloc(sizeof(char) * len + 1);
	if (substr == NULL)
		return (NULL);
	while (len > 0)
	{
		substr[i] = s[i + start];
		i++;
		len--;
	}
	substr[i] = 0;
	return (substr);
}
