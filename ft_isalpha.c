/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 01:22:04 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/02 22:59:51 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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