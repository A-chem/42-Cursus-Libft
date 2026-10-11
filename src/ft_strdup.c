/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:38:18 by achemlal          #+#    #+#             */
/*   Updated: 2024/11/14 22:15:35 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	char	*ptr;

	dest = (char *) malloc(ft_strlen(s1) + 1);
	if (!dest)
		return (NULL);
	ptr = dest;
	while (*s1)
		*(dest++) = *(s1++);
	*dest = '\0';
	return (ptr);
}
