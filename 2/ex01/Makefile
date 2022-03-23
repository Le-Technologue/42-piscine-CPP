# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wetieven <wetieven@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/27 13:50:48 by wetieven          #+#    #+#              #
#    Updated: 2022/03/23 10:25:30 by wetieven         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

# =============== #
# === TARGETS === #
# =============== #

NAME		=	test

## ~~ Folders ~~ ##

DDIR		=	deps/
ODIR		=	objs/

# =============== #
# === SOURCES === #
# =============== #

ESRC		=	main.cpp

CSRC		=	Fixed.cpp

TSRC		=	# TEMPLATES SOURCES

## ~~ Folders ~~ ##

HDIR		=	incs/
SDIR		=	srcs/

# ==================== #
# === PLACEHOLDERS === #
# ==================== #

### ~~~ SOURCES ~~~ ###

SRCS		=	$(ESRC) $(CSRC)#$(TSRC)

### ~~~ TARGETS ~~~ ###

# EOBJ		=	$(ESRC:%.cpp=$(ODIR)%.o)
# COBJ		=	$(CSRC:%.cpp=$(ODIR)%.o)
# TOBJ		=	$(TSRC:%.tpp=$(ODIR)%.o)

# OBJS		=	$(EOBJ) $(COBJ)#$(TOBJ)
OBJS		=	$(SRCS:%.cpp=$(ODIR)%.o)

DEPS		=	$(SRCS:%.cpp=$(DDIR)%.d)

## ~~ Folders ~~ ##

SUBDIRS		=	$(ODIR) $(DDIR)

# ====================== #
# === VARIABLE PATHS === #
# ====================== #

### ~~~ SOURCES ~~~ ###

vpath %.hpp $(HDIR)
# vpath %.tpp $(SDIR)
vpath %.cpp $(SDIR)

### ~~~ TARGETS ~~~ ###

vpath %.o $(ODIR)

# ====================== #
# === COMPILER SETUP === #
# ====================== #

CC			=	g++
WRNFL		=	-std=c++98 -Wall -Wextra -Werror
DBGFL		=	-g
CINCS		=	$(addprefix -I, $(HDIR))
CFLGS		=	$(WRNFL) $(DBGFL)

DEPFL		=	-MT $@ -MMD -MP -MF $(DDIR)$*.d

# ============= #
# === RULES === #
# ============= #

# ~~~ Default ~~~ #

all			:	$(SUBDIRS) $(NAME)

$(SUBDIRS)	:
				mkdir -p $(SUBDIRS)

# ~~~ Objects Compiling  ~~~ #

$(ODIR)%.o	:	%.cpp $(DDIR)%.d
				$(CC) $(CFLGS) $(CINCS) $(DEPFL) -c $< -o $@

# ~~~ Executables Compiling  ~~~ #

$(NAME)		:	$(OBJS)
				$(CC) $^ -o $@

# ~~~ Actions ~~~ #

norm		:
				norminette incs srcs

clean		:
				rm -rf $(ODIR)

fclean		:	clean
				$(RM) $(NAME)
				rm -rf $(DDIR)

re			:	fclean all

.PHONY : all norm clean fclean re

$(DEPS)		:
include $(wildcard $(DEPS))
