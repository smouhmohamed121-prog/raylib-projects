

# Change 'main' to whatever your source file is named (without the .c)
TARGET = 004_basic_texture
SRC = 004_duck_moving.c

CC = gcc
CFLAGS = -Wall -std=c99
# Grab Raylib flags and math library
LIBS = $(shell pkg-config --cflags --libs raylib) -lm

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(SRC) $(CFLAGS) -o $(TARGET) $(LIBS)

# Type 'make run' to compile and execute immediately
run: all
	./$(TARGET)

# Type 'make clean' to delete the compiled binary
clean:
	rm -f $(TARGET)
