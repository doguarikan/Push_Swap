/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:51:14 by darikan           #+#    #+#             */
/*   Updated: 2024/03/01 18:44:03 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strchr(const char *str, int ch)
{
	while ((*str != '\0') && (*str != (char)ch))
	{
		str++;
	}
	if (*str == (char)ch)
	{
		return ((char *)str);
	}
	return (NULL);
}
