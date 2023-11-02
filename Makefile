CC=cc
INCDIRS=
OPT=
CFLAGS=-Wall -Wextra -Werror

CFILES=ft_add_one.c ft_add_two.c ft_putchar.c ft_add_one.c ft_main.c
OBJECTS=ft_add_one.o ft_add_two.o ft_putchar.o ft_add_one.o ft_main.o 

BINARY=bin

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) -o  $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(BINARY) *.o

fclean: clean
	rm -f $(BINARY).a
	
re: fclean all
