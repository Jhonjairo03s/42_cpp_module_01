# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/01 11:40:19 by jhvalenc          #+#    #+#              #
#    Updated: 2026/07/01 19:08:45 by jhvalenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = weapon

CXXFLAGS    = -Wall -Wextra -Werror -std=c++98

SRCS        = Weapon.cpp \
              HumanA.cpp \
	      HumanB.cpp \
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
