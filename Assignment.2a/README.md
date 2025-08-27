# Assignment.2a - Binary File

**Author:** Mobina Ahmadimasoud  
**Group:** 24.B83-mm  
**Email:** st067173@student.spbu.ru

## Build Instructions
```
make
```

## Run Instructions
```
./myProg
```

## Program Description
# Binary File Reverser
A C++ program that reads a binary file, reverses the order of its bytes in memory, and writes the reversed data to a new output file.

## Prepare an Input File

The program expects an input file named input.bin. Create a binary file for testing.

Example: Create a simple test file (Linux/macOS):

echo -n -e '\x01\x02\x03\x04\x05' > input.bin

## Example output
If input.bin contains bytes 01 02 03 04 05, then output.bin will contain 05 04 03 02 01.

