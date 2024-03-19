/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_radix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:45:03 by darikan           #+#    #+#             */
/*   Updated: 2024/03/01 19:10:03 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *find_another_min(t_stack **a_stack)
{
	t_stack	*temp;
	t_stack	*min;
	int 	work;

	work = 0;
	temp = *a_stack;
	min = NULL;
	while (temp)
	{
		if ((temp->data < min->data || !work) && (temp->queue_num == -1))
		{
			work = 1;
			min = temp;
		}
		temp = temp->next;
	}
	return (min);
}

void	queue_setter(t_stack **a_stack)
{
	t_stack *min;
	int		i;
	
	min = find_another_min(a_stack);
	i = 0;
	while(min)
	{
		min->queue_num = i;
		i++;
		min = find_another_min(a_stack);
	}
}

void	binary_radix(t_stack **a_stack, t_stack **b_stack)
{
	int push;
	int len;

	push = 0;
	queue_setter(a_stack);
	while(!is_sorted(a_stack))
	{
		len = ft_lstsize(*a_stack);
		while(len)
		{
			if((((*a_stack)->queue_num >> push) & 1) == 0)
				pb(b_stack,a_stack);
			else
				ra(a_stack);
			len--;
		}
		push++;
		while(*b_stack)
			pa(a_stack, b_stack);
	}
}