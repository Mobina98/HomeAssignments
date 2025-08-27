CC=g++
CFLAGS=-Werror -Wpedantic -Wall -std=c++17
LDFLAGS=-lgtest -lgtest_main -lpthread
SOURCES=weapon_type.cpp assault_unit.cpp elite_unit.cpp marksman_unit.cpp support_unit.cpp heavy_unit.cpp commander_unit.cpp tests.cpp
HEADERS=weapon_type.h assault_unit.h elite_unit.h marksman_unit.h support_unit.h heavy_unit.h commander_unit.h
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=tests

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) $(LDFLAGS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


dependencies: $(SOURCES) $(HEADERS)
	$(CC) -MM $(SOURCES) > dependencies.mk

-include dependencies.mk

format:
	astyle -A1 -s4 *.cpp *.h
	rm -rf *.orig

.PHONY: clean

clean:
	rm -rf $(EXECUTABLE) $(OBJECTS) *.mk
