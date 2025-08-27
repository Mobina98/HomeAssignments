
# The default target when you run just 'make'. It depends on 'main'.
all: main

# Rule to create main.o. It depends on main.cpp and hello.h.
# If main.cpp or hello.h change, main.o must be rebuilt.
main.o: main.cpp hello.h
	# Compile (-c) main.cpp into an object file (main.o)
	g++ -c main.cpp

# Rule to create hello.o. It depends on hello.cpp and hello.h.
hello.o: hello.cpp hello.h
	# Compile (-c) hello.cpp into an object file (hello.o)
	g++ -c hello.cpp

# Rule to create the final executable 'main'. It depends on the object files.
main: main.o hello.o
	# Link the object files (-o specifies the output executable name)
	# -Wall enables compiler warnings
	g++ -Wall -o main main.o hello.o

# Phony target to clean up build artifacts. Run with 'make clean'.
clean:
	# Forcefully remove (-f) the 'main' executable and all .o files
	rm -f main *.o