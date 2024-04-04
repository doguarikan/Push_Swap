/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 01:43:10 by darikan           #+#    #+#             */
/*   Updated: 2024/02/25 01:43:10 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **source, t_stack **dest)
{
	t_stack *temp;

	if (ft_lstsize(*source) == 0) //////!!!??????????
		return ;
	temp = *source;
	*source = (*source)->next;
	ft_lstadd_front(dest, temp);
}

void	pa(t_stack **dest_a, t_stack **src_b)
{
	push(src_b, dest_a);
	write(1,"pa\n",3);
}

void	pb(t_stack **dest_b, t_stack **src_a)
{
	push(src_a, dest_b);
	write(1,"pb\n",3);
}
