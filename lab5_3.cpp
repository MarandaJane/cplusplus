// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;



int main()
{

/*Read a series of Student IDs (integer) followed with a space then a name (string) which might have spaces in it from studentIn.txt.
Output the student id followed by a tab, then the student name to a file called studentOut.txt and to the standard console output.*/

	
		ifstream inFS;     
		int studentID;   
		char studentName;



		inFS.open("myfile.txt");
		if (!inFS.is_open()) {
			cout << "Could not open file studentIn.txt." << endl;
			return 1; 
		}

		
		inFS >> studentID;
		inFS >> studentName;


		outFS.open("studentOut.txt");

		if (!outFS.is_open()) {
			cout << "Could not open file myoutfile.txt." << endl;
			return 1;
		}

		
		outFS << studentID << "	";
		outFS << studentName << "	";


		outFS.close();
	
		inFS.close();

		
		cout << studentID << "	";
		cout << studentName<<"	";

		return 0;
	






}

