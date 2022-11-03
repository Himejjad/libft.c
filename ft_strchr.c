/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:43:51 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/02 22:58:19 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strchr(const char *s, int c)
{
    int i;
    char    *s1;

    i = 0;
    s1 = (char *)s;    
    if (c == 0)
         return (s1 + ft_strlen(s1));
    while(s1[i])
    {
        if (s1[i] == c)
        return (&s1[i]);
        i++;
    }
    return (NULL);
}

// int main()
// {
//     char a [] = "hamza al";
    
//     printf("%s\n", ft_strchr(a, 'a'));
// }