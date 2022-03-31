/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snicky <snicky@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:10:59 by snicky            #+#    #+#             */
/*   Updated: 2021/10/19 22:57:03 by snicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*b1;
	char		*b2;

	b2 = dst;
	b1 = src;
	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (i < n)
	{
		b2[i] = b1[i];
		i++;
	}
	return (dst);
}
