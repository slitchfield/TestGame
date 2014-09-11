CC=g++
CFLAGS=-I.
OBJ = main.o player.o item.o room.o

EXENAME = textgame

textgame: $(OBJ)
	$(CC) -o $(EXENAME) $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -r ./*.o $(EXENAME)
