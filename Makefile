BIN=./bin
SRC=./src
INC=./inc
OBJ=./obj

SRCS=$(wildcard $(SRC)/*.c)
OBJS=$(patsubst %.c, $(OBJ)/%.o, $(notdir $(SRCS)))

TARGET_NAME=main
TARGET_PATH=$(BIN)/$(TARGET_NAME)

CC=gcc
CFLAGS=-g -Wall -I$(INC)

$(TARGET_PATH):$(OBJS) main.o
	$(CC) $^ -o $@
$(OBJ)/%.o:$(SRC)/%.c main.c
	$(CC) $(CFLAGS) -c $< -o $@

print:
	@echo $(BIN)
	@echo $(INC)
	@echo $(SRC)
	@echo $(OBJ)
	@echo $(SRCS)
	@echo $(OBJS)

.PHONY:clean
clean:
	del *.o
	del /Q /F obj
