# executable file to create and its dependancies
prog : driver.o Square.o Triangle.o Rectangle.o
	g++ -std=c++11 -o prog driver.o Square.o Triangle.o Rectangle.o

# file dependencies
driver.o : Square.h
	g++ -std=c++11 -c driver.cpp
Square.o : Square.h
	g++ -std=c++11 -c Square.cpp
Triangle.o : Triangle.h
	g++ -std=c++11 -c Triangle.cpp	
Rectangle.o : Rectangle.h
	g++ -std=c++11 -c Rectangle.cpp		

# remove all object and executable files
clean:
	rm -f *.o
	rm prog
