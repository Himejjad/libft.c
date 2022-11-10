/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:42:42 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/09 23:15:21 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n )
	{
		if(str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);  
}                                                       
// int main() {

//     char data[] = "";
//     char chrch [] = {'a', 'z'};
//     const unsigned char size = 5;

//     void * found = ft_memchr( data,chrch[0] , size );
//     if (found == NULL)
//       printf("not found\n");
//     else
//       printf("found\n%s\n", found);

//     found = ft_memchr( data, chrch[1], size );
//     if (found == NULL)
//      printf("not found\n");
//     else
//       printf("found\n%s\n", found);
// }                                                                   