#include<iostream>
using namespace std;
#include<string>
#include<sstream>
int main() {
// Convert int to string
int number = 42;
stringstream ss;
ss << number; // Insert the integer into the stringstream
string str = ss.str(); // Get the string representation of the number
cout << "The string is: " << str ; //42
// Convert string to int
string text = "1234";
int result;
ss.clear(); // Clear the stringstream
ss.str(text); // Set the content of the stringstream to the new string
ss >> result; // Extract the integer from the stringstream
cout << "The integer is: " << result << endl;
}
