/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:42:53 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/28 16:57:58 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

 void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;
    unsigned char *dst1;
    unsigned char *src1;

    i = 0;
    dst1 = (unsigned char *)dst;
    src1 = (unsigned char *)src;
    while (i < n)
    {
        dst1[i] = src1[i];
        i++;
    }
    dst1[i] = '\0';
    return (dst1);

}

// int main () {
//    char dest[] = "oldstring";
//    const char src[]  = "newstring";

//    printf("Before ft_memcpy dest = %s, src = %s\n", dest, src);
//    ft_memcpy(dest, src, 9);
//    printf("After memmove dest = %s, src = %s\n", dest, src);

//    return(0);
// }
