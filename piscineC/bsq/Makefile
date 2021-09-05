NAME = bsq

SOURCES =   main.c \
			read.c \
			print_map.c \
			solve.c \
			tools.c 
OBJECTS =   ./main.o \
            ./read.o \
            ./print_map.o \
            ./solve.o \
            ./tools.o
FLAGS   =   -Werror -Wall -Wextra
$(NAME)     :   all
all         :
				gcc -c $(FLAGS) $(SOURCES) 
				gcc -o $(NAME) $(FLAGS) $(OBJECTS)
clean       : 
				rm -rf $(OBJECTS)
fclean      :   clean
				rm -rf $(NAME)
re          :   fclean \
				all
boom        :   re \
				clean
				clear
