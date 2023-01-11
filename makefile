array:array.o
	g++ array.o -o array

array.o:array.cpp
	g++ -c array.cpp

run:
	./array

clean:
	rm *.o array
