CPP = c++
DEBUG = 1
CPPFLAGS = $(if $(DBEUG), -Wall -Werror -Wextra -O3 -std=c++98, -Wall -Werror -Wextra -O3 -std=c++98 -DDEBUG=0)
RM = rm -rf

SRC = Animal.cpp Cats.cpp Dog.cpp main.cpp Brain.cpp
HEADER = Animal.hpp Cats.hpp Dog.hpp Brain.hpp

WRGSRC = WrongAnimal.cpp WrongCats.cpp
WRGHEADER = WrongAnimal.hpp WrongCats.hpp

ALL_SRC = $(SRC) $(WRGSRC)
ALL_HEADER = $(HEADER) $(WRGHEADER)

NAME = animal

$(NAME): $(ALL_SRC) $(ALL_HEADER)
	$(CPP) $(CPPFLAGS) $(ALL_SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
