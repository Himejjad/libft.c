#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int ac, char **av)
{
    int i, x;
    i = 1;
    x = 0;
    while(av[i])
    {
        x = 0;
        while(av[i][x])
        {
            if (av[i][x] == 'a')
                write(1, "o", 1);
            else
                write(1, &av[i][x], 1);
            x++;
        }
        write(1, "\n", 1);
}
        i++;
    }