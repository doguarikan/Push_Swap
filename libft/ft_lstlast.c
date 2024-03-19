/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:15:42 by darikan           #+#    #+#             */
/*   Updated: 2024/03/01 18:33:41 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack	*node;

	node = lst;
	if (!lst)
	{
		return (NULL);
	}
	while (node->next != NULL)
	{
		node = node->next;
	}
	return (node);
}
