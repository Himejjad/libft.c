/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 02:13:55 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/02 22:59:38 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit (int i)
{
if (i >= '0' && i <= '9')
return 1;
else 
return (0);

}

// int main ()
// {
//     int i = NULL;
//     i = isdigit(i);
//     printf ("%d\n" , i);
// }
