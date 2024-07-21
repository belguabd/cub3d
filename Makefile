# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/10 14:56:23 by belguabd          #+#    #+#              #
#    Updated: 2024/07/21 20:19:34 by belguabd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc -g -fsanitize=address #-Wall -Wextra -Werror

PARSING=parsing
GET_NEXT_LINE=get_next_line
UTILS=utils

NAME = cub3d

MLX_NAME = libmlx42.a
MLX_FLAGS = -Iinclude -lglfw -L"/Users/belguabd/.brew/opt/glfw/lib/"
SRC = main.c \
	$(GET_NEXT_LINE)/get_next_line.c \
	$(GET_NEXT_LINE)/get_next_line_utils.c \
	$(UTILS)/ft_strcmp.c $(UTILS)/ft_strlcat.c $(UTILS)/ft_putendl_fd.c $(UTILS)/ft_split.c \
	$(UTILS)/ft_substr.c $(UTILS)/ft_strtrim.c $(UTILS)/ft_isdigit.c $(UTILS)/ft_atoi.c \
	$(PARSING)/parse.c
	
	


OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ) cub3d.h
	$(CC) $(MLX_FLAGS) $(MLX_NAME) $(OBJ) -o $(NAME)

%.o: %.c cub3d.h get_next_line/get_next_line.h
	$(CC) -c $< -o $@ 
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all