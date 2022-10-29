/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:43:51 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/28 21:22:24 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
char *ft_strchr(char *s, int c)
{
    int i = 0;
    if (!s)
        return (NULL);
    while(s[i])
    {
        if (s[i] == c)
        return (&s[i]);
        i++;
    }
    return (NULL);
}

// int main()
// {
//     char a [] = "hamza al";
    
//     printf("%s\n", ft_strchr(a, 'a'));
// }
//     char b [] = "";
//     printf("%s\n", ft_strchr(b, NULL));
// }