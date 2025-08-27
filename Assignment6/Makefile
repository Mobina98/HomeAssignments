CXX=g++
CXXFLAGS=-Werror -Wpedantic -Wall -std=c++17
LDFLAGS=-lgtest -lgtest_main -lpthread
SOURCES=data_processor.cpp data_analyzer.cpp data_visualizer.cpp tests.cpp
HEADERS=data_processor.h data_analyzer.h data_visualizer.h generic_container.h
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=tests

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) $(LDFLAGS) -o $@

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

format:
	astyle -A1 -s4 *.cpp *.h
	rm -f *.orig

.PHONY: clean all format

clean:
	rm -f $(EXECUTABLE) $(OBJECTS) *.orig