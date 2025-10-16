// Assignment 10.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//4/1/2025

#include <iostream>
using namespace std;

//This function checks the normal balance
void normalBalance(int balance) { 
	cout << "Balance Check: $" << balance << endl;
}

//This function will hack the balance
void hackedBalance(int& balance1, int& balance2) {
	//This will swap the balances
	int temp = balance1;
	balance1 = balance2;
	balance2 = temp;

	cout << "Account has been hacked! Balances swapped.\n";
	cout << endl;
}

//This function will print account balances
void printBalances(int account1, int account2) {
	cout << "Account 1 Balance: $" << account1 << endl;
	cout << "Account 2 Balance: $" << account2 << endl;
	cout << endl;
}

int main() {
	//inital balances
	int account1 = 5000; 
	int account2 = 10000;

	cout << "Initial Balances:\n";
	printBalances(account1, account2);

	//Will print normal balances (before hacking)
	cout << "Account 1 ";
	normalBalance(account1);
	cout << "Account 2 ";
	normalBalance(account2);

	//Will used hack to do pass by reference to swap balances
	hackedBalance(account1, account2);

	//New balances will be printed
	cout << "After getting hacked:\n";
	printBalances(account1, account2);

	return 0;
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
