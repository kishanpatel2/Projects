/*
Author:		Kishan P. Patel
E-mail:		kpp5282@psu.edu
Course:		CMPSC 121
Assignment:	Lab 3
Due date:	9/22/2017
File:		insurancePayment.cpp
Purpose:	This program enables a user to make a one-time auto insurance
			payment. The program prompts the user to enter his/her name, policy
			number, and payment information, then displays a summary of the 
			completed transaction 
Compiler:	Coderunner
Operating
system:		Mac OS
References: Class demo programs
*/

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()

{
	int routingNumber, accountNumber, fourRightMost1, fourRightMost2;

	string firstName, lastName, policyNumber; 
	
	double paymentAmount;
	
	cout << "-------------------------------------------------------\n";
	cout << "\nWelcome to the Kish Insurance one-time payment service \n";
	
	cout << "Please enter the information requested.\n";
	cout << "\n";

	//Enter first name
	cout << "First Name: ";
	cin >> firstName;
	
	//Enter last name
	cout << "Last Name: ";
	cin >> lastName;
	
	//Enter policy number
	cout << "Policy Number (e.g., Q123056789): ";
	cin >> policyNumber;
	
	//Enter payment Amount
	cout << "Payment Amount: $";
	cin >> paymentAmount;
	
	//Enter bank routing number
	cout << "Bank Routing Number (e.g., 123456789): ";
	cin >> routingNumber;
	
	//Enter bank account number 
	cout << "Bank Account Number (e.g., 1234567): ";
	cin >> accountNumber;
	cout << "-------------------------------------------------------\n";
	cout << "\n";
	
	// Additonal Info
	fourRightMost1 = routingNumber % 10000;
	fourRightMost2 = accountNumber % 10000;
	
	//Output the answer 
	cout << "Payment Summary:\n";
	cout << "\n";
	cout << "Policy Holder: " << firstName << " " <<  lastName << "\n";
	cout << "Policy Number: " << policyNumber << "\n";
	cout << "Bank Routing Number: " << "xxxxxxx" << fourRightMost1 << endl ;
	cout << "Bank Account Number: " << "xxx" << fourRightMost2 << endl;
	cout << "Payment Amount: $" << setprecision(2) << fixed << showpoint
	<< paymentAmount << endl;
	cout << "-------------------------------------------------------\n";
	
	return 0;
}