/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:17:19 by achemlal          #+#    #+#             */
/*   Updated: 2024/10/29 14:13:12 by achemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(const unsigned char *) s1 != *(const unsigned char *) s2)
			return (*(const unsigned char *) s1 - *(const unsigned char *) s2);
		s1 = (const unsigned char *) s1 + 1;
		s2 = (const unsigned char *) s2 +1;
		n--;
	}
	return (0);
}
