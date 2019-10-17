/*
Author:		Kishan P. Patel
E-mail:		kpp5282@psu.edu
Course:		CMPSC 121
Assignment:	Lab 5
Due date:	10/13/2017
File:		virtualMathTutor.cpp
Purpose:    This program implements a Virtual Math Tutor that helps students learn 
			to add, subtract, or multiply two numbers in the range 1 to 100
Compiler:	Coderunner
Operating
system:		Mac OS
References: Class demo programs
*/

//This program will be used to help tutor math students
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	//Variables
	int numberOne, numberTwo, yourChoice, yourAnswer, rightAnswer; 

	//Constants
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 100;
	
	//Get the system time
	unsigned seed = time(0);
	
	//Seed the random number generator
	srand(seed);
	
	//Use do-while loop
	do
	{ 
		cout << "****************************************\n";	
		cout << "\nWelcome to the Virtual Math Tutor\n\n";
		cout << "1) Addition\n";
		cout << "2) Subtraction\n";
		cout << "3) Multiplication\n";
		cout << "4) Quit\n\n";
		cout << "Your choice? ";
		cin >> yourChoice;

		numberOne = (rand() % (MAX_VALUE - MIN_VALUE + 1 )) + MIN_VALUE;
		numberTwo = (rand() % (MAX_VALUE - MIN_VALUE + 1 )) + MIN_VALUE;



	while (yourChoice < 1 || yourChoice > 4)
	{
		cout << yourChoice << " is not an option\n";
		cout << "Please make a selection from 1 through 4. \n";
		cout << "\nYour choice? ";
		cin >> yourChoice;

	}

	//use switch for addition, etc
	switch (yourChoice)
	{
		case 1: 
			cout << "\n****************************************\n";	
			cout << "\nHow much is " << numberOne<< " + " << numberTwo << " = ";
			rightAnswer = numberOne + numberTwo;
			break;
		
		case 2:
			cout << "\n****************************************\n";	
			cout << "\nHow much is " << numberOne << " - " << numberTwo << "? ";
			rightAnswer = numberOne - numberTwo;
			break;

		case 3: 
			cout << "\n****************************************\n";	
			cout << "\nHow much is " << numberOne << " * " << numberTwo << "? " ;
			rightAnswer = numberOne * numberTwo;
			break;

		case 4: 
			cout << "\n****************************************\n";			
			cout << "\nThanks for using Virtual Math Tutor!\n\n";
			break;
		}

		//show whether you are correct or false
		if (yourChoice >= 1 && yourChoice <= 4)
			cin >> yourAnswer;
		if (yourAnswer == rightAnswer)
			cout << "\nYou are correct, Nicely done!\n\n";
		else
			cout << "\nI am sorry but the right answer is: "<< rightAnswer << "\n\n";	
			
		} while (yourChoice != 5);
		
			
	return 0;
}

