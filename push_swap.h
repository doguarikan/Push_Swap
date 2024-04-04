#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <stdio.h>

typedef struct s_data
{
	int				data;
	int				queue_num;
	struct s_data	*next;
}					t_stack;

void	swap(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

void	push(t_stack **source, t_stack **dest);
void	pa(t_stack **dest_a, t_stack **src_b);
void	pb(t_stack **dest_b, t_stack **src_a);

void	rotate(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

void	reverse_rot(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a,t_stack **b);

void	new_stack(t_stack **a_stack,char **argv);
void	neg_setter(t_stack **a_stack);
void	new_stack(t_stack **a_stack,char **argv);
int		stack_len(t_stack **a_stack);
int		is_sorted(t_stack **a_stack);

void	sort_select(t_stack **a_stack, t_stack **b_stack, int len);
void	triple_sort(t_stack **a_stack);
void	quadruple_sort(t_stack **a_stack, t_stack **b_stack);
void	quintuple_sort(t_stack **a_stack, t_stack **b_stack);
void	error_handle(t_stack **stack);
int		find_min(t_stack **a_stack);
void	queue_setter(t_stack **a_stack);
void	str_checker(const char *str);

void	binary_radix(t_stack **a_stack, t_stack **b_stack);

void	ft_lstadd_front(t_stack **lst, t_stack *neww);
void	ft_lstadd_back(t_stack **lst, t_stack *neww);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strdup(const char *str);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strchr(const char *str, int ch);
int		ft_isdigit(int input);
int		ft_atoi(const char *str);
int		ft_lstsize(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstnew(int content);
t_stack	*ft_lstlast(t_stack *lst);
size_t	ft_strlcpy(char *dest, const char *src, size_t maxlen);
size_t	ft_strlen(const char *str);

#endif