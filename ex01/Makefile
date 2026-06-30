# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/30 11:36:13 by jhvalenc          #+#    #+#              #
#    Updated: 2026/06/30 11:37:03 by jhvalenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = zombie

CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98

SRCS        = Zombie.cpp \
	      zombieHorde.cpp \
	      main.cpp

OBJS        = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
