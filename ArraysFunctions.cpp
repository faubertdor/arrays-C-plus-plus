#include <iostream>
using namespace std;

// Prints the title
void printTitle(ostream& outputStream = cout)                   
{
	outputStream
				<< "\t This a lab on completely filled arrays    \n"
				<< "\t         Jean Faubert Dorancy              \n\n";
}

// Prints the array to any output stream object
void printArray(int myArray[], int size, int nbPerLine = 5, ostream& outputStream = cout)   //  DONE
{
	for (int i = 0; i < size; i++)
		outputStream << myArray[i] << ((i + 1) % nbPerLine == 0 ? "\n" : "\t");
}

// Load an array of 5s
void loadArrayOf5s(int myArray[], int size)            
{
	for (int i = 0; i < size; i++)
		myArray[i] = 5;
}

// Load an array of even numbers starting at 2
void loadEvenArray(int myArray[], int size)            
{
		for (int i = 0; i < size; i++)
		myArray[i] = 2 * i + 2;
}

// Load an array of odd numbers starting at 1
void loadOddArray(int myArray[], int size)            
{
	for (int i = 0; i < size; i++)
		myArray[i] = 2 * i + 1;
}

// Load an array of perfect squares
void loadPSA(int myArray[], int size)            
{
	for (int i = 0; i < size; i++)
		myArray[i] = (i + 1) * (i + 1);
}

// True if the number is prime else false
bool isPrime(int x)            
{
	for (int i = 2; i < x; i++)
		if (x % i == 0)
			return false;

	return true;
}

// Load an array of prime numbers
void loadPrimeArray(int myArray[], int size)            
{
	int n = 2;
	for (int i = 0; i < size; ){
		if (isPrime(n)) 
			myArray[i++] = n;
		n++;
	}
}

// Select y or n or Y or N
char getChoice()            
{
	char choice;

	cin >> choice;			cin.ignore(80, '\n');
	while (choice != 'y' && choice != 'n' && choice != 'Y' && choice != 'N')
	{
		cout << "Please type Y or N. Try again: ";
		cin >> choice;			cin.ignore(80, '\n');
	}
	return choice;
}
