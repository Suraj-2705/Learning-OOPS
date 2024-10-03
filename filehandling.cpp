#include <iostream>
#include <fstream>

int main() {
std::ifstream infile("example.txt", std::ios::in | std::ios::binary);
if (!infile) {
std::cerr << "Error opening file." << std::endl;
return 1;
}

// Move the get pointer to the end of the file
infile.seekg(0, std::ios::end);

// Move back 10 bytes from the current position (end of the file)
infile.seekg(-10, std::ios::cur);

// Read the last 10 bytes of the file
char buffer[11]; // +1 for null terminator
infile.read(buffer, 10);
buffer[10] = '\0'; // Null-terminate the string

std::cout << "Last 10 bytes of the file: " <<   buffer << std::endl;

infile.close();
return 0;
}