CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalpha.c ft_isdigit.c main.c ft_toupper.c ft_tolower.c ft_isalnum.c ft_bzero.c ft_isascii.c ft_isprint.c ft_memset.c ft_strlen.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strchr.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCBB = ft_lstnew_bonus.c  ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c 
RM = /bin/rm
NAME = libft.a



all: $(NAME)

$(NAME) : $(SRC:.c=.o) 
	ar rcs libft.a $(SRC:.c=.o)


	
bonus:	$(SRCBB:.c=.o) $(SRC:.c=.o) 
	

$(SRCBB:.c=.o): $(SRCBB)
	$(CC) $(CFLAGS) -c $^
	ar rcs libft.a $(SRCBB:.c=.o)
	



clean:
	$(RM) -f $(SRC:.c=.o) $(SRCBB:.c=.o)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY : all clean fclean re
