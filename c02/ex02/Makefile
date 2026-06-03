CPP = c++
DEBUG = 0

ifeq ($(DEBUG), 0)
	DDEBUG = -DDEBUG=0
else
	DDEBUG = -DDEBUG=1
endif

CPPFLAGS = -Wall -Werror -Wextra -O3 -std=c++98 $(DDEBUG)
RM = rm -rf

SRC = main.cpp Fixed.cpp
HEADER = Fixed.hpp

NAME = Fixed

$(NAME):
	$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re