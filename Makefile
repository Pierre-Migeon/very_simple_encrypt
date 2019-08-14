
NAME = bit_encrypt

all: $(NAME)

$(NAME): 
	@gcc -Wall -Wextra -Werror ./main.c ./pm_bit_flipper.c -o bit_encrypt

clean:
	@rm bit_encrypt 
