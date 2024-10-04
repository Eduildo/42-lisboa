NAME = get_next_line.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar -rcs
INCLUDE = get_next_line.h
SOURCES = get_next_line.c get_next_line_utils.c
OBJECTS = $(SOURCES:.c=.o)
RANLIB = ranlib

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)
	$(RANLIB) $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re
