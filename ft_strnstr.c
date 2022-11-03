/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:42:02 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/01 00:00:33 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t x;
	size_t n;
    char    *s11;
    char    *s22;

	i = 0;
    s11 = (char *)s1;
    s22 = (char *)s2;
	if (s22[i] == '\0')
		return (&s11[i]);
	while(s11[i] && i < len )
	{
		if (s11[i] == s22[0])
		{
			x = 0;
			n = i;
			while(s11[n] && s11[x] && s11[n] == s22[x] && n  < len )
			{
				n++;
				x++;
			}
			if (s22[x] == '\0')
				return (&s11[i]);
		}
		i++;
	}
	return (NULL);
}

// int main ()
// {
// 	printf("dyalhom >>>>>> %s \n",strnstr("lorem ipsum dolor sit amet", "dolor", 15));
// 	printf("dyali >>>>>>  %s \n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
// }
