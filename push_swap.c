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

void	str_checker(const char *str)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (str[j])
	{
		if (str[j] == ' ')
		{
			i++;
		}
		j++;
	}
	if (j == i)
		exit(0);
}

int	main(int argc, char **argv)
{
	t_stack	**a_stack;
	t_stack	**b_stack;
	int		len;
	int		s_or_not;

	if (argc < 2)
		return (0);
	a_stack = (t_stack **)malloc(sizeof(t_stack *));
	b_stack = (t_stack **)malloc(sizeof(t_stack *));
	*a_stack = NULL;
	*b_stack = NULL;
	new_stack(a_stack, argv);
	s_or_not = is_sorted(a_stack);
	if (s_or_not)
		return (0);
	neg_setter(a_stack);
	len = stack_len(a_stack);
	sort_select(a_stack, b_stack, len);
	return (0);
}
