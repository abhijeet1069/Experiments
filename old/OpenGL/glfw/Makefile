APP_NAME = myApp
BUILD_DIR = ./bin
C_FILES = ./src/*.c

APP_DEFINES:=
APP_INCLUDES:= -I./src/vendors/GLFW -framework Cocoa -framework OpenGL -framework IOKit
APP_LINKERS:= -L./src/vendors/GLFW/lib -lglfw3 -L./src/vendors/GL/lib -lGLEW

all: build run

build:
	clang $(C_FILES) -o $(BUILD_DIR)/$(APP_NAME) $(APP_INCLUDES) $(APP_LINKERS)

run:
	$(BUILD_DIR)/$(APP_NAME)