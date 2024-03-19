/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 01:43:01 by darikan           #+#    #+#             */
/*   Updated: 2024/02/25 01:43:01 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverse_rot(t_stack **stack)
{
	t_stack *newfirst;
	t_stack *newlast;
//!!
	newfirst = ft_lstlast(*stack); 
	newlast = *stack;
	while(newlast->next->next)
		newlast = newlast->next;
	newlast->next = NULL;
	newfirst->next = *stack;
	*stack = newfirst;
}

void rra(t_stack **a_stack)
{
	reverse_rot(a_stack);
	write(1, "rra\n", 4);
}

void rrb(t_stack **b_stack)
{
	reverse_rot(b_stack);
	write(1, "rrb\n", 4);
}

void rrr(t_stack **a_stack,t_stack **b_stack)
{
	//!!
	reverse_rot(a_stack);
	reverse_rot(b_stack);
	write(1, "rrr\n", 4);
}