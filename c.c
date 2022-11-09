#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstc;
	const char	*srccc;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dstc = (char *)dst;
	srccc = (const char *)src;
	while (n--)
		dstc[n] = srccc[n];
	return (dst);
}


#include <stdio.h>
#include <string.h>
int main(void)
{
    int dst[] = {7, 2 , 3, 4};
    int src[] = {45, 63};
    char *s = memcpy(dst, src, 5);
    //puts(dst);
    printf("\n");
    printf("%d %d %d %d %d %d %d %d", src[0], src[1], src[2], src[3], src[4], src[5], src[6], src[7]);
    printf("\n");
    printf("%d %d %d %d", dst[0], dst[1], dst[2], dst[3]);
    printf("\n");
    
}
