/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:44:25 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/28 21:45:05 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
 #include <stdio.h>
char *ft_strrchr(char *s, int c)
{
    int len;

    len = ft_strlen(s) - 1;
    while(s[len])
    {
        if (s[len] == c)
            return (&s[len]);
        len--;
    }
    return (NULL); 
}

// int main()
// {
//     char a [] = "teste";
//     printf("%s", ft_strrchr(a, 't'));
// }