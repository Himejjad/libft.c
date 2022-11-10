/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:43:57 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/09 23:30:53 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



char *ft_strjoin(char const *s1, char const *s2)
{
    char    *s11;
    char    *s22;
    char    *join;
    int i;
    int x;

    x = 0;
    s11 = (char *)s1;
    s22 = (char *)s2;
    i = ft_strlen(s11) + ft_strlen(s22);
    join = malloc(sizeof(char) * (i + 1));
    if (!join)
        return (NULL);
    while(s11[x])
    {
        join[x] = s11[x];
        x++;
    }
    i = 0;
    while (s22[i])
        join[x++] = s22[i++];
    join[x] = '\0';
    return (join);
}
// int main()
// {
//     char a[] = "";
//     char b[] = "";
//     printf("%s\n", ft_strjoin(a, b));
// }