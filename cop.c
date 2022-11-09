int main(void)
{
    char s[100] = "hello world";
    char d[200];
    char *t = memmove(d, s, strlen(s) + 1);
    puts(s);

}