/*
Author:		Kishan P. Patel
E-mail:		kpp5282@psu.edu
Course:		CMPSC 121
Assignment:	      Lab 4
Due date:	      9/29/2017
File:		      takeOutOrder.cpp
Purpose:          Create a take-out order (sub, side, drink) for a single customer using
                  random number generation and decision structures
Compiler:	      Coderunner
Operating
system:		Mac OS
References:       Class demo programs
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()


{
      //Constants
      const int MIN_VALUE = 1; //Minimum Value 
      const int MAX_VALUE = 3; //Maximum Value
      
      //Variables
      int sub; //To hold what 
      int drink;
      int side;
      
      //Get the system time
      unsigned seed = time(0);


      //Seed the random number generator 
      srand(seed);
      
      
      cout << "Kishan's Diner \n";
      cout << "--------------- \n";
      cout << "\n";
      cout << "Order Summary:\n";
      cout << "\n";
      
      // Determine the food
      sub =(rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
      if      (sub == 1)
                  cout << "1 Meatball Sub \n";
      else if (sub == 2)
                  cout << "1 Vegetarian Sub \n";
      else if (sub == 3)
                  cout << "1 Turkey Sub \n";
      
                  
      // Determine the drink
      drink =(rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
      if      (drink == 1)
                  cout << "1 Coca-Cola \n";
      else if (drink == 2)
                  cout << "1 Sprite \n";
      else  if (drink == 3)
                  cout << "1 Apple Juice \n";   
                  
      //Determine the side
      side =(rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;      
      if      (side == 1)
                  cout << "1 Cheese Fries \n";
      else if (side == 2)
                  cout << "1 Regular Fries \n";
      else if (side == 3)
                  cout << "1 Mozzarella Sticks \n";
      cout << "\n";
      cout << "Thanks for your order. Come back soon! \n";

                                   

      return 0;
}




