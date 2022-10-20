#include <string.h>
#include <stdio.h>
char *ft_strchr(char *s, int c)
{
    int i = 0;
    while(s[i])
    {
        if (s[i] == c)
        return (&s[i]);
        i++;
    }
    return (NULL);
}

int main()
{
    char a [] = "hamza al";
    printf("%s\n", ft_strchr(a, 'a'));
}
//     char b [] = "";
//     printf("%s\n", ft_strchr(b, NULL));
// }