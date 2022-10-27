CC = gcc -c
CFLAGS = -Wall -Werror -Wextra
LDFLAGS = libft.h
SRCFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c ft_strnstr.c 
OBJFILES = *.o
TARGET = libft.a

all: compile $(TARGET)

compile:
	gcc $(CFLAGS) -c $(SRCFILES) -I $(LDFLAGS)

$(TARGET):
	ar rc $(TARGET) $(OBJFILES)

clean:
	rm -f $(OBJFILES) *~

fclean: clean
	rm -f $(TARGET)

re: fclean all