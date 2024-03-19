/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 01:43:07 by darikan           #+#    #+#             */
/*   Updated: 2024/02/25 01:43:07 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(t_stack **stack)
{
	t_stack *start;
	t_stack *end;

	//!!
	start = *stack;
	end = ft_lstlast(*stack);
	*stack = (*stack)->next;
	end->next = start;
	start->next = NULL;
}

void ra(t_stack **a_stack)
{
	rotate(a_stack);
	write(1, "ra\n", 3);
}

void rb(t_stack **b_stack)
{
	rotate(b_stack);
	write(1, "rb\n", 3);
}

void rr(t_stack **a_stack, t_stack **b_stack)
{
	//!!
	rotate(a_stack);
	rotate(b_stack);
	write(1, "rr\n", 3);
}