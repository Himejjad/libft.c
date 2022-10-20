/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 02:13:55 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/20 20:53:15 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
int ft_isdigit (int i)
{
if (i <= 9 && i >= 0)
return i;
else 
return (0);

}

// int main ()
// {
//     int i = 83;
//     i = ft_isdigit(i);
//     printf ("%d\n" , i);
// }
