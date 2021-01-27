/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapark <tapark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 15:37:31 by tapark            #+#    #+#             */
/*   Updated: 2020/10/21 14:40:55 by tapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *newelemt;

	if (!(newelemt = malloc(sizeof(t_list))))
		return (NULL);
	newelemt->content = content;
	newelemt->next = NULL;
	return (newelemt);
}
