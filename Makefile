# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 12:08:32 by cfiora            #+#    #+#              #
#    Updated: 2021/08/04 21:30:23 by cfiora           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = ft_printf.h

CC = gcc
CFLAGS = -I -c -Wall -Wextra -Werror 

SOURCES =  ft_printf.c \
libft.c \
ft_itoa.c \
print_c.c print_d.c print_p.c print_s.c print_u.c print_x.c\

OBJECTS = $(SOURCES:.c=.o)

BLUE = \033[1;36m 
PINK = \033[1;35m
RESET = \033[0m

.PHONY: all bonus clean fclean re

all: $(NAME)
	@echo $?

$(NAME): $(OBJECTS) $(HEADER)
	@echo "$(BLUE)...\n$(RESET)\c"
	ar rc $(NAME) $?
	@ranlib $(NAME)
	@echo "\n$(NAME): $(BLUE) object files are created $(RESET)"
	@echo "$(NAME): $(BLUE) $(NAME) created $(RESET)"

clean:  
	@rm -rf $(OBJECTS) $(OBJECTS_B)
	@echo "$(NAME): $(PINK) object files are deleted $(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME): $(PINK) $(NAME) deleted $(RESET)"

re:
	@$(MAKE) fclean
	@$(MAKE) all