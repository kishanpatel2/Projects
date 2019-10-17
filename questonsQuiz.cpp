/*
Author:		Kishan P. Patel
E-mail:		kpp5282@psu.edu
Course:		CMPSC 121
Assignment:	Lab 9
Due date:	11/10/17
File:		questionsQuiz.cpp
Purpose:	This program implements a simple trivia game    
Compiler:	Coderunner
Operating
system:		Mac OS
References: Class demo programs (http://www.cplusplus.com/reference/algorithm/transform/)
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <cstdlib>


using namespace std;

	//holds answers
	string answers[10];
	//holds questions
	string questions[10];
	
	//function holds all of the questions and answers for the quiz
	void questionsAndAnswers()
{

	//question 1
	questions[0]= "Which NBA team has the most championship wins"; //celtics
	answers[0]= "celtics";

	//question 2
	questions[1]="Who was the #1 draft pick in 2003 ";
	answers[1]="lebron james";

	//question 3
	questions[2]= "What team drafted Ray Allen" ; 
	answers[2]= "minnesota timberwolves";

	//question 4
	questions[3]= "Who has the most career points in the NBA ";
	answers[3]= "kareem abdul-jabbar";

	//question 5
	questions[4]="In the 2016-2017 season who had the most triple-doubles "; 
	answers[4]= "russell westbrook";

	//question 6
	questions[5]= "What year was the NBA established "; //1946
	answers[5]= "1946";
		
	//question 7
	questions[6]= "Who was the NBA's first commissioner "; //maurice podoloff
	answers[6]= "maurice podoloff";

	//question 8 
	questions[7]= "Who is the shortest player in the NBA "; //muggsy bogues
	answers[7]="muggsy bogues";

	//question 9
	questions[8]= "Who scored the most points in one game in the NBA "; //wilt chamberlain
	answers[8] = "wilt chamberlain";

	//question 10
	questions[9]= "Who has the most championship rings "; //bill russell
	answers[9]= "bill russell";
}
	
	
	
 int main()

{
		//Get the system time
		unsigned seed = time(0);
		
		//Seed the random number generator
		srand(seed);

		//Variables
		char readyToPlay, choice;
		int i=0, c;

		//welcome the user 
		cout << "*********************************************************" << endl << endl;
		cout << "Welcome to the NBA Trivia Game!" << endl << endl;
		cout << "Ready to play (Y/N)? ";	
		cin >> readyToPlay;
		cout << "\n";
		cout << "*********************************************************" << endl;
		
		if(readyToPlay == 'Y' || readyToPlay == 'y')
		{

			//function is put in here so questions can appear if the player says yes
			questionsAndAnswers();
			
		do
		{
			cin.ignore();
			string answer = "";
			cout << endl << questions[i] << endl;	
			getline(cin, answer);
			transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
			
		
		if(answer == answers[i])
		{
			cout << endl << "You are correct!" << endl << endl;
			cout << "Play again (Y/N)? ";
			cin >> choice;
			cout << endl << "*********************************************************" << endl;
			i++;
		
		}else{
			cout << endl << "Nice try but no" << endl << endl;
			cout << "Play again (Y/N)? " << endl;
			cin >> choice;
			cout << endl << "*********************************************************" << endl;
			i++;
		}
		
		}while(choice =='y' || choice =='Y');
			cout << endl << "Thanks for playing the NBA trivia game!" << endl;
			cout << "Come back soon :)" << endl;
			cout << endl << "*********************************************************" << endl;
		
		}else{
			cout << endl << "Maybe another time" << endl;
			cout << endl << "*********************************************************" << endl;
		}
		
		return 0;
	}
	
