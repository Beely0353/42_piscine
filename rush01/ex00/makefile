RED		=	\033[31m
GRE		=	\033[32m
BLU		=	\033[34m
YEL		=	\033[33m
EOC		=	\033[0m

NAME 			= rush-01

SOURCES			=	./sources
OBJECTS			=	./bin

SRCS			=	rush01.c\
					check_arg.c\
					check_soluce.c\
					parsing.c\
					skyscrap.c\
					skyscrap2_3.c\
					print.c



OBJS			=	$(addprefix ${OBJECTS}/, $(SRCS:.c=.o))

CFLAGS			=	-Wall -Wextra -Werror -Iincludes
CC				=	gcc
CINCLUDES		=	-I ./includes

${OBJECTS}/%.o: ${SOURCES}/%.c
	@mkdir -p $(dir $@)
	@printf "\r\033[K⏳ Compilation de ""$(YEL)${notdir $<}$(EOC). ⏳"
	@${CC} ${CFLAGS} -o $@ -c $< ${CINCLUDES}

all: ${NAME}

${NAME}: ${OBJS}
	@clear
	@echo "✅ $(GRE)Compilation terminée.$(EOC) ✅"
	@${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
	@echo "🗑  $(RED)Supression des fichiers binaires (.o).$(EOC) 🗑"
	@rm -rf ${OBJECTS}

fclean: clean
	@echo "🗑  $(RED)Supression des executables et librairies.$(EOC) 🗑"
	@rm -f ${NAME}

re: fclean all

run: all
	@clear
	./${NAME}

.PHONY:	all clean fclean re run
