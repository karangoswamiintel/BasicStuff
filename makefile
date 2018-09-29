# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
# main is execuatable , main.o and QueueWithLinkedList.o are targets
main: main.o QueueWithLinkedList.o Node.o StackWithLinkedList.o
	$(CXX) $(CXXFLAGS) -o main main.o QueueWithLinkedList.o Node.o StackWithLinkedList.o

# The main.o target can be written more simply
main.o: main.cpp QueueWithLinkedList.h Node.h StackWithLinkedList.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Node.o: Node.h
	$(CXX) $(CXXFLAGS) -c Node.cpp

QueueWithLinkedList.o: QueueWithLinkedList.h Node.h
	$(CXX) $(CXXFLAGS) -c QueueWithLinkedList.cpp

StackWithLinkedList.o: StackWithLinkedList.h Node.h
	$(CXX) $(CXXFLAGS) -c StackWithLinkedList.cpp

clean:
	rm main main.o QueueWithLinkedList.o Node.o StackWithLinkedList.o
