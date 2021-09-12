/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 18:41:59 by tschmitt          #+#    #+#             */
/*   Updated: 2021/07/17 15:20:10 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_get_next_char(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_get_array_size(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			s = s + ft_get_next_char((char *)s, c);
		}
		else
			s++;
	}
	return (i);
}

static void	*ft_free_array(char ***a, int i)
{
	int	j;

	j = 0;
	if (!(*a))
		return (NULL);
	while (j < i)
	{
		j++;
		if ((*a)[j])
			free((*a)[j]);
	}
	free(*a);
	return (NULL);
}

static void	ft_gettochar(const char **s, char c)
{
	while (**s == c)
		(*s)++;
}

char	**ft_split(const char *s, char c)
{
	int		size;
	int		i;
	int		j;
	char	**array;

	if (s == NULL)
		return (NULL);
	size = ft_get_array_size(s, c);
	array = ft_calloc(size + 1, sizeof(char *));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_gettochar(&s, c);
		array[i] = ft_calloc(ft_get_next_char((char *)s, c) + 1, sizeof(char));
		if (array[i] == NULL)
			return (ft_free_array(&array, size + 1));
		j = 0;
		while (*s && *s != c)
			array[i][j++] = *s++;
		i++;
	}
	return (array);
}
