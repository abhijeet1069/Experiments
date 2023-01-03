SHELL = /bin/sh
CLFAGS - -Wall -std=c99
CC = clang
LIBS = -ledit -lm
FILE = parsing.c ../../mpc/mpc.c

hello : parsing.c
	${CC} ${CLFAGS} ${FILE} -o parse

clean : hello
	rm parse