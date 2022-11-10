/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:42:53 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/09 23:15:30 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *dst1;
    unsigned char *src1;
    
    i = 0;
    dst1 = (unsigned char *)dst;
    src1 = (unsigned char *)src;
    if (src == 0 && dst == 0)
    return 0;
    while (i < n)
    {
        dst1[i] = src1[i];
        i++;
    }
    return (dst);

}

// int main () {
//    char dest[] = "oldstring";
//    const char src[]  = "newstring";

//    printf("Before ft_memcpy dest = %s, src = %s\n", dest, src);
//    ft_memcpy(dest, src, 9);
//    printf("After memmove dest = %s, src = %s\n", dest, src);

//    return(0);
// }
