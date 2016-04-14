// This program is a driver for testing the printArray function
// Comprehensive Arrays lab
// by Jean Faubert Dorancy
// Last modified: 04-29-2015

#include <iostream>
#include <fstream>
#include "ArraysFunctions.h"
#include <string>
using namespace std;

void main()   // main is DONE
{
	const int FIVE_SIZE = 139, 
			  EVEN_SIZE = 90, 
			  ODD_SIZE = 100,
			  PSA_SIZE = 42, 
			  PRIME_SIZE = 120;

	int arrayOf5[FIVE_SIZE],
		evenNumbers[EVEN_SIZE], 
		oddNumbers[ODD_SIZE], 
		perfectSquare[PSA_SIZE],
		primeNumbers[PRIME_SIZE];
	
	ofstream outputFile;
	string fileName;
	char choice, ch;

	printTitle();

	// Load an array of 5s
	cout << "I am about to call loadArrayOf5s ...\n";
	loadArrayOf5s(arrayOf5, FIVE_SIZE);
	cout << "Finished loading loadArrayOf5s ...\n";
	cout << "I am aobut to call printArray (with the default value for nbPerLine)\n";
	printArray(arrayOf5, FIVE_SIZE);
	cout << "\n";
	system("pause");

	// Load an array of even numbers starting at 2
	cout << "I am about to call loadEvenArray ...\n";
	loadEvenArray(evenNumbers, EVEN_SIZE);
	cout << "Finished loading loadEvenArray ...\n";
	cout << "I am aobut to call printArray (with 4 elements per line)\n";
	printArray(evenNumbers, EVEN_SIZE, 4);
	cout << "\n";
	system("pause");

	// Load an array of even numbers starting at 1
	cout << "I am about to call loadOddArray ...\n";
	loadOddArray(oddNumbers, ODD_SIZE);
	cout << "Finished loading loadOddArray ...\n";
	cout << "I am aobut to call printArray (with 3 elements per line)\n";
	printArray(oddNumbers, ODD_SIZE, 3);
	cout << "\n";
	system("pause");

	// Load an array of perfect squares starting at 1
	cout << "I am about to call loadPSA...\n";
	loadPSA(perfectSquare, PSA_SIZE);
	cout << "Finished loading loadPSA ...\n";
	cout << "I am aobut to call printArray (with 1 elements per line)\n";
	printArray(perfectSquare, PSA_SIZE, 1);
	cout << "\n";
	system("pause");

	// Load an array of even numbers starting at 1
	cout << "I am about to call loadPrimeArray ...\n";
	loadPrimeArray(primeNumbers, PRIME_SIZE);
	cout << "Finished loading loadPrimeArray ...\n";
	cout << "I am aobut to call printArray (with 2 elements per line)\n";
	printArray(primeNumbers, PRIME_SIZE, 2);
	system("pause");

	// output to file
	cout << "Do you want to output the arrays to a file? ";
	choice = getChoice();
	if (choice == 'y' || choice == 'Y')
	{
		cout << "\nWhat file do you want to ouptut the arrary? ";
		cin >> ch;		cin.putback(ch);
		getline(cin, fileName);

		outputFile.open(fileName);
		if (outputFile.fail())
		{
			cout << "There was an error openning the file!";
			system("pause");
			return;
		}

		printTitle(outputFile);
		printArray(arrayOf5, FIVE_SIZE, 5, outputFile);
		outputFile << "\n";
		printArray(evenNumbers, EVEN_SIZE, 4, outputFile);
		outputFile << "\n";
		printArray(oddNumbers, ODD_SIZE, 3, outputFile);
		outputFile << "\n";
		printArray(perfectSquare, PSA_SIZE, 1, outputFile);
		outputFile << "\n";
		printArray(primeNumbers, PRIME_SIZE, 2, outputFile);
		outputFile.close();
		cout << "Done.\n";
	}

	system("pause");
}
