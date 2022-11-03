/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:44:32 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/02 22:57:16 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *s1;
    char *new;

    s1 = (char *)s;
    if (!s)
        return (NULL);
    if (start >= ft_strlen(s1))
        len = 0;
    i = 0;
    while (s1[i] && i < len)
        i++;
    new = malloc(i + 1);
    if (!new)
        return 0;
    i = 0;
    while (i < len && s1[i])
    {
        new[i] = s1[start];
        i++;
        start++;
    }
    new[i] = '\0';
    return (new);
}
// int main()
// {
// 	char src[] = "substrjfunction Implementation";

// 	int m = 7;
// 	int n = 12;

// 	char* dest = ft_substr(src, m, n);

// 	printf("%s\n", dest);
// }
