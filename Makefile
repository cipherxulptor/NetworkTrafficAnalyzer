CXX = g++
CXXFLAGS = -std=c++11 -pthread -Wall
SRC = src/main.cpp src/packet_capture.cpp src/protocol_parser.cpp src/analyzer.cpp
OBJ = $(SRC:.cpp=.o)
OUT = analyzer

all: $(OUT)

$(OUT): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(OUT)
