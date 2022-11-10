/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:43:23 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/09 23:15:46 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *b1;

    i = 0;
    b1 = (unsigned char *)b;
    while (i < len)
    {
        b1[i] = c;
        i++;
    }
    return (b1);
}
// int main()
// {
//     char str[50] = "GeeksForGeeks is for programming geeks.";
//     printf("\nBefore ft_memset(): %s\n", str);
  
//     ft_memset(str + 13, 'A', 8*sizeof(char));
  
//     printf("After ft_memset():  %s", str);
//     return 0;
// }
