/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:44:37 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/28 16:39:28 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
int ft_tolower(int c)
{
    while (c >= 'A' && c <= 'Z')
    c += 32;
    return c;
}
// int main ()
// {
//     char c;
//     c = 'a';
//     c = ft_tolower(c);
//     printf("%c", c);
// }