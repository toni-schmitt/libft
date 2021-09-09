/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:35:48 by tschmitt          #+#    #+#             */
/*   Updated: 2021/09/03 19:20:17 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined;
	int		joined_len;

	joined_len = ft_strlen(s1) + ft_strlen(s2);
	if (joined_len == 0)
		return (NULL);
	joined = malloc((joined_len + 1) * sizeof(*joined));
	if (joined == NULL)
		return (NULL);
	while (s1 && *s1)
		*joined++ = *s1++;
	while (s2 && *s2)
		*joined++ = *s2++;
	*joined = '\0';
	return (joined - joined_len);
}
