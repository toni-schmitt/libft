/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:41:09 by tschmitt          #+#    #+#             */
/*   Updated: 2021/07/30 22:30:01 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_isinstr(const char *s, const char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

static int	ft_getend(const char *s, const char *set, int end)
{
	while (ft_isinstr(set, s[end]) && end > 0)
		end--;
	return (end);
}

/* Trims the beginning and end of a string by characters included in the set */
char	*ft_strtrim(char const *s, char const *set)
{
	int		end;
	int		i;
	int		j;
	char	*trimmed;

	if (s == NULL || set == NULL)
		return (NULL);
	end = ft_getend(s, set, ft_strlen(s) - 1);
	if (ft_strlen(s) == 0 || end == 0)
		return ("");
	i = 0;
	while (ft_isinstr(set, s[i]) && s[i])
		i++;
	trimmed = ft_calloc(end - i + 2, sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	j = 0;
	while (i <= end && s[i])
	{
		trimmed[j] = s[i];
		i++;
		j++;
	}
	return (trimmed);
}
