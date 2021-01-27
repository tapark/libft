/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapark <tapark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 13:08:11 by tapark            #+#    #+#             */
/*   Updated: 2020/10/21 19:40:50 by tapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_lst;

	new_lst = *lst;
	if (!*lst)
		*lst = new;
	else
	{
		while (new_lst->next)
		{
			new_lst = new_lst->next;
		}
		new_lst->next = new;
	}
}
