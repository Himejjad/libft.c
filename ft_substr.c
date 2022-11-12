/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:44:32 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/12 20:38:15 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	x;
	char	*s1;
	char	*new;

	i = 0;
	x = 0;
	s1 = (char *)s;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s1))
		return (ft_strdup(""));
	while (i < len && s1[start + i])
		i++;
	new = malloc(i + 1);
	if (!new)
		return (0);
	while (x < i)
	{
		new[x] = s1[start + x];
		x++;
	}
	new[x] = '\0';
	return (new);
}
