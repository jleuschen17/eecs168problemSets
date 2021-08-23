2darray: 2darray.o
	g++ -std=c++11 -g -Wall 2darray.o -o 2darray

2darray.o: 2darray.cpp
	g++ -std=c++11 -g -Wall -c 2darray.cpp

clean: //removes .o file, compiled file, and all created text files
	rm *.o 2darray
	rm averages.txt
	rm reverse.txt
	rm flipped.txt
	rm diagonal.txt