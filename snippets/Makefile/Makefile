# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frsiika <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/06 01:01:45 by frsiika           #+#    #+#              #
#    Updated: 2018/10/06 03:02:51 by frsiika          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS			:= -Wall -Werror -Wextra
INC_DIR			:= includes/
SRC_DIR			:= srcs/

FILES			:= ft_putchar.c \
					ft_putstr.c \
					main.c

SRCS			:= $(patsubst %, $(SRC_DIR)%,$(FILES))
OBJ_FILES		:= $(FILES:%.c=%.o)

OBJ_DIR			:= objdir/
OBJS			:= $(addprefix $(OBJ_DIR)/, ft_putchar.o, ft_putstr.o, main.o)

$(OBJDIR)/%.o : %.c
	$(COMPILE.c) $(OUTPUT_OPTION) $<

all: $(OBJS)

$(OBJS): | $(OBJ_DIR)
	@echo 'Moving object files --> object-directory'
	gcc -c $(CFLAGS) $(FILES) 

$(OBJ_DIR):
	@echo 'Creating directory for object files'
	@mkdir $(OBJ_DIR)

clean: 
	@echo 'Deleting $$(OBJDIR)'
	@/bin/rm -rf $(OBJ_DIR) $
