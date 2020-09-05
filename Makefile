CC = g++
main = game.cpp
states = states.cpp

all:
	$(CC) $(main) $(states) -o game

clean:
	rm game