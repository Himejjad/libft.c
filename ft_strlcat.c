/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:19:14 by himejjjd          #+#    #+#             */
/*   Updated: 2022/11/14 04:16:59 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*src1;
	size_t	i;
	size_t	j;
	size_t	x;

	i = 0;
	j = ft_strlen(dst);
	x = j;
	src1 = (char *)src;
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (src1[i] && j < dstsize - 1)
	{
		dst[j] = src1[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (x + ft_strlen(src));
}
