/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 21:18:46 by tapark            #+#    #+#             */
/*   Updated: 2020/11/06 20:54:38 by tapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_len(int n)
{
	int len;

	len = 0;
	if (n <= 0)
		len = len + 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		len;
	size_t	av;
	int		i;

	len = get_len(n);
	i = 1;
	if (n < 0)
		av = (long)n * -1;
	else
		av = (long)n;
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	dest[len] = '\0';
	while (len - i != -1)
	{
		dest[len - i] = av % 10 + '0';
		av = av / 10;
		i++;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}
