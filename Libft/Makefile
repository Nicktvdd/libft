CC = gcc -c
CFLAGS = -Wall -Werror -Wextra
LDFLAGS = libft.h
SRCFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
	ft_toupper.c ft_tolower.c ft_strnstr.c ft_memset.c ft_bzero.c ft_memmove.c ft_memcpy.c ft_strlcpy.c \
	ft_strlcat.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_atoi.c ft_calloc.c
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

test: all 
	gcc libft.a testfile.c 
	./a.out
	make fclean
	