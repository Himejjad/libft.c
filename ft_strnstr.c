/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:42:02 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/28 21:38:05 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strnstr(char *s1, char *s2, size_t len)
{
	size_t i;
	size_t x;
	size_t n;

	i = 0;
	if (s2[i] == '\0')
	return (&s1[i]);
	while(s1[i] && i < len - 1)
	{
		if (s1[i] == s2[0])
		{
			x = 0;
			n = i;
			while(s1[n] && s2[x] && s1[n] == s2[x])
			{
				n++;
				x++;
			}
			if (s2[x] == '\0')
				return (&s1[i]);
		}
		i++;
	}
	return (&s1[i]);
}

// int main ()
// {
// 	printf("dyalhom >>>>>> \n %s \n", strnstr("hello hamza ", "", 4));
// 	printf("dyali >>>>>> \n %s \n", ft_strnstr("hello hamza ", "", 4));
// }
