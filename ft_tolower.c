#include <ctype.h>
#include <stdio.h>
int ft_tolower(int c)
{
    while (c >= 'A' && c <= 'Z')
    {
    c += 32;
    } 
    return c;
}
int main ()
{
    char c;
    c = 'a';
    c = ft_tolower(c);
    printf("%c", c);
}