/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:42:20 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/02 23:00:08 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void ft_bzero(void *s, size_t n)
 {
    size_t i;
    unsigned char *s1;

    i = 0;
    s1 = (unsigned char *)s;
    while (i < n)
    {
        s1[i] = 0;
        i++;
    }
 }
//  int main( void )
//   {
//     char buffer[10] = "allo";
//     ft_bzero(buffer,10);
//     printf("%s", buffer);
//     return 0;
//   }