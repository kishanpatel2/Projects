/*
Author:		Kishan P. Patel
E-mail:		kpp5282@psu.edu
Course:		CMPSC 121
Assignment:	Lab 8
Due date:	11/3/17
File:		handshakeCounter.cpp
Purpose:	This program finds the number of handshakes in a room of "n" people shaking hands.      
Compiler:	Coderunner
Operating
system:		Mac OS
References: Class demo programs
*/


#include <iostream>
#include <iomanip>

using namespace std;

//this recursive function allows the number of people in a room as a paramater, then returns the total number of handshakes
int handshakes (int);

int main()

//display for determining handshakes
{
	int people;
	
	cout << " *********************\n";
	cout << "| Handshake Counter ! |\n";
	cout << " *********************\n\n";
	
	cout << "Please enter the number of people in the room and I will determine the total number of handshakes\n\n";
	cout << "Number of people: ";
	cin >> people;

	while (people < 0){
		cout << "\nPlease enter a valid value\n";
		cout << "\nNumber of people: ";
		cin >> people;
	}
	
	cout << "\nWith " << people << " people in a room there are " << handshakes(people) << " total handshakes";
	
	return 0;

}

int handshakes (int n)
//calculation for handshakes value
{
	//this is the formula that the function will use to find number of handshakes
	return n * (n - 1) / 2;
	
}
