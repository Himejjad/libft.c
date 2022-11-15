# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 23:14:14 by himejjad          #+#    #+#              #
#    Updated: 2022/11/12 22:02:43 by himejjad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c\
ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_itoa.c ft_putendl_fd.c\
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_memcpy.c ft_calloc.c\
ft_putnbr_fd.c ft_strlen.c ft_striteri.c ft_atoi.c\
ft_toupper.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c\
ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_strchr.c\
ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c\

OBJS = ${SRCS:.c=.o}


all: $(NAME)

$(NAME): ${OBJS} 
		ar rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY : clean fclean all re