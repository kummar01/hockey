// Main program that uses the Hockey class
#include <cstdlib>
#include <iostream>

using namespace std;

#include "Hockey.h"

int main()
{

    Hockey Eichel;//Declaring a hockey  type, object is Eichel
    Hockey Pominville;
   
    Eichel.initialize();
	Pominville.initialize();  

	Eichel.score_goal();//Applys the function to Eichel
    Eichel.score_goal();
   	Eichel.assist_goal();
   	Eichel.tripping();
   	
   	Pominville.assist_goal();
    Pominville.assist_goal();
    Pominville.assist_goal();
    Pominville.fighting();
    Pominville.fighting();
    
	cout << "Eichel stats: ";
    Eichel.print();
    
	cout << "\n\nPominville stats: ";
    Pominville.print();
		cout << goals;
    cout << "\n\n";
    return 0;
}

