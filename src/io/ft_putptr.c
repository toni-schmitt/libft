/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:03:18 by tschmitt          #+#    #+#             */
/*   Updated: 2021/08/15 17:46:58 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptr(void *ptr)
{
	int		printed_chars;

	printed_chars = ft_putstr("0x");
	printed_chars += ft_putlhex((unsigned long long)ptr);
	return (printed_chars);
}
