/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:56:13 by darikan           #+#    #+#             */
/*   Updated: 2024/03/01 18:38:29 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h" // libft mi bu nu

void	atoi_error()
{
	write(2, "Error\n", 6);
	exit(0);
}

int	ft_atoi(const char *str) //error unutma over int
{
	int			i;
	int			sign;
	long int	num;

	i = 0;
	num = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
		num = (num * 10) + (str[i++] - '0');
	if ((num > 2147483648 && sign == -1)
		|| (num > 2147483647 && sign == 1))
		atoi_error();
	if ((str[i] && !ft_isdigit(str[i]) && str[i] != 10)
		|| (str[i] == '-' && !str[1]))
		atoi_error();
	return ((int)(sign * num));
}
