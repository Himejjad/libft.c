/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 02:55:02 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/12 20:36:33 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa2(long int nbr, long int nb, int x, int j)
{
	char	*s;
	int		i;

	while (nb > 0)
	{
		nb = nb / 10;
		x++;
	}
	s = malloc((x + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[x] = '\0';
	x--;
	while (x >= 0)
	{
		i = nbr % 10;
		s[x--] = i + 48;
		nbr = nbr / 10;
	}
	if (j == 0)
		s[0] = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	long int	nb;
	int			j;
	int			x;

	x = 0;
	j = 1;
	nb = n;
	nbr = nb;
	if (nb == 0)
		return (ft_strdup("0"));
	if (nb < 0)
	{
		nb = nb * -1;
		nbr = nbr * -1;
		j--;
		x++;
	}
	return (ft_itoa2(nbr, nb, x, j));
}
