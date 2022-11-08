/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:43:47 by himejjad          #+#    #+#             */
/*   Updated: 2022/11/08 00:41:35 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(const char *s, char c)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i + 1] == '\0' && s[i] != c))
			x++;
		i++;
	}
	return (x);
}

size_t	count_caracters(const char *s, char c, size_t pos)
{
	size_t	i;

	i = 0;
	while (s[pos] != c && s[pos] != '\0')
	{
		pos++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t		n;
	size_t		i;
	size_t		pos;
	size_t		x;
	char	**new;

	i = 0;
	pos = 0;
	x = count_word(s, c);
	new = malloc(sizeof(char *) * (x + 1));
	if (!new)
		return (NULL);
	new[x] = NULL;
	size_t j = 0;
	while (s[i] && j < x)
	{
		while (s[pos] == c)
			pos++;
		n = count_caracters(s, c, pos);
		new[i] = ft_substr(s, pos, n);
		pos += n;
		i++;
		j++;
	}
	return (new);
}

// int main()
// {
//     char **tab ;
// 	tab = ft_split("tripouille!", 0);
// 	if (tab)
// 		strcmp(tab[0], "tripouille!") ? printf("false") : printf("true");
// 	system("leaks a.out");
	// int i = 0 ;
	// while(tab[i])
	// {
	// 	printf("strings |%d| : |%s|\n",i,tab[i]);
	// 	i++;
	// }
