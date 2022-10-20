 #include "libft.h"
 #include <stdio.h>
     char *ft_strrchr(char *s, int c)
     {
        int i;
        int len;
    
        i = 0;
        len = ft_strlen(s) - 1;
        while(s[len])
        {
            if (s[len] == c)
                return (&s[len]);
            len--;
        }
        return (NULL); 
     }

// int main()
// {
//     char a [] = "AHAAHMZA";
//     printf("%s", ft_strrchr(a, 'H'));
// }