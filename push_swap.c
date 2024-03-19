/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:29:22 by darikan           #+#    #+#             */
/*   Updated: 2024/03/01 19:08:00 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	**a_stack;
	t_stack	**b_stack;
	int		len;
	int		s_or_not;

	s_or_not = 0;
	if (argc < 2)
		return (0);
	a_stack = (t_stack **)malloc(sizeof(t_stack *));
	b_stack = (t_stack **)malloc(sizeof(t_stack *));
	*a_stack = NULL;
	*b_stack = NULL;
	new_stack(a_stack, argv);
	neg_setter(a_stack);
	s_or_not = is_sorted(a_stack);
	if (s_or_not)
		return (0);
	len = stack_len(a_stack);
	sort_select(a_stack, b_stack, len);
	return (0);
}
