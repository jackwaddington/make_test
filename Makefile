CC=cc
CFLAGS=-Wall -Wextra -Werror

SRCS=ft_add_one.c ft_add_two.c ft_putchar.c ft_add_one.c ft_main.c
OBJS=$(SRCS:.c=.o) 

BIN=make_test

this_does_not_need_to_be_called_all: $(BIN)

$(BIN): $(OBJS)
	$(CC) -o  $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(BIN) *.o

fclean: clean
	rm -f $(BIN).a
	
re: fclean all
