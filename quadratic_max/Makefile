CC	= gcc
RM	= del

.PHONY: all clean

all: example.exe

example.exe: example.o quadratic_max.o
	$(CC) -o $@ example.o quadratic_max.o

clean:
	$(RM) *.o
	$(RM) *.exe
