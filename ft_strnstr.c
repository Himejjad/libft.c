/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:42:02 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/14 04:18:38 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	x;
	size_t	n;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)&s1[i]);
	while (s1[i] && i < len)
	{
		if (s1[i] == s2[0])
		{
			x = 0;
			n = i;
			while (s1[n] && s1[x] && s1[n] == s2[x] && n < len)
			{
				n++;
				x++;
			}
			if (s2[x] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
