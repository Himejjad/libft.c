#include <ctype.h>
#include <stdio.h>
int ft_isprint(int c)
{
    if (c >= 040 && c<= 176)
    return 1;
    else 
    return 0;
}
int main ()
{
    printf("%d\n" , ft_isprint(32));
}