 #include <string.h>
 #include <stdio.h>
int ft_strncmp(char *s1,char *s2, size_t n)
{
   int i;

   i = 0;
   while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
      i++;
   return (s1[i] - s2[i]);
}

int main ()
{
char s1[] = "9185221";
char s2[] = "918221";
printf("dyali : %d \n", ft_strncmp(s1,s2, 3));
printf("dyalhom : %d\n", strncmp(s1,s2, 3));
}