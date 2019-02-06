#include "Output.h"

#include <iostream>          //cin and cout
#include <fstream>
#include <vector>

//constructor
Output::Output(void) 
{

}

void displayResults(CircularShift resultsVector) 
{
  //display the results
   std::cout<<"##### CIRCULARLY SHIFTED RESULTS ####"<<std::endl;
   for(int p = 0; p < resultsVector.size(); p++)
   {
      std::cout<<resultsVector[p]<<std::endl;
   }
}

Output::~Output() 
{

}
