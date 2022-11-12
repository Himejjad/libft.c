/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:44:25 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/12 20:38:06 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	char	*x;
	int		i;

	i = 0;
	s1 = (char *)s;
	c = (char)c;
	x = NULL;
	if (c == 0)
		return (s1 + ft_strlen(s1));
	while (s1[i])
	{
		if (s1[i] == c)
			x = s1 + i;
			i++;
	}
	return (x);
}
