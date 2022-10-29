/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:44:45 by himejjad          #+#    #+#             */
/*   Updated: 2022/10/29 01:53:05 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit (int i);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(char *s, int c);
size_t ft_strlcpy(char * dst, const char * src, size_t dstsize);
size_t ft_strlen(const char *s);
char *ft_strrchr(char *s, int c);
char *ft_strnstr(char *s1, char *s2, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void * dst, const void * src, size_t n);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
char *ft_strdup(const char *s1);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int,char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
int ft_atoi(const char *str);
void ft_putnbr_fd(int n, int fd);
void *calloc(size_t count, size_t size);
int ft_strncmp(char *s1,char *s2, size_t n);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);





#endif
