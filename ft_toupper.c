/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:44:40 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/28 16:39:45 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
int ft_toupper(int c)
{
    while (c >= 'a' && c <= 'z')
    c -= 32;
    return c;
}
// int main ()
// {
//     char c;
//     c = 'h';
//     c = ft_toupper(c);
//     printf("%c", c);
// }