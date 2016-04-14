#include <iostream>
using namespace std;

// Precondition:  The output stream object must be open
// Postcondition:  Prints the title to outputStream
void printTitle(ostream& outputStream = cout);            

// Precondition:  size <= logical size, size > 0
//				  nbPerLine > 0
//				  The output stream object must be open
// Postcondition: Prints an array from element index 0 to element index size-1, nbPerLine of elements per line to outputStream
void printArray(int myArray[], int size, int nbPerLine = 5, ostream& outputStream = cout);         
//                Prints the first size elements of myArray[] nbPerLine elements per line

// Precondition:  size <= logical size, size > 0
// Postcondition: Fill an array with 5 from element index 0 to element index size - 1
void loadArrayOf5s(int myArray[], int size);         

// Precondition:  size <= logical size, size > 0
// Postcondition: Fill the first size elements of myArray[] with the first size even numbers starting at 2
void loadEvenArray(int myArray[], int size); 

// Precondition:  size <= logical size, size > 0
// Postcondition: Fill the first size elements of myArray[] with the first size perfect squares starting at 1
void loadPSA(int myArray[], int size); 

// Precondition:  size <= logical size, size > 0
// Postcondition: Fill the first size elements of yArray[] with the first size odd numbers starting at 1
void loadOddArray(int myArray[], int size);  

// Precondition:  size <= logical size, size > 0
// Postcondition: Fill the first size elements of myArray[] with the first size prime numbers starting at 2
void loadPrimeArray(int myArray[], int size);

// Precondition:   x > 1
// Postcondition:  returns true if x is prime, false otherwise
bool isPrime(int x);         

// Precondition:  NONE
// Postcondition: Returns y or n or Y or N
char getChoice();         
