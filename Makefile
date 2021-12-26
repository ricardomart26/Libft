# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 20:16:53 by rimartin          #+#    #+#              #
#    Updated: 2021/12/26 18:33:35 by ricardo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc -Wall -Werror -Wextra -I $(HEADER)

NAME 	= 	libft.a

SRC		= 	mem/ft_bzero.c \
			mem/ft_calloc.c \
			mem/ft_memccpy.c \
			mem/ft_memchr.c \
			mem/ft_memcmp.c \
			mem/ft_memcpy.c \
			mem/ft_memmove.c \
			mem/ft_memset.c \
			mem/ft_guards.c \
			validate/ft_isalnum.c \
			validate/ft_isalpha.c \
			validate/ft_isascii.c \
			validate/ft_isdigit.c \
			validate/ft_isprint.c \
			validate/ft_isspace.c \
			validate/ft_check_ext.c \
			print/ft_putchar_fd.c \
			print/ft_putendl_fd.c \
			print/ft_putnbr_fd.c \
			print/ft_putstr_fd.c \
			print/ft_error_msg.c \
			print/ft_print_dp.c \
			strings/ft_strchr.c \
			strings/ft_split.c \
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
			strings/ft_str3join.c \
			strings/ft_find_word.c \
			strings/ft_find_c_in_str.c \
			list/ft_lstadd_back.c \
		    list/ft_lstadd_front.c \
		    list/ft_lstclear.c \
		    list/ft_lstdelone.c \
		    list/ft_lstiter.c \
		    list/ft_lstlast.c \
		    list/ft_lstmap.c \
		    list/ft_lstnew.c \
		    list/ft_lstsize.c \
		    list/ft_convert_list_to_dp.c \
			conv/ft_itoa.c \
			conv/ft_atoi.c \
			conv/ft_htoa.c \
			env/ft_env_path.c \
			math/check_range.c \
			fcntl/ft_gnl.c
			

REMOVE_OBJ = $(shell find . -name *.o)

HEADER	= includes

DEPS = $(shell find $(HEADER) -name *.h)

INCLUDES = -I $(HEADER) -I $(HEADER_GET)

LIBS = -L./$(HEADER) -lft

OBJ 	= $(SRC:%.c=%.o)

OBJ_DIR = Objs

Objs/%.o: %.c
	$(CC) $(INCLUDES) -c -o $@ $<
	
all		: $(NAME)

$(NAME) : $(OBJ) $(DEPS) $(DEPS_GET)
			mkdir -p Objs
			mv $(OBJ) Objs
			ar rcs $@ Objs/*.o
			ranlib $(NAME)

clean	:
			rm -f Objs/*.o

fup:
			rm -f $(REMOVE_OBJ)

fclean	: clean fup
			rm -f $(NAME)

re		: fclean $(NAME)

.PHONY: all clean fclean re
