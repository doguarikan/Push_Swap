/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:24:58 by darikan           #+#    #+#             */
/*   Updated: 2024/03/01 17:23:37 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack *neww)
{
	t_stack	*node;

	if (!lst)
	{
		return ;
	}
	if (*lst)
	{
		node = ft_lstlast(*lst);
		node->next = neww;
	}
	else
		*lst = neww;
}
