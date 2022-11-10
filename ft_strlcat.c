/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:19:14 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/09 23:30:57 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t a;
    char    *src1;
    int n;
    
    i = 0;
    a = ft_strlen(dst);
    n = a;
    src1 = (char *)src;
    if (dstsize <= ft_strlen(dst))
        return (ft_strlen(src) + dstsize);
    while(src1[i] && a < dstsize - 1)
    {
        dst[a] = src1[i];
        i++;
        a++;
    }
    dst[a] = '\0';
    return (n + ft_strlen(src));
}

// int main ()
// {
//     char dst [14] = "pqrs";
//     char src [] = "abcd";
//     printf("dyali = %lu \n%s\n",ft_strlcat(dst, "abcdefghi", 10), dst);
//     char dst1 [14] = "pqrs";
//     printf("dyalhom = %lu \n%s\n", strlcat(dst1,  "abcdefghi", 10), dst1);
// }