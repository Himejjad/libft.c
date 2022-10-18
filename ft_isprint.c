/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:42:20 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/18 21:42:25 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
int ft_isprint(int c)
{
    if (c >= 040 && c<= 176)
    return 1;
    else 
    return 0;
}
int main ()
{
    printf("%d\n" , ft_isprint(32));
}