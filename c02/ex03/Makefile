CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -O3 -std=c++98
DEBUG = 0

ifeq ($(DEBUG),1)
DFLAG = -DDEBUG=1
else
DFLAG = -DDEBUG=0
endif

RM = rm -rf

SRC = main.cpp Fixed.cpp Point.cpp
HEADER = Fixed.hpp Point.hpp

NAME = bsp

$(NAME):
	$(CPP) $(CPPFLAGS) $(SRC) $(DFLAG) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re