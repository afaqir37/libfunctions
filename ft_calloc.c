/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:42:32 by afaqir            #+#    #+#             */
/*   Updated: 2022/11/08 21:44:12 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	char	*d;
	size_t	i;

	i = 0;
	p = malloc(size * count);
	if (!p)
		return (NULL);
	d = ft_memset(p, '\0', size * count);
	return (d);
}
