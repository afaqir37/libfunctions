/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:26:42 by afaqir            #+#    #+#             */
/*   Updated: 2022/11/08 22:29:03 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;
	char	*d;

	if (!s)
		return ;
	len = ft_strlen(s);
	d = malloc(len + 1 + 1);
	if (!d)
		return ;
	ft_memcpy(d, s, len);
	d[len] = '\n';
	d[len + 1] = '\0';
	write(fd, d, len + 1);
	free(d);
}
