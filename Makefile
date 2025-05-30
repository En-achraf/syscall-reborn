CC = cc
FLAGS = -Wall -Wextra -Werror

SRC = syscall_reborn/ft_dup2.c syscall_reborn/ft_dup.c
OBJ = $(SRC:.c=.o)

NAME = lib/syscall.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.c: %.o
	$(CC) $(FLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean