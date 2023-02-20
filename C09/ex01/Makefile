RED		=	\033[31m
GRE		=	\033[32m
BLU		=	\033[34m
YEL		=	\033[33m
EOC		=	\033[0m

NAME = libft.a

SRCS = $(addprefix srcs/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c)

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

.c.o:
	@${CC} ${CFLAGS} -c -I includes $< -o ${<:.c=.o} 
	@printf "\r\033[K⏳ Compilation de ""$(YEL)${notdir $<}$(EOC). ⏳"

${NAME}: ${OBJS}
	@ar rc ${NAME} ${OBJS}
	@ranlib ${NAME}
	@echo "\n✅ $(GRE)Compilation terminée.$(EOC) ✅"

all: ${NAME}
	@clear

clean:
	@echo "🗑  $(RED)Supression des fichiers binaires (.o).$(EOC) 🗑"
	@rm -f ${OBJS}

fclean: clean
	@echo "🗑  $(RED)Supression des executables et librairies.$(EOC) 🗑"
	@rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
