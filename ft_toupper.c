#include <stdio.h>
#include <ctype.h>
int ft_toupper(int c)
{
    while (c >= 'a' && c <= 'z')
    c -= 32;
    return c;
}
int main ()
{
    char c;
    c = 'h';
    c = ft_toupper(c);
    printf("%c", c);
}