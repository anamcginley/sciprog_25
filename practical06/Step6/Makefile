CC = gcc # C compiler
CCFLAGS = -O3 # compiler flaps
LDFLAGS = -lm # linking flags

all: matmultc

matmultc: main.o mm.o
	$(CC) -o $@ $^ $(LDFLAGS)

mm.0: mm.c
	$(CC) -c $(CCFLAGS) $<

main.o: main.c
	$(CC) -c $(CCFLAGS) $<

clean:
	rm *.o

