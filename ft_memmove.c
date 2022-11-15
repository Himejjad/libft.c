/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:43:01 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/14 04:34:48 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (dst1 > src1)
	{
		while (len--)
		{
			dst1[len] = src1[len];
		}
		return (dst1);
	}
	return (ft_memcpy(dst1, src1, len));
}
