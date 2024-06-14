CC = gcc
CFLAGS = -std=c11 -Wall -Wextra
DEBUG_FLAGS = -g -DDEBUG=2
TEST_FLAGS = -g -DDEBUG=1
OPTIMISE_FLAGS = -O2
TARGET = main

debug: CFLAGS += $(DEBUG_FLAGS)
test: CFLAGS += $(TEST_FLAGS)
final: CFLAGS += $(OPTIMISE_FLAGS)

# Targets
.PHONY: all clean debug test final

all: final

debug: $(TARGET)

test: $(TARGET)

final: $(TARGET)

$(TARGET): main.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c main.h
	$(CC) $(CFLAGS) -c main.c

testing.o: testing.c testing.h
	$(CC) $(FLAGS) -C testing.c

debug.o: testing.c testing.h
	$(CC) $(FLAGS) -C testing.o

clean:
	rm -f $(TARGET) main.o testing.o debug.o
