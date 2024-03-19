/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 00:16:14 by darikan           #+#    #+#             */
/*   Updated: 2024/03/01 19:34:26 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_select(t_stack **a_stack, t_stack **b_stack, int len)
{
	if (len == 2)
		sa(a_stack);
	if (len == 3)
		triple_sort(a_stack, b_stack);
	if (len == 4)
		quadruple_sort(a_stack, b_stack);
	if (len >= 5)
		binary_radix(a_stack, b_stack);
}

int	find_min(t_stack **a_stack)
{
	t_stack	*temp;
	int	min;

	temp = *a_stack;
	min = (*a_stack)->data;
	while (temp)
	{
		if (min > temp->data)
		{
			min = temp->data;
		}
		temp = temp->next;
	}
	return (min);
}

void	triple_sort(t_stack **a_stack, t_stack **b_stack)
{
	int	min;
	t_stack	*temp;
	int		len;

	len = stack_len(a_stack);
	min = find_min(a_stack);
	temp = *a_stack;
	while (len >= 1)
	{
		temp = *a_stack;
		if (temp->data == min)
		{
			pb(b_stack, a_stack);
			break ;
		}
		rra(a_stack);
		len--;
	}
	temp = *a_stack;
	if (temp->data > temp->next->data)
		sa(a_stack);
	pa(a_stack, b_stack);
}

void	quadruple_sort(t_stack **a_stack, t_stack **b_stack)
{
	int	min;
	t_stack	*temp;
	int		len;

	len = stack_len(a_stack);
	min = find_min(a_stack);
	temp = *a_stack;
	while (len >= 1)
	{
		temp = *a_stack;
		if (temp->data== min)
		{
			pb(b_stack, a_stack);
			break ;
		}
		rra(a_stack);
		len--;
	}
	temp = *a_stack;
	triple_sort(a_stack, b_stack);
	pa(a_stack, b_stack);
}
