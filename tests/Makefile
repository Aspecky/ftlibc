NAME := debug

SRC_DIR := .
BUILD_DIR := ./build

HEADERS := $(shell find $(SRC_DIR) -type f -name "*.h")
SRCS := $(shell find $(SRC_DIR) -type f -name "*.c")
OBJS := $(SRCS:%.c=$(BUILD_DIR)/%.o)

FTLIBC_DIR := ../source
FTLIBC := $(FTLIBC_DIR)/ftlibc.a

INCLUDES := -I$(FTLIBC_DIR)/include

CFLAGS := -Wall -Wextra -fsanitize=address -ggdb3 -O0

all: $(NAME)

$(NAME): $(FTLIBC) $(OBJS) | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(OBJS) $(FTLIBC) -o $(NAME)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(FTLIBC): $(shell find -L $(FTLIBC_DIR) -name "*.[ch]")
	make -C $(FTLIBC_DIR) 'CFLAGS := $(CFLAGS)' 'TARGET_DIR := $(PWD)'

run: all
	@./$(NAME)

.PHONY: clean
clean:
	make clean -C $(FTLIBC_DIR)
	rm -rf $(BUILD_DIR)

fclean: clean
	make fclean -C $(FTLIBC_DIR)
	rm -f $(NAME)

re: fclean all

print-%:
	@echo $($*)
