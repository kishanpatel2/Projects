/*
Author:		Kishan P. Patel
E-mail:		kpp5282@psu.edu
Course:		CMPSC 121
Assignment:	Lab 10
Due date:	12/1/17
File:		thanksgivingMenu.cpp
Purpose:	This program implements a free Thanksgiving Day Smorgasbord.   
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
	//variables 
	string *pointer = nullptr;
	int numberItems;
	int	temp;
	string item;
	
	//introduce thanksgiving
	cout << "*******************************************\n\n";
	cout << " !!! FREE Thanksgiving Day Smorgasbord !!! \n\n";
	cout << "*******************************************\n\n";
		
	//entrees
	cout << "Entrees:\n";
	cout << "1) Turkey\n";
	cout << "2) Ham\n";
	cout << "3) Salmon\n";
	cout << "4) Vegetarian Lasagna\n\n";
	
	//side dishes
	cout << "Side Dishes:\n";
	cout << "5) Mashed Potatoes\n";
	cout << "6) Stuffing\n";
	cout << "7) Creamed Corn\n";
	cout << "8) Tossed Salad\n\n";
		
	//desserts
	cout << "Desserts:\n";
	cout << "9) Pumpkin Pie\n";
	cout << "10) Apple Pie\n";
	cout << "11) Chocolate Cake\n";
	cout << "12) Ice Cream\n\n";
		
	//beverages
	cout << "Beverages:\n";
	cout << "13) Coffee\n";
	cout << "14) Tea\n";
	cout << "15) Water\n";
	cout << "16) Soda\n\n";
	
	cout << "************************************************************************\n\n";
	cout << "Please enter the number of menu items you wish to oder at the prompt.\n";
	cout << "(Note: There are no restrictions on the number of items per category.)\n\n";
	cout << "************************************************************************\n\n";
	
	//ask how many menu items they want
	cout << "Number of menu items? ";
	cin >> numberItems;
	
	//give a range for the numbers to be in
	while (numberItems <= 0 || numberItems >= 17) {
		cout << "\n";
		cout << numberItems << " is not a valid choice. You must enter a number from 1 to 16\n\n";
		cout << "Number of menu items? ";
		cin >> numberItems;

	}
	//dynamically allocate an array to hold the pointer
	pointer = new string[numberItems];
	
	//item number
	for (int counter =0; counter < numberItems ; counter++ ){
		cout << "Item #: "; 
		cin >> temp;
		
		//give a range for the numbers to be in
		while (temp <= 0 || temp >= 17) {
			cout << "\n";
			cout << temp << " is not a valid choice. You must enter a number from 1 to 16\n\n";
			cout << "Item #: ";
			cin >> temp;
			*(pointer+counter) = temp;
		}
		
		if (temp == 1)
			*(pointer + counter) = "Turkey";
		else if (temp == 2)
			*(pointer + counter) = "Ham";
		else if (temp == 3)
			*(pointer + counter) = "Salmon";
		else if (temp == 4)
			*(pointer + counter) = "Vegetarian Lasagna";
		else if (temp == 5)
			*(pointer + counter) = "Mashed Potatoes";
		else if (temp == 6)
			*(pointer + counter) = "Stuffing";
		else if (temp == 7)
			*(pointer + counter) = "Creamed Corn";
		else if (temp == 8)
			*(pointer + counter) = "Tossed Salad";
		else if (temp == 9)
			*(pointer + counter) = "Pumpkin Pie";
		else if (temp == 10)
			*(pointer + counter) = "Apple Pie";
		else if (temp == 11)
			*(pointer + counter) = "Chocolate Cake";
		else if (temp == 12)
			*(pointer + counter) = "Ice Cream";
		else if (temp == 13)
			*(pointer + counter) = "Coffee";
		else if (temp == 14)
			*(pointer + counter) = "Tea";
		else if (temp == 15)
			*(pointer + counter) = "Water";
		else if (temp == 16)
			*(pointer + counter) = "Soda";
	}

	//Order Summary
	cout << "\nOrder Summary: " << endl;
	for (int counter = 0; counter < numberItems ; counter++ ){
		cout << 1 << " " << *(pointer + counter) << endl;	
	}

	delete [] pointer;

	return 0;
}