/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:44:04 by tapark            #+#    #+#             */
/*   Updated: 2020/10/14 17:42:24 by tapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest_c;
	unsigned char	*src_c;

	dest_c = (unsigned char *)dest;
	src_c = (unsigned char *)src;
	i = 0;
	while (i < n && src_c[i] != (unsigned char)c)
	{
		dest_c[i] = src_c[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		dest_c[i] = src_c[i];
		i++;
		return (&dest_c[i]);
	}
}
