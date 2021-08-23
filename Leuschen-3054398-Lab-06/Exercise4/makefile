readwrite: readwrite.o
	g++ -std=c++11 -g -Wall readwrite.o -o readwrite

readwrite.o: readwrite.cpp
	g++ -std=c++11 -g -Wall -c readwrite.cpp

clean: 
	rm *.o readwrite
	
clean2://removes txt files
	rm Normalized.txt
	rm Reversed.txt