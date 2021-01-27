/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapark <tapark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 17:01:56 by tapark            #+#    #+#             */
/*   Updated: 2020/11/06 22:06:19 by tapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *loop;
	t_list *temp;

	loop = *lst;
	while (loop)
	{
		temp = loop;
		del(temp->content);
		free(temp);
		loop = loop->next;
	}
	*lst = NULL;
}
