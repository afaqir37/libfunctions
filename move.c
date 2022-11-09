#include <stdio.h>
#include <string.h>
int main()
{
char csrc[100] = "Geeksfor";
memmove(csrc+5, csrc, strlen(csrc)+1);
printf("%s", csrc);
return 0;
}