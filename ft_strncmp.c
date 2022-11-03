/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/5/20 22:44:21 by himejjad          #+#    #+#             */
/*   Updated: 2022/5/30 23:04:49 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)

{
   size_t i;
   unsigned char *s11;
   unsigned char *s22;


   i = 0;
   
   s11 = (unsigned char *)s1;
   s22 = (unsigned char *)s2;

   if (n == 0)
   return 0;
   while ((s11[i] && s22[i]) && (i < n - 1) && (s11[i] == s22[i]))
      i++;
   return (s11[i] - s22[i]);
}

// int main ()
// {
// char s1[] = "abc\375def";
// char s2[] = "abcxx";
// printf("dyali : %d \n", ft_strncmp(s1,s2, 5));
// printf("dyalhom : %d\n", strncmp(s1,s2, 5));
// }