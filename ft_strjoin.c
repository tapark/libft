/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapark <tapark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 22:38:13 by tapark            #+#    #+#             */
/*   Updated: 2020/10/16 15:47:41 by tapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*str;

	s1_len = 0;
	s2_len = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;
	if (!(str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (NULL);
	s1_len = 0;
	s2_len = 0;
	while (s1[s1_len])
		str[i++] = s1[s1_len++];
	while (s2[s2_len])
		str[i++] = s2[s2_len++];
	str[i] = '\0';
	return (str);
}
