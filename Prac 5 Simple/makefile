main: *.o
	g++	-o	main  *.o

*.o:  *.h	*.cpp
	g++	-g	-c	*.cpp

run:
	valgrind --leak-check=full ./main

clean:
	rm	*.o	main