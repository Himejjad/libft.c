 #include <string.h>
 #include <stdio.h>
//  size_t ft_strlen(const char *s)
//  {
//     int i;
//     i = 0;
//     while (s[i] != '\0')
//        i++;
//     return i;

//  }

//  int main ()
//  {
    // char i[] = "allo";
    // printf("%zu", ft_strlen(i));
//  }
 size_t ft_strlcpy(char *dst, char *src, size_t dstsize)
{
    int i = 0;
    while (src[i] != '\0' && dst[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    return i;
}
int main ()
{
    char src [] = "ALLOO";
    char dst [] = "133742";
    printf( "%zu",ft_strlcpy(dst, src, 5));
    // pritnf("%d", ft_strlcpy(i));
}