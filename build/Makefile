CC=g++
CFLAGS=-Wall -g
INCLUDES=-I../include
TARGET=main
TEST=test

main.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c ../main.cpp 

util.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c ../util.cpp

link:
	$(CC) *.o -o $(TARGET)


build:
	make main.o
	make util.o
	make link


run:
	./$(TARGET)




test_util.o:
	make util.o
	$(CC) -c $(INCLUDES) ../test/test_util.cpp
	


link.tests:
	$(CC) *.o -o $(TEST)

build.tests:
	make test_util.o
	make link.tests


run.tests:
	./$(TEST)




clear:
	rm -rf *.o
	rm -rf $(TARGET)
	rm -rf $(TEST)