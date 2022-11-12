/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:43:57 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/12 20:37:33 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		x;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	else if (!s1 && !s2)
		return (NULL);
	x = 0;
	i = ft_strlen(s1) + ft_strlen(s2);
	join = malloc(sizeof(char) * (i + 1));
	if (!join)
		return (NULL);
	while (s1[x])
	{
		join[x] = s1[x];
		x++;
	}
	i = 0;
	while (s2[i])
		join[x++] = s2[i++];
	join[x] = '\0';
	return (join);
}
