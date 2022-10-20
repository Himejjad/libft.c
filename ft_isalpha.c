/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 01:22:04 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/20 20:52:10 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z' )|| (c >= 'A' && c <= 'Z') )
        return 1;
    else 
        return 0;
}
// #include <stdio.h>
// int main ()
// {
//     printf("%i" , ft_isalpha('b'));
// }