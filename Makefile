NAME = web_serv

CC = clang++
FLAGS = -std=c++98 -g 
HEADERS = truby/includes/connection.hpp
SRCS = truby/srcs/main.cpp

all: $(NAME)

$(NAME):
clean:
fclean:
re:

.PHONY: all clean fclean re