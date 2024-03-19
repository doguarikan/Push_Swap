/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:21:32 by darikan           #+#    #+#             */
/*   Updated: 2024/03/01 18:52:31 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	i;

	if (src == dest || size == 0)
	{
		return (dest);
	}
	i = 0;
	while (i < size)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}
