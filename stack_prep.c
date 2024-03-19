/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_prep.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:45:28 by darikan           #+#    #+#             */
/*   Updated: 2024/03/01 19:07:57 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_nodes(t_stack **a_stack, char *argv)
{
	int i;
	char **splitted;
	t_stack *new_node;
	
	i = 0;
	splitted = ft_split(argv, ' ');
	while(splitted[i])
	{
		new_node = ft_lstnew(ft_atoi(splitted[i]));
		ft_lstadd_back(a_stack, new_node);
		i++;
	}
	i = 0;
	while(splitted[i])
		free(splitted[i++]);
	free(splitted);
}

void	new_stack(t_stack **a_stack, char **argv)
{
	t_stack *new_node;
	int i;
	
	i = 1;
	while(argv[i])
	{
		if(ft_strrchr(argv[i],' ')!= NULL)
			split_nodes(a_stack,argv[i]);
		else
		{
			new_node = ft_lstnew(ft_atoi(argv[i]));
			ft_lstadd_back(a_stack,new_node);
		}
		i++;
	}
	error_handle(a_stack);
}

int	is_sorted(t_stack **a_stack)
{
	t_stack	*temp;
	int i;
	int len;

	len = stack_len(a_stack);
	i = 0;
	temp = *a_stack;
	while (temp->next)
	{
		if (temp->data < temp->next->data)
			i++;
		temp = temp->next;
	}
	if(i == len-1)
		return (1);
	return (0);
}

void	neg_setter(t_stack **a_stack) // a stackini alır ve onun queue_num degerini -1 e esitler
{
	t_stack	*temp;

	temp = *a_stack;
	while (temp)
	{
		temp->queue_num = -1;
		temp = temp->next;
	}
}

int	stack_len(t_stack **a_stack)
{
	t_stack	*temp;
	int		len;

	temp = *a_stack;
	len = 0;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
