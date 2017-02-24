all: main.o
	g++ -g main.o -o main -lsfml-graphics -lsfml-window -lsfml-system
	rm *.o
main.o:
	g++ -c main.cpp -o main.o -I /home/oisin/SFML-2.2/include

