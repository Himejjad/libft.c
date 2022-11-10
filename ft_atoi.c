/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:42:13 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/09 23:14:36 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int ft_atoi(const char *str)
{
    unsigned i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
        if (str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-')
            sign *= -1;
            i++;
        }
        while (str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + str[i] - 48;
            i++;
        }
        return (result * sign);
}

//     int main(void)
// {
//     printf("%i\n", ft_atoi(" -123junk"));
//     printf("%i\n", ft_atoi(" +321dust"));
//     printf("%i\n", ft_atoi("0"));
//     printf("%i\n", ft_atoi("0042")); 
//     printf("%i\n", ft_atoi("0x2A")); 
//     printf("%i\n", ft_atoi("junk")); 
//     printf("%i\n", ft_atoi("2147483648")); 
// }

