/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:44:16 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/09 23:31:29 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void tooupp(unsigned int i, char *c)
{
        i = 0;
        c[i] -= 32; 
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int  i;
    unsigned int   len;
    char            *str;

    i = 0;
    if (!s || !f)
        return (0);
    len = ft_strlen(s);
    str = malloc((len + 1) * sizeof(char));
    if (!str)
        return (0);
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
// int main()
// {
// char a[] = "abc";
//     ft_strmapi(a, tooupp);
//     printf("---%s\n", a);
// }
// NUL
// NULL
// 0
// char c = 0;
// char *c 
// [h e l '\0' l o]
