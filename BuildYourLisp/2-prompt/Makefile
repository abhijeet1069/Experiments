APP_NAME = myApp
BUILD_DIR = ./bin
C_FILES = ./src/*.c
FLAGS = -std=c99 -Wall -ledit

all: build run

build:
	clang $(FLAGS) $(C_FILES) -o $(BUILD_DIR)/$(APP_NAME)

run:
	$(BUILD_DIR)/$(APP_NAME)