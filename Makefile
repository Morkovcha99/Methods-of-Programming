CXX = g++
CXXFLAGS = -std=c++17 -Wall -O2 -Wunused-variable

FILE ?= main
SRC = $(FILE).cpp
TARGET = $(FILE)

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
