/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:44:11 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/09 23:31:12 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
    size_t i;
    size_t x;

    x = ft_strlen(src);
    i = 0;
    if (dstsize != 0)
    {
        while (src[i] && i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
            }
            dst[i] = '\0';
    }
    return (x);
}
// int main ()
// {
//     char src [] = "ALLOOO";
//     char dst [] = "133742";
//     printf( "%zu \n",ft_strlcpy(dst, src, 4));
//     printf( "%zu",strlcpy(dst, src, 4));
//     // pritnf("%d", ft_strlcpy(i));
// }