/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:17:55 by afaqir            #+#    #+#             */
/*   Updated: 2022/11/08 22:19:19 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s;
	unsigned char	*r;
	size_t			i;

	i = 0;
	s = (unsigned char *)s1;
	r = (unsigned char *)s2;
	while (i < n)
	{
		if (s[i] != r[i])
			return (s[i] - r[i]);
		i++;
	}
	return (0);
}
