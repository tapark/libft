/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 21:55:30 by tapark            #+#    #+#             */
/*   Updated: 2020/10/14 20:59:07 by tapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (dest == NULL || src == NULL)
		return (0);
	i = 0;
	while (dstsize != 0 && i < dstsize - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
