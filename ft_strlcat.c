/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:19:14 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/29 15:36:43 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t a = ft_strlen(dst);
    
    i = 0;
    if (!src[0])
        return (ft_strlen(dst));
    if (dstsize <= ft_strlen(dst))
        return (ft_strlen(src) + dstsize);
    while(src[i] && i < dstsize - 1)
    {
        dst[a] = src[i];
        i++;
        a++;
    }
    dst[a] = '\0';
    return (ft_strlen(dst));
}

// int main ()
// {
//     char dst [15] = "a";
//     char src [] = "abcd";
//     printf("dyali = %lu \n",ft_strlcat(dst, "lorem ipsum dolor sit amet", 15));
//     printf("dyalhom = %lu\n", strlcat(dst,  "lorem ipsum dolor sit amet", 15));
// }