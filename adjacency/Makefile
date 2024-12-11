# -*- MakeFile -*-

# Compiler
CC = gcc

# Executable name
TARGET = adjacency

# Source files
SRCS = adjacency.c adjacency_utils.c

# Object files
OBJS = adjacency.o adjacency_utils.o

# Compilation flags
CFLAGS = -Wall -ansi -pedantic

# Debug flags
DEBUG_FLAGS = -g

# Default target
all: $(TARGET)

# Debug target
debug: CFLAGS += $(DEBUG_FLAGS)
debug: $(TARGET)

# Define dependencies for source files
adjacency.o: adjacency.c adjmant_types.h
adjacency_utils.o: adjacency_utils.c adjmant_types.h

# Linking the object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compiling individual source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	del /q $(OBJS) $(TARGET).exe

.PHONY: clean all debug
