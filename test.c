#include "libft.h"

int recu(int a)

{
  
  if (a <= 0 && a >= 9)
{
    recu(a + 1);
    write(1, &a, 1);
    a++;
}
}
int main()
{
   recu(0);
}