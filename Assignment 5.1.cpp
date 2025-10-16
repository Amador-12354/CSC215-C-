// Assignment 5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2/11/2025
//Assignment 5.1 

#include <iostream>
//ctime allows seed to run correctly, cstdlib provides functions like random, and algorithm allows for numbers in array to be sorted
#include <ctime>
#include<cstdlib>
#include <algorithm>
using namespace std;

int main()
{
	//create the size the array will be
	const int size = 20;
	int numbers[size];

	srand(time(0)); //Seed for random number generator

	// Generate 20 random numbers between 1-100
	for (int i = 0; i < size; i++) {
		numbers[i] = rand() % 100 + 1;
	}

	//Sort numbers in array
	sort(numbers, numbers + size);

	//Display the numbers
	cout << "Numbers generated in order: ";
	for (int i = 0;i < size;i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;

	//Will find the smallest and largest numbers
	int smallest = numbers[0];
	int largest = numbers[size - 1];

	//Calculate sum
	double sum = 0; //For average to work had to change sum from int to double
	for (int i = 0; i < size; i++) {
		sum += numbers[i];
	}

	//Calculate average
	double average = double(sum/size);

	//Results will be couted
	cout << "The smallest number is " << smallest << endl;
	cout << "The largest number is " << largest << endl;
	cout << "The sum of all the numbers is " << sum << endl;
	cout << "THe average of the numbers is " << average << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
