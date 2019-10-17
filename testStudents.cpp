/*
Author:		Kishan P. Patel
E-mail:		kpp5282@psu.edu
Course:		CMPSC 121
Assignment:	Lab 11
Due date:	12/8/2017
File:		testStudents.cpp
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
using namespace std;

//Class Data Structure
class Student{
	
	//Private Data Members
	private:
		string name;
		string ID;
		double gradePoint;
		double credit;
	
	//Public Data Members
	public:
			
		// Member function that displays the student's id number, name, and GPA
		void display(){
			cout << ID << ", " << name << ", " << "GPA = " << (credit > 0.0 ? gradePoint / credit : 0.0);
	}
	
	//Default Constructor
	Student(){ 
		name = "New Student";
		ID = "123456789";
		gradePoint = 0.0;
		credit = 0.0;
	}
	
	// Constructor that initializes the private data members to appropriate values
	Student(string studentName, string studentId, double gradeCount, double creditCount){
		name = studentName;
		ID = studentId;
		gradePoint = gradeCount;
		credit = creditCount;
	}
	
	//Returns what grade you are in depending on the credits earned
	string classStanding(){
		 if (credit >= 0 && credit <= 30)
			  return "Freshman";
		 else if (credit > 30 && credit <= 60)
			  return "Sophomore";
		 else if (credit > 60 && credit <= 90)
			  return "Junior";
		 else
			  return "Senior";
	}
};

int main(){
	
	//Ben Witten's Data
	cout<< setprecision(2) << showpoint << fixed; 
	cout << "Student Data:";
	cout << endl << "-----------------" << endl;
	Student s1("Ben Witten","213559876",110.0,31.0);
	s1.display();
	string standing = s1.classStanding();
	cout << endl << standing << endl << endl;
	
	//Carson Wetnz's Data
	Student s2("Carson Wentz","368341769",347.0,91.0);
	s2.display();
	standing = s2.classStanding();
	cout << endl << standing << endl << endl;
	
  	//Default Constructor Data
	Student s3;
	s3.display();
	standing = s3.classStanding();
	cout << endl << standing;

	return 0;
	
}
