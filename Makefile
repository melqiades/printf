CC=gcc
CFLAGS=-I.
DEPS = libft.h
OBJ = printf.o libft.a 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

outputfile: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(OBJ) outputfile