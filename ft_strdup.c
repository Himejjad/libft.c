/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:41:14 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/01 02:47:33 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strdup(const char *s1)
{
    char    *s11;
    char    *s22;
    int i;
    int x;  


    s11 = (char *)s1;
    i = 0;
    x = 0;
    s22 = malloc(sizeof(char) * (ft_strlen(s11) + 1));
    if(!s22)
        return (NULL);
    while (s11[i])
    {
        s22[x] = s11[i];
        x++;
        i++;
    }
    s22[x] = '\0';
    return (s22);

}
// int main()
// {
//     char source[] = "";
 
//     char* target = ft_strdup(source);
 
//     printf("%s\n", target);
//     return 0;
// }
