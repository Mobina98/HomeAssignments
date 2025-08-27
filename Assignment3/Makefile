# Use 'g++' as the C++ compiler
CC=g++

# Compiler flags:
# -Werror: Treat warnings as errors
# -Wpedantic: Strict ISO C++ compliance
# -Wall: Enable all warnings
# -std=c++17: Use C++17 standard
CFLAGS=-Werror -Wpedantic -Wall -std=c++17

# Linker flags:
# -lgtest: Link Google Test library
# -lgtest_main: Link Google Test main function
# -lpthread: Link pthread library (required by gtest)
LDFLAGS=-lgtest -lgtest_main -lpthread

# List of all source files
SOURCES=weapon_type.cpp assault_unit.cpp elite_unit.cpp marksman_unit.cpp support_unit.cpp heavy_unit.cpp commander_unit.cpp tests.cpp

# List of all header files
HEADERS=weapon_type.h assault_unit.h elite_unit.h marksman_unit.h support_unit.h heavy_unit.h commander_unit.h

# Convert .cpp files to .o (object) files
OBJECTS=$(SOURCES:.cpp=.o)

# Name of the final executable
EXECUTABLE=tests

# Default target: build the executable
all: $(EXECUTABLE)

# Rule to link object files into the executable
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) $(LDFLAGS) -o $@

# Rule to compile each .cpp file into a .o file
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Generate dependency rules for headers (auto-updates if headers change)
dependencies: $(SOURCES) $(HEADERS)
	$(CC) -MM $(SOURCES) > dependencies.mk

# Include the generated dependency rules
-include dependencies.mk

# Mark 'clean' as a phony target (not a real file)
.PHONY: clean

# Remove all compiled files and dependency rules
clean:
	rm -rf $(EXECUTABLE) $(OBJECTS) *.mk
