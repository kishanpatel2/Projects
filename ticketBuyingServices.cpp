/*
Author:		Kishan P. Patel
E-mail:		kpp5282@psu.edu
Course:		CMPSC 121
Assignment:	Lab 6
Due date:	10/20/2017
File:		ticketBuyingServices.cpp
Purpose:    This program processes a customer’s order for movie tickets.
Compiler:	Coderunner
Operating
system:		Mac OS
References: Class demo programs
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Tells showSum that these are double
void showSum(double, double, double);

 int main()

	{
	//Variables
	string movieName;
	double choiceOne, choiceTwo, choiceThree;
	
	
	//Greet the people
	cout << "------------------------------------------------------------------------\n\n";
	cout << "Welcome to Fandango's online movie ticket buying service!\n";
	cout << "Please enter the information requested and we will process your order.\n\n"; 
	cout << "------------------------------------------------------------------------\n\n";
	
	//Ask which movie
	cout << "What movie would you like to see? ";
	getline(cin, movieName);
	
	//Ask number of tickets 
	cout << "\nHow many tickets of each of the following types do you want?\n\n";
	cout << " Adult  ($10.00): ";
	
	//Ask how many people are watching for each category
	cin >> choiceOne;
	while (choiceOne <= -1) {
		cout << " **Please enter a valid number of tickets\n";
		cout << " Adult  ($10.00): ";
		cin >> choiceOne;
	}
	cout << " Senior ($ 9.00): ";
	cin >> choiceTwo;
	while (choiceTwo <= -1) {
		cout << " **Please enter a valid number of tickets\n";
		cout << " Senior ($9.00: ";
		cin >> choiceTwo;
	}
	cout << " Child  ($ 7.25): ";
	cin >> choiceThree;
	while (choiceThree <= -1) {
		cout << " **Please enter a valid number of tickets\n";
		cout << " Child  (7.25): ";
		cin >> choiceThree;
	
	}
	
	//Enter your total cost
	if (!(choiceOne == 0 && choiceTwo == 0 && choiceThree == 0)){
		cout << "\nYour total cost is: $" << setprecision(2) << fixed << showpoint;	
		showSum(choiceOne = 10.00 * choiceOne, choiceTwo = 9.00 * choiceTwo, choiceThree = 7.25 * choiceThree);
		cout << "\n";
	}
	
	//Put if else statement for two outputs 
	if (choiceOne == 0 && choiceTwo == 0 && choiceThree == 0){	
		cout << "------------------------------------------------------------------------\n\n";
		cout << "We're sorry you changed your mind. Please visit again soon!";
	}else {	
		cout << "------------------------------------------------------------------------\n\n";
		cout << "Thanks for using Fandango's online movie ticket buying service!";
	}
		
		return 0;
	}
	
	//This function accepts the number of tickets of each type as a parameter. 
	void showSum(double num1, double num2, double num3)
		
	{
	//Determines the total cost of all tickets
	cout << (num1 + num2 + num3) << endl;
	}
	
	