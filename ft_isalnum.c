#include <ctype.h>
#include <stdio.h>
 int ft_isalnum(int c)
 {
    if ((c >= q'0' && c <= '9') || (c >= 'a' && c <= 'z' )|| (c <= 'A' && c >= 'Z' ))
    {
        return 1;
    }
return 0;
}
     int main ()
{
    printf("%i\n",ft_isalnum('a'));
}
