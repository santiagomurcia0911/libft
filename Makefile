NAME = libft.a

SRCS = ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c\
	  ft_strlen.c \
	  ft_tolower.c \
	  ft_strlcpy.c \
	  ft_toupper.c \
	  ft_strlcat.c \
	  ft_atoi.c \
	  ft_strncmp.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memcmp.c \
	  ft_memchr.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strnstr.c \
	  ft_memmove.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_split.c
BONUS_S = ft_lstnew.c \
		  ft_lstadd_front.c \
		  ft_lstsize.c \
		  ft_lstlast.c \
		  ft_lstadd_back.c
OBJS = ${SRCS:.c=.o}

BONUS_O = ${BONUS_S:.c=.o}
CC = gcc
RM = rm -f
LIBC = ar -rc
FLAGS = -Wall -Wextra -Werror

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I.

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

bonus : ${NAME} ${BONUS_O}
	${LIBC} ${NAME} ${BONUS_O}

fclean: clean
	${RM} ${NAME}

clean:
	${RM} ${OBJS}

re: fclean all

.PHONY: all clean fclean program re .c.o bonus
