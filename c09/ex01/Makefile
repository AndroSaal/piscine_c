CC = gcc 
CFLAGS = -c -Wextra -Werror -Wall
FILES = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
OFILES = $(addsuffix .o, $(FILES))
CFILES = $(addsuffix .c, $(FILES))
SRC_DIR = ./src/
FOR_COMPILE = $(addprefix $(SRC_DIR), $(CFILES)) $(HEADER)
LIB = libft.a
o_srcs = $(addprefix$(SRC_DIR), $(OFILES))
#команда для создания архива из объектных файлов
STEP1 = ar rc
#команда для ?присваивания индексов
STEP2 = ranlib
HEADER = ./includes/*.h

all: crt_obj $(LIB)

crt_obj: $(FOR_COMPILE)
	$(CC) $(CFLAGS) $(FOR_COMPILE)
	mv $(OFILES) $(SRC_DIR)

$(LIB): $(o_srcs)
	$(STEP1) $(LIB) $(addprefix $(SRC_DIR), $(OFILES))
	$(STEP2) $(LIB)

clean: 
	rm -f $(addprefix $(SRC_DIR), $(OFILES))
	rm -f $(HEADER).gch

fclean: clean
	rm -f $(LIB)

re: fclean all

# При замене $(addprefix $(SRC_DIR), $(OFILES)) на o_srcs = $(addprefix$(SRC_DIR), $(OFILES))
# выдает ошибку "Члены архива не указаны" -- Как исправить? 