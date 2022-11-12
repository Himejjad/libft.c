/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:44:28 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/12 20:38:11 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char c, const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s11;
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	if (!set)
		return ((char *)s1);
	s11 = (char *)s1;
	i = 0;
	if ((ft_strlen(s1) == 0 && ft_strlen(set) == 0) || ft_strlen(s1) == 0)
		return (ft_strdup(""));
	len = ft_strlen(s1) - 1;
	while (s11[i] && check(s11[i], set))
		i++;
	while (len > 0 && check(s11[len], set))
		len--;
	return (ft_substr(s11, i, (len - i) + 1));
}
