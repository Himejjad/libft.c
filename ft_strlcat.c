/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:19:14 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/17 00:13:58 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <string.h>
 #include <stdio.h>
  size_t ft_strlen(char *s)
 {
    int i;
    i = 0;
    printf("%s\n", s);
    while (s[i] != '\0')
       i++;
    return i;

 }

size_t ft_strlcat(char *dst,char *src)
{
    int i;
    int = 0;

    while (src[i] != '\0')
    {
        


    }
    
} 
int main ()
{
    char dst [] = "qwert";
    char src [] = "qwerty";
    printf("%zu \n",ft_strlcat(dst, src));
    printf("dyelhume = %zu", strlcat(dst, src, 10));
}