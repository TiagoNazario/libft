/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnazario <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:37:13 by tnazario          #+#    #+#             */
/*   Updated: 2022/12/01 17:37:16 by tnazario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*going_to_end;

	if (!*lst)
	{
		(*lst) = new;
		return ;
	}
	going_to_end = *lst;
	while (going_to_end->next != NULL)
		going_to_end = going_to_end->next;
	going_to_end->next = new;
}
