CC = g++
OFLAGS = -c -Wall -ansi -pedantic -Werror -std=c++0x -lboost_unit_test_framework
CFLAGS = -Wall -ansi -pedantic -Werror -std=c++0x -lboost_unit_test_framework
LFLAGS = -lsfml-window -lsfml-graphics -lsfml-system -lsfml-audio

all: NBody
    
NBody: Universe.o SpaceObject.o Body.o main.o
	$(CC) Universe.o SpaceObject.o Body.o main.o $(CFLAGS) $(LFLAGS) -o NBody
main.o: main.cpp
	$(CC) $(OFLAGS) $(LFLAGS) main.cpp

Body.o: Body.cpp Body.hpp
	$(CC) $(OFLAGS) Body.cpp

Universe.o: Universe.cpp Universe.hpp
	$(CC) $(OFLAGS) Universe.cpp

SpaceObject.o: SpaceObject.cpp SpaceObject.hpp
	$(CC) $(OFLAGS) SpaceObject.cpp

clean:
	rm -f *.o  *~ NBody main Body Universe SpaceObject
