PROJ_DIR := ../source

NAME := debug
SRCS := main.c
OBJS := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS))

INCLUDES := -Iinclude \
			-I$(SRC_DIR)/include \
			-I$(LIBS_DIR)/ftlibc/include \
			-I$(LIBS_DIR)/mlx_aux/include
			
BUILD_DIR := build
FTLIBC_DIR := $(PROJ_DIR)
FTLIBC := $(FTLIBC_DIR)/ftlibc.a

CFLAGS := -Wall -Wextra -fsanitize=address -ggdb3 -O0

all: $(NAME)

$(NAME): $(OBJS) $(FTLIBC) | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(OBJS) $(FTLIBC) -o $(NAME)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(FTLIBC): $(shell find -L $(FTLIBC_DIR) -name "*.[ch]")
	make -C $(FTLIBC_DIR) 'CFLAGS := $(CFLAGS)' 'TARGET_DIR := $(PWD)'

run: all
	@./$(NAME)

.PHONY: clean
clean:
	make clean -C $(PROJ_DIR)
	rm -rf $(BUILD_DIR)

fclean: clean
	make fclean -C $(PROJ_DIR)
	rm -f $(NAME)

re: fclean all

print-%:
	@echo $($*)
