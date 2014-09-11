CC=g++
CFLAGS=-I.
OBJ = main.o player.o

EXENAME = textgame

textgame: $(OBJ)
	$(CC) -o $(EXENAME) $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -r ./*.o $(EXENAME)
