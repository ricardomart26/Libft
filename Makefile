# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 20:16:53 by rimartin          #+#    #+#              #
#    Updated: 2021/09/17 23:42:30 by rimartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	libft.a

SRC		= 	mem/ft_bzero.c \
			mem/ft_calloc.c \
			mem/ft_memccpy.c \
			mem/ft_memchr.c \
			mem/ft_memcmp.c \
			mem/ft_memcpy.c \
			mem/ft_memmove.c \
			mem/ft_memset.c \
			validation/ft_isalnum.c \
			validation/ft_isalpha.c \
			validation/ft_isascii.c \
			validation/ft_isdigit.c \
			validation/ft_isprint.c \
			validation/check_ext.c \
			print/ft_putchar_fd.c \
			print/ft_putendl_fd.c \
			print/ft_putnbr_fd.c \
			print/ft_putstr_fd.c \
			print/error_msg.c \
			strings/ft_strchr.c \
			strings/ft_split.c \
			strings/ft_strchr.c \
			strings/ft_strdup.c \
			strings/ft_strjoin.c \
			strings/ft_strlcat.c \
			strings/ft_strlcpy.c \
			strings/ft_strlen.c \
			strings/ft_strmapi.c \
			strings/ft_strncmp.c \
			strings/ft_strnstr.c \
			strings/ft_strrchr.c \
			strings/ft_strtrim.c \
			strings/ft_substr.c \
			strings/ft_tolower.c \
			strings/ft_toupper.c \
			strings/strjoin3.c \
			list/ft_lstadd_back.c \
		    list/ft_lstadd_front.c \
		    list/ft_lstclear.c \
		    list/ft_lstdelone.c \
		    list/ft_lstiter.c \
		    list/ft_lstlast.c \
		    list/ft_lstmap.c \
		    list/ft_lstnew.c \
		    list/ft_lstsize.c \
			conv/ft_itoa.c \
			conv/ft_atoi.c \
			conv/atoh.c \
			env/path_env.c
			

OBJ 	= $(SRC:.c=.o)

CC		= gcc -Wall -Werror -Wextra -I $(HEADER)

HEADER	= includes/libft.h

INCLUDES = -I includes/

all		: $(NAME)

$(NAME) : $(OBJ) $(INCLUDES)
			ar rcs $@ $^
			ranlib $(NAME)

clean	:
			rm -f $(OBJ)

fclean	: clean
			rm -f $(NAME)

re		: fclean $(NAME)

.PHONY: all clean fclean re
