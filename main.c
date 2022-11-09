#include "libft.h"
int main(void)
{
    char s[12] = "hello world";
   ft_bzero(s, 10);
   puts(s);
}