/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 01:43:13 by darikan           #+#    #+#             */
/*   Updated: 2024/02/25 01:43:13 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*temp;

	if (ft_lstsize(*stack) < 2)
		return ;
	temp = (*stack)->next;
	(*stack)->next = temp->next;
	temp->next = *stack;
	*stack = temp;
}

void	sa(t_stack **a_stack)
{
	swap(a_stack);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b_stack)
{
	swap(b_stack);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a_stack, t_stack **b_stack) //!!!!
{
	if ((ft_lstsize(*a_stack) < 2) || (ft_lstsize(*b_stack) < 2))
		return ;
	swap(a_stack);
	swap(b_stack);
	write(1, "ss\n", 3);
}