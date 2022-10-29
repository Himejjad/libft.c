/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:42:47 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/29 16:08:45 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *s11;
    unsigned char *s22;
    i = 0;
    s11 = (unsigned char *)s1;
    s22 = (unsigned char *)s2;
    if (n == 0)
    return 0;
    while ( i < n - 1 && s11[i] == s22[i] )
        i++;
    return (s11[i] - s22[i]);  
}

// int main()
// {
//     char a[] = "\xff\xaa\xde\xffMACOSX\xff";
//     char b[] = "\xff\xaa\xde\x02";
//     printf("dyali >>> %d\n", ft_memcmp(a, b, 0));
//     printf("dyalhom >>> %d\n", memcmp(a, b, 0));
// }