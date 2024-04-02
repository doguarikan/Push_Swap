#include "push_swap.h"

void	st_error()
{
	write(2, "Error\n", 6);
	exit(0);
}

void	error_handle(t_stack **stack)
{
	t_stack	*temp;

	while ((*stack)->next)
	{
		temp = (*stack)->next;
		while (temp)
		{
			if ((*stack)->data == temp->data)
				st_error();
			temp = temp->next;
		}
		stack = &(*stack)->next;
	}
}
