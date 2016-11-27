# Author: Sébastien Combéfis
# Version: November 27, 2016

CC = gcc
CFLAGS = -I. -O2 -pedantic -pipe -std=c99 -Wall -Werror
DEPS = src/utils.h
OBJ = obj/computer.o obj/utils.o
TARGET = computer

obj/%.o: src/%.c $(DEPS)
	mkdir -p obj
	$(CC) -c $< -o $@ $(CFLAGS)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -rf obj
	rm -f $(TARGET)
