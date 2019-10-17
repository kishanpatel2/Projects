/*
Author:		Kishan P. Patel
E-mail:		kpp5282@psu.edu
Course:		CMPSC 121
Assignment:	Lab 7
Due date:	10/27/2017
File:		specialtyPizzaMenu.cpp
Purpose:    This program provides a specialty pizza menu from which a customer
			can place an order.
Compiler:	Coderunner
Operating
system:		Mac OS
References: Class demo programs
*/

#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototypes
void showPayment (double, double, double, double);
void displayPizzaMenu ();
void displaySizeMenu ();
int getPizzaChoice();
int getSizeChoice();

 int main()


	{
		//Variables
		int pizzaChoice, sizeChoice, personalChoice;
		int smallPizza;
		int mediumPizza ; 
		int largePizza ; 
		int extraLargePizza ;
		int pizzaTotal;

		
		//Welcome to Pizza Shop
		cout << "************************************************\n";
		cout << "\nWelcome to Kishan's Pizza of Piscataway\n";
		cout << "\n************************************************\n";

		cout << setprecision(2) << fixed << showpoint;
		do 
		{
			
		displayPizzaMenu ();
		pizzaChoice = getPizzaChoice();
		cin >> pizzaChoice;
		
		while (pizzaChoice < 1 || pizzaChoice > 6)
		{
			cout << pizzaChoice << " is not an option\n";
			cout << "\nPlease make a selection from 1 through 6. \n";
			cout << "\nYour choice (1-6)? ";
			cin >> pizzaChoice;

		}
		
		if (pizzaChoice == 6){
			cout << "\nThank you for using Kishan's Pizza of Piscataway online ordering system. Visit again soon!";
			break;
		}

		displaySizeMenu();
		sizeChoice = getSizeChoice();
		cin >> sizeChoice;

			
		while (sizeChoice < 1 || sizeChoice > 4)
		{
			cout << sizeChoice << " is not an option\n";
			cout << "\nPlease make a selection from 1 through 4. \n";
			cout << "\nYour choice (1-4)? ";
			cin >> sizeChoice;

		}

		//How many pizzas
		cout << "\nHow many personal pizzas? ";
		cin >> personalChoice;
		cout <<"\n**************************************************\n";
		
		
		smallPizza = 10.00;
		pizzaTotal = smallPizza * personalChoice;
		
		mediumPizza = 14.50;
		pizzaTotal = mediumPizza * personalChoice;
		
		largePizza = 19.00;
		pizzaTotal = largePizza * personalChoice;
		
		extraLargePizza = 23.50;
		pizzaTotal = extra;
		

		
		//Total cost
		cout << "\nYour order total is $ " << pizzaTotal << "\n";
		cout << "\n**************************************************\n";



		}while (pizzaChoice != 6);
		
		return 0;
	}
	
	void displayPizzaMenu()
	{
		cout << "\nSpecialty Pizza Menu\n\n";	
		cout << "1) Cheese\n";
		cout << "2) Vegetarian\n";
		cout << "3) Hawaiian\n";
		cout << "4) BBQ Chicken\n";
		cout << "5) White Pizza\n";
		cout << "6) Exit\n\n";
		cout << "Your Choice (1-6)? ";

	}
	int getPizzaChoice(){
		int pizzaTotal;
		
		return pizzaTotal;
	}
	
	void displaySizeMenu()
	{
		//Show Sizes and Price
		cout << "\nAvailable Sizes and Prices\n\n";
		cout << "1) 10\" Personal Pizza      - $10.00\n";
		cout << "2) 14\" Medium Pizaa        - $14.50\n";
		cout << "3) 16\" Large      	   - $19.00\n";
		cout << "4) 18\" Extra Large         - $23.50\n\n";
		cout << "Your Choice (1-4)? ";

	}
	
	int getSizeChoice(){
		int sizeChoice = sizeChoice  ;
		return sizeChoice;
	}
			
