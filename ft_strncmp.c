/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:44:21 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/28 23:00:53 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <string.h>
 #include <stdio.h>
int ft_strncmp(char *s1,char *s2, size_t n)
{
   size_t i;

   i = 0;
   if (n == 0)
   return 0;
   while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
      i++;
   return (s1[i] - s2[i]);
}

int main ()
{
char s1[] = "\x12\xff\x65\x12\xbd\xde\xad";
char s2[] = "\x12\x02";
printf("dyali : %d \n", ft_strncmp(s1,s2, 10));
printf("dyalhom : %d\n", strncmp(s1,s2, 10));
}