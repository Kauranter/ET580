# executable file to create and its dependancies
prog : driver.o
	g++ -std=c++11 -o prog driver.o

# file dependencies
driver.o : XXXXX.h
	g++ -std=c++11 -c driver.cpp

# remove all object and executable files
clean:
	rm -f *.o
	rm prog