prog: main.o Circle.o CircleDriver.o
	g++ -std=c++11 -g -Wall main.o Circle.o CircleDriver.o -o prog

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

Circle.o: Circle.h Circle.cpp
	g++ -std=c++11 -g -Wall -c Circle.cpp

CircleDriver.o: CircleDriver.h CircleDriver.cpp
	g++ -std=c++11 -g -Wall -c CircleDriver.cpp

clean: 
	rm *.o prog