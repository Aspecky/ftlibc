NAME := ftlibc.a

LIBS := ft_ctype \
		ft_stdio \
		ft_stdlib \
		ft_string \
		ft_math

CLASSES := 	SinglyLinkedNode \
			SinglyLinkedList \
			Vector

UNITS := $(LIBS) $(CLASSES)

ARCHIVES := $(foreach unit,$(UNITS),$(unit)/$(unit).a)

OBJS := $(foreach unit,$(UNITS),$(patsubst ./%.o,$(unit)/%.o,$(shell make -s print-OBJS -C $(unit))))

INC_DIR := include
HEADERS = $(foreach unit,$(UNITS),$(INC_DIR)/$(unit).h)

CC := cc
CFLAGS := -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(HEADERS) $(ARCHIVES) | $(INC_DIR)
	ar -rcs $(NAME) $(OBJS)

.SECONDEXPANSION:
%.a: $$(wildcard $$(dir $$@)*.[ch])
	make all -C $(dir $@)

$(INC_DIR):
	make -p $(INC_DIR)

.SECONDEXPANSION:
$(INC_DIR)/%.h: %/$$(notdir $$@)
	cp $< $@

.PHONY: clean
clean:
	$(foreach lib,$(LIBS),make clean -C $(lib);)
	$(foreach class,$(CLASSES),make clean -C $(class);)

.PHONY: headers
headers:
	$(foreach unit,$(UNITS),cp $(unit)/$(unit).h $(INC_DIR);)
	
fclean: clean
	rm -f $(NAME)
	$(foreach lib,$(LIBS),make fclean -C $(lib);)
	$(foreach class,$(CLASSES),make fclean -C $(class);)

re: fclean all

print-%:
	@echo $($*)
