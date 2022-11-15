/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 03:44:51 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/14 04:35:29 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	i = (count * size);
	p = malloc(i);
	if (!p)
		return (NULL);
	ft_bzero (p, i);
	return (p);
}
