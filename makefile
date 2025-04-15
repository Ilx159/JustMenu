#copilador
CC = gcc

#Opções de copilação
CFLAGS = -Wall -Wextra -O3 -I lib

#pastas

OBJ_DIR = obj
LIBS = lib
EXE_DIR = out
SRC_DIR = src

#arquivos

TARGET = out/exec

LIB_FILES = $(wildcard $(LIBS)/*.c)
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

OBJ_FILES = $(patsubst $(LIBS)/%.c, $(OBJ_DIR)/%.o, $(wildcard $(LIBS)/*.c)) \
			$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

#Copilando

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	@mkdir -p $(EXE_DIR)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(LIBS)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(EXE_DIR)