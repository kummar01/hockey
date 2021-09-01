// Records the fact that the player has scored another goal
#include "Hockey.h"

#include <iostream>
     using namespace std;

void Hockey::score_goal ()
{
     goals++;
}

// Prints the player's current statistics
void Hockey::print ()
{
     cout << "\n\nGoals:   " << goals;
     cout << "\nAssists: " << assists;
     if (penalties == 1)
       cout << "\n" << penalties << " penalty for " 
            << penalty_minutes << " minutes.";
     else
        cout << "\n" << penalties << " penalties for " 
          << penalty_minutes << " minutes.";
}
void Hockey::initialize()//any function you write for a class needs the scope resoluter
{
	goals=0;            
    assists=0;          
    penalties=0;       
    penalty_minutes=0;
	
}
 void Hockey::tripping ()
 {
 	penalties++;
 	penalty_minutes=penalty_minutes+2; 	
 }
 void Hockey::fighting()
 {
 	penalties++;
 	penalty_minutes=penalty_minutes+5; 	
 	
 }
 void Hockey::assist_goal()
 {
 	assists++;
 }
