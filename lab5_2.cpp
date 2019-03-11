
#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int averageUserInput;

   /*Read numbers(ints) from a file called in.txt.Output the number that your read in followed by a new line.Then output the average of the numbers you read in.Remember that you may have decimals!

	   You may remember that if we want to divide to ints and put the results into a double we might use something like d1 = (double)int1 / int2

	   For example if you were to read in : 4 5 6 you would output*/
   
	   ifstream inFS;    
	   int userInput;
	   int sumUserInput;      
	   
	   
	   inFS.open("in.txt");

	   if (inFS.eof()) {
		   cout << "Could not open file in.txt." << endl;
		   return 1;
	   }

	   inFS >> userInput;
	 
		for (int i = 0; !inFS.eof; ++i) 
		{
			sumUserInput = (sumUserInput + userInput);
			averageUserInput = double (sumUserInput / i);

		}
	  
	
	   inFS.close();

	   
	  
	   cout << userInput << endl;
	   cout << averageUserInput << endl;
	   
	   
	   
	   return 0;

   
}

