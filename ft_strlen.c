/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 02:24:57 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/02 22:56:44 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
 {
    size_t i;
    
    i = 0;
    while (s[i] != '\0')
       i++;
    return i;
 }
//  int main ()
//  {

//     printf("%zu", ft_strlen("allo"));
//  }