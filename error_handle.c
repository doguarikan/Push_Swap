#include "push_swap.h"

void	error_handle(t_stack **stack)
{
	t_stack *temp;

	while((*stack)->next)
	{
		temp = (*stack)->next;
		while(temp)
		{
			if((*stack)->data == temp->data)
			{
				ft_putstr_fd("error!",1);
				exit(1); // terminate program execution
			}
			temp = temp->next;
		}
		stack = &(*stack)->next;
	}
}
