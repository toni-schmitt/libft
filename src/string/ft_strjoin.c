/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:35:48 by tschmitt          #+#    #+#             */
/*   Updated: 2021/07/11 16:46:33 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_join1(char **joined, const char **s1, int *i, int *j)
{
	*j = 0;
	while ((*s1)[*i])
	{
		(*joined)[*i] = (*s1)[*j];
		(*i)++;
		(*j)++;
	}
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*joined;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	joined = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (joined == NULL)
		return (NULL);
	j = 0;
	ft_join1(&joined, &s1, &i, &j);
	j = 0;
	while (s2[j])
	{
		joined[i] = s2[j];
		j++;
		i++;
	}
	joined[i] = 0;
	return (joined);
}
