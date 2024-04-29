/*
This code show us how to use srand, rand and time function.

Developer = Barış Someroğlu
Date = 29.04.2024 - 03:20 pm
*/

#include <iostream>
#include <cstdlib> // to use srand and rand
#include <ctime> // to use time

using namespace std;

int main()
{
	int Number;

	srand(time(NULL)); // main random numbers generator function

	cout << "\n--------------------- Random Numbers ---------------------------" << endl;

	for (int i = 0; i < 10; i++)
	{
		Number = rand(); // parametre for srand

		cout << Number << " ";
	}

	cout << "\n\n--------------------- Random Dice Numbers ----------------------" << endl;

	for (int i = 0; i < 10; i++)
	{
		Number = 1 + rand() % 6; // we can make arithmetic operations on rand function to change range of srand

		cout << Number << " ";
	}

	cout << endl;

	return 0;
}