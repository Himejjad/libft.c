/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:44:25 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/10 02:20:33 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
 
char *ft_strrchr(const char *s, int c)
{
    int i;
    char    *s1;
    char    *x; 

    i = 0;
    s1 = (char *)s;
    x = NULL;
    if ( c == 0)
    return (s1 + ft_strlen(s1));
    while(s1[i])
    {
        if (s1[i] == (char)c)
            x = s1 + i;
            i++;   
    }
    return (x);
}

// int main()
// {
//     // char *src = "\0";
//     // char *d1 = strrchr(src, 'a');
//     // char *d2 = ft_strrchr(src, 'a');
//     printf("%s\n",strrchr("teste", '\0'));
//      printf("%s\n",ft_strrchr("teste", '\0'));
// }