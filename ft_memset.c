/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:25:04 by afaqir            #+#    #+#             */
/*   Updated: 2022/11/08 23:45:17 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	k;
	unsigned char	*s;
	size_t			i;

	k = (unsigned char)c;
	s = (unsigned char *)b;
	i = 0;
	while (i < len)
		s[i++] = k;
	return (b);
}

// int main(void)
// {
// 	int arr[] = {22, 32, 43};
// 	ft_memset(arr + 1, 7, 2);
// 	ft_memset(arr + 1, 223, 1);
	
	
// 	printf("%d", arr[1]);
// }
