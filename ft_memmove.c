/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:43:01 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/29 16:16:37 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
void * ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned int i;
    unsigned char *dst1;
    unsigned char *src1;

    i = 0;
    dst1 = (unsigned char *)dst;
    src1 = (unsigned char *)src;
    while ( i < len)
    {
        dst1[i] = src1[i];
        i++;
    }
    return (dst1);

}
int main ()
{
    char dest[] = "AAA";
    const char src[]  = "";
    // printf("Before memmove >> dest = %s, src = %s\n\n", dest, src);
    printf("%s\n", ft_memmove(dest, src, 0));
    printf("%s", memmove(dest, src, 0));

    // printf("After memmove >> dest = %s, src = %s\n\n", dest, src);
    return 0;
}