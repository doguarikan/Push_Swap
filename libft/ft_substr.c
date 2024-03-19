/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:38:42 by darikan           #+#    #+#             */
/*   Updated: 2024/03/01 18:48:03 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	max;

	if (!s)
	{
		return (NULL);
	}
	max = 0;
	slen = ft_strlen(s);
	if (start > slen)
	{
		return (ft_strdup(""));
	}
	if (start < slen)
		max = slen - start;
	if (max > len)
		max = len;
	substr = (char *)malloc((sizeof(char)) * max + 1);
	if (!substr)
	{
		return (NULL);
	}
	ft_strlcpy(substr, s + start, max + 1);
	return (substr);
}
