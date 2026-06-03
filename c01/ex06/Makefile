CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRC = Harl.cpp main.cpp

NAME = Harl

$(NAME):
	$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re