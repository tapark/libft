/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapark <tapark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 16:47:59 by tapark            #+#    #+#             */
/*   Updated: 2020/10/12 21:24:48 by tapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (!(dest = (char *)malloc(count * size)))
		return (NULL);
	while (i < count * size)
	{
		dest[i] = 0;
		i++;
	}
	return ((void *)dest);
}
