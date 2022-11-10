/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:44:28 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/10 01:56:33 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int check(char c, const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
        return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    char *s11;
    size_t len;

    s11 = (char *)s1;
    i = 0;
    len = ft_strlen(s1) - 1;
    if (!s11 && !set)
		return (NULL);
	if (!set)
		return (s11);
   while (s11[i] && check(s11[i], set))
		i++;
	while (len > 0 && check(s11[len], set))
		len--;
	return (ft_substr(s11, i, (len - i) + 1));
}
// int main()
// {
//     printf("%s\n", ft_strtrim("", ""));
// }