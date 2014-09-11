CC=g++
CFLAGS=-I.
OBJ = main.o

EXENAME = textgame

textgame: $(OBJ)
	$(CC) -o $(EXENAME) $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -r ./*.o $(EXENAME)
