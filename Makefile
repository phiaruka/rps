CC = clang
CFLAGS = -g -Wall -Wextra -Wpedantic

TARGET = main

all: $(TARGET)

$(TARGET): main.o rps.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o rps.o

main.o: main.c rps.h
	$(CC) $(CFLAGS) -c -o main.o main.c

rps.o: rps.c rps.h
	$(CC) $(CFLAGS) -c -o rps.o rps.c

clean:
	rm -f *.o $(TARGET)
