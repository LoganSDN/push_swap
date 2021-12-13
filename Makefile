NAME	=	push_swap
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra

SRCS	=	main.c

OBJS	=	${SRCS:.c=.o}

RM		=	rm -f

%.o:	%.c include/push_swap.h
		${CC} ${CFLAGS} -c $< -o $@

$(NAME): $(OBJS)
		@make -C ./libft/
		$(CC) $(OBJS) -L libft -l ft -o $(NAME)

all: $(NAME)

clean :
		@make -C ./libft/ clean
		${RM} ${OBJS} ${OBJS_BONUS}

fclean : clean
		@make -C ./libft/ fclean
		${RM} ${NAME}

re: fclean all

.PHONY : all clean fclean re