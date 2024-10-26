OBJS = $(SRC:.c=.o) 
FLAGS = -Wall -Wextra -Werror
CC = gcc 
HEADER = libft.h
LIB = libft.a
SRC = ft_isprint.c 
ARCH = ar rcs
TST = func_ts/tst_isprint.c
NAME = -lft
all: $(LIB) program

#creat  obj0
$(OBJS): $(SRC)
		$(CC) $(FLAGS) -c $(SRC)  
#creat static lib
$(LIB) : $(OBJS)
		$(ARCH) $(LIB)  $(OBJS)
#creat program:
program: $(TST) $(LIB)
		$(CC) $(FLAGS) -I. $(TST) -L. $(NAME) -o program
arch:
		${ARCH} ${TST} -L. $(NAME) -o progam  
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f program
