/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:55:24 by darikan           #+#    #+#             */
/*   Updated: 2024/03/01 18:32:58 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int	count;
	t_stack	*node;
    
	count = 0;
	node = lst;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
