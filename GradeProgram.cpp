/*
Author:		Kishan P. Patel
E-mail:		kpp5282@psu.edu
Course:		CMPSC 121
Assignment:	Lab 2
Due date:	9/15/2017
File:		GradeProgram.cpp
Purpose:	Prompt a student to enter name, last 4 digits of ID, and
			scores for exams, final exam, and lab projects; the program
			then computes and displays the student’s identifying
			information and final course average.
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
	float idNumber, examOne, examTwo, finalExam, labProjects, finalGrade ;
	string firstName, lastName;

	cout << "Please enter the information requested.\n";
	cout << "\n";
	
	//Enter first name
	cout << "First Name: ";
	cin >> firstName;
	//Enter last name
	cout << "Last Name: ";
	cin >> lastName;
	//Enter last four digits of ID numbers
	cout << "Last 4 digits of ID number: ";
	cin >> idNumber;
	cout << endl;
	//Enter exam grade one
	cout << "Exam One Grade: ";
	cin >> examOne;
	//Enter exam grade two
	cout << "Exam Two Grade: ";
	cin >> examTwo;
	//Enter final exam grade 
	cout << "Final Exam Grade: ";
	cin >> finalExam;
	//Enter lab projects grade 
	cout << "Lab Projects Grade: ";
	cin >> labProjects;
	//Calculate the finalGrade
	finalGrade= (0.20 * examOne) + (0.20 * examTwo) + (0.25 * finalExam) + (0.35 * labProjects);
	cout << "\n";
	//Output the answer with name and id number
	cout << "Student: " << firstName << " " <<  lastName << "\n";
	cout << "ID: " << idNumber << "\n";
	cout << setprecision(1) << fixed << showpoint;
	cout << "Final Grade: " << finalGrade << "\n";
		return 0;
}