/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:08:19 by achemlal          #+#    #+#             */
/*   Updated: 2024/11/14 22:43:42 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p;
	const unsigned char	*q;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	p = (unsigned char *)dst;
	q = (unsigned char *)src;
	i = 0;
	if (p > q)
	{
		while (len--)
		{
			p[len] = q[len];
		}
	}
	else
	{
		while (i++ < len)
		{
			*(p++) = *(q++);
		}
	}
	return (dst);
}
