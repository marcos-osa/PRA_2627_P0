CXX = g++

all: bin/main

RoboticArm.o: RoboticArm.cpp RoboticArm.h
	$(CXX) -c RoboticArm.cpp

main.o: main.cpp RoboticArm.h
	$(CXX) -c main.cpp

bin/main: main.o RoboticArm.o
	mkdir -p bin
	$(CXX) -o bin/main main.o RoboticArm.o

test: bin/main
	./bin/main

clean:
	rm -rf *.o bin

.PHONY: all test clean
