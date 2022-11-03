/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:43:47 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/03 01:31:11 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_word(char  *s, char c)
{
    int i = 0;
    int x = 0;
    while (s[i])
    {
        if (s[i] != c && s[i + 1] == c)
            x++;
        i++;
    }
    if (s[i - 1] != c )
        x++;
    return (x);
}

int  count_caracters(char *s, char c, int pos)
{
   int i = 0;

   while(s[pos] != c)
   {
        pos++;
        i++;
   }
   return (i);
}


char **ft_split(char const *s, char c)
{
    int x;
    int i;
    int pos;
	char	**new;
    char    *s1;
    int n;
    
    i = 0;
    pos = 0;
    s1 = (char *)s;
    x = count_word(s1, c);
	new = malloc(sizeof(char *) * (x + 1));
    if (!new)
        return NULL;
    if (!s1 || !c)
    return NULL;
    while(i < x)
    {
        while(s1[pos] == c)
            pos++;
        n = count_caracters(s1, c, pos);
        new[i] = ft_substr(s1, pos, n);
        pos += n;
        i++;
    }
    new[i] = 0;
    return (new);
}

// int main()
// {
//     char **sp = ft_split("hamza     bk     papap a jidajdjijdi ajioda dhadh ahduha uadh adijbajbd ijijbdab  hamza", ' ');
//     int i = 0;
//     while(sp[i])
//     {
//         printf("|%s|\n", sp[i]);
//         i++;
//     }
// }
