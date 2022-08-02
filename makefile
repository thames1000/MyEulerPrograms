# Makefile description goes here, not required but helpful

CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -Waggregate-return -Wvla -Wwrite-strings -Wfloat-equal
CFLAGS += -I ./C/include/
CHECKLIBS = -lcheck -lm -lrt -lpthread -lsubunit

.PHONY: all
all: 001 002 003

FILES = C/include/functions.c
.PHONY: 001
001:
	$(CC) $(CFLAGS) $(FILES) C/problem001.c $(CHECKLIBS) -o C_Executables/exe001

.PHONY: 002
002:
	$(CC) $(CFLAGS) $(FILES) C/problem002.c $(CHECKLIBS) -o C_Executables/exe002

.PHONY: 003
003:
	$(CC) $(CFLAGS) $(FILES) C/problem003.c $(CHECKLIBS) -o C_Executables/exe003

.PHONY: clean
clean:
	$(RM) *.o *.a test/*.o C_Executables/* Python/__pycache__/* 
