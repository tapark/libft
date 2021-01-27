/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 15:48:49 by tapark            #+#    #+#             */
/*   Updated: 2020/10/28 16:00:23 by tapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		get_arnb(char const *s, char c)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			n++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (n);
}

int		ft_cpystr(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	if (!dest || !src)
		return (0);
	while (src[i] && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	char	*temp;
	size_t	len2;
	size_t	i;

	i = 0;
	if (!(dest = (char **)malloc(sizeof(char *) * (get_arnb(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			temp = (char *)s;
			while (*s != c && *s)
				s++;
			len2 = s - temp + 1;
			if (!(dest[i] = (char *)malloc(len2)))
				return (0);
			ft_cpystr(dest[i++], temp, len2);
		}
		else
			++s;
	}
	dest[i] = 0;
	return (dest);
}
