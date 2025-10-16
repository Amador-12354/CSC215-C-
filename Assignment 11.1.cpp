// Assignment 11.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//4/9/25

#include <iostream>
#include <string>
using namespace std;

//Struct Employee is created to get data for employees
struct Employee {
    string name;
    string position;
    int id;
};

//Function to add input of one employee using a pointer
void inputEmployee(Employee* e) {
    cin.ignore(); //Clears newline left in buffer
    cout << "Enter name of employee: ";
    getline(cin, e->name); //getline is better because it read whole line
    cout << "Enter position of employee: ";
    getline(cin, e->position);
    cout << "Enter employee ID: ";
    cin >> e->id;
}

//Function to display employee info
void displayEmployee(Employee* e) {
    cout << "Name: " << e->name << ", Position: " << e->position << ", Employee ID: " << e->id << "\n";
}

int main()
{
    int n; //Number of employees
    cout << "How many employees are there? ";
    cin >> n;

    //Dynatmic allocate an array of points to Employee
    Employee** employees = new Employee * [n];

    //Allocate and input of each employee
    for (int i = 0; i < n; i++) {
        employees[i] = new Employee(); //Allocates an indivdual employee
        cout << "Enter details for employee " << i + 1 << ":\n";
        inputEmployee(employees[i]);
    }

    //Display all employees
    cout << "\n ---- Employee Records ----" << endl;
    for (int i = 0; i < n; i++) {
        displayEmployee(employees[i]);
    }

    //TO avoid memory leak by using delete
    for (int i = 0; i < n; i++) {
        delete employees[i]; //Deletes each individual employee
    }
    delete[] employees; //Deletes the array
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
