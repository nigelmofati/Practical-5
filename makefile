main: *.o
	g++ -o main *.o

*.o: *.h *.cpp
	g++ -g -c *.cpp

run:
	valgrind --leak-check=full ./main

clean:
	rm -f *.o main  # Added -f to prevent errors if files don't exist
