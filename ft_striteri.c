/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:43:54 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/04 15:55:14 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void abc(unsigned int i, char *c)
{
    i = 0;
    c[i] += 1;
}

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    unsigned int  i;

    i = 0;

    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
// int main()
// {
//     char a[] = "abc";
//     ft_striteri(a, &abc);
//     printf("---%s\n", a);
// }