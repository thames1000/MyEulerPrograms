# Makefile description goes here, not required but helpful

CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -Waggregate-return -Wvla -Wwrite-strings -Wfloat-equal
CFLAGS += -I ./C/include/
CHECKLIBS = -lcheck -lm -lrt -lpthread -lsubunit


FILES = C/include/functions.c

.PHONY: 005
005:
	$(CC) $(CFLAGS) $(FILES) C/problem005.c $(CHECKLIBS) -o C_Executables/exe005

.PHONY: 004
004:
	$(CC) $(CFLAGS) $(FILES) C/problem004.c $(CHECKLIBS) -o C_Executables/exe004
	
.PHONY: 003
003:
	$(CC) $(CFLAGS) $(FILES) C/problem003.c $(CHECKLIBS) -o C_Executables/exe003

.PHONY: 002
002:
	$(CC) $(CFLAGS) $(FILES) C/problem002.c $(CHECKLIBS) -o C_Executables/exe002

.PHONY: 001
001:
	$(CC) $(CFLAGS) $(FILES) C/problem001.c $(CHECKLIBS) -o C_Executables/exe001

.PHONY: all
all: 001 002 003 004 005

.PHONY: clean
clean:
	$(RM) *.o *.a test/*.o C_Executables/* Python/__pycache__/* 
