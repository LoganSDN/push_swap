NAME	=	push_swap
RM		=	rm -f
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -g

SRCS	=	main.c \
			srcs/init.c \
			srcs/process.c \
			srcs/parse.c \
			srcs/free.c \
			srcs/exit.c \
			srcs/utils.c \
			srcs/atoi_pimp.c \
			srcs/solvers/radix.c \
			srcs/solvers/random_three.c \
			srcs/solvers/random_five.c \
			srcs/stack_actions/push.c \
			srcs/stack_actions/rotate.c \
			srcs/stack_actions/swaps.c \
			srcs/stack_actions/reverse.c \

OBJS	=	$(SRCS:.c=.o)

%.o:	%.c incl/push_swap.h libft/libft.a Makefile
		${CC} ${CFLAGS} -c $< -o $@
		@printf	"\033[2K\r\033[0;33m[BUILD - $(NAME)]\033[0m $<\e[0m"


all		: libft $(NAME)

$(NAME)	: $(OBJS)
		$(CC) $(CFLAGS) -L libft -l ft $^ -o $@
		@printf "\033[2K\r\033[0;32m$(NAME) Successfully build\033[0m\e[0m"

libft : 
			@make -C libft

clean	:
			@make clean -C libft
			$(RM) $(OBJS)

fclean	:	clean
			@make fclean -C libft
			$(RM) $(NAME)
			@printf "\033[2K\r\033[0;31m$(NAME) deleted.\n\e[0m"

re		:	fclean all

.PHONY		:	libft all clean fclean re

.SILENT: