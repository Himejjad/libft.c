/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:31:35 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/09 22:33:15 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
int ft_isascii(int c)
{
    if (c >= 0 && c <= 177)
    return 1;
    else 
    return 0;
}
int main ()
{
    printf("%d" , ft_isascii(1));
}