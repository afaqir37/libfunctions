/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:40:21 by afaqir            #+#    #+#             */
/*   Updated: 2022/11/09 00:43:45 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;
	size_t	j;
	char	*t;
	size_t	lens;

	if (!s)
		return (NULL);
	t = (char *)s;
	i = start;
	j = 0;
	lens = ft_strlen(s);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	while (i <= lens && j < len)
	{
		p[j] = s[i];
		j++;
		i++;
	}
	p[j] = '\0';
	return (p);
}
