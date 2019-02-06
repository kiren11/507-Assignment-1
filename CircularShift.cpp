
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

#include "CircularShift.h"

//constructor
CircularShift::CircularShift(void) 
{

}

std::vector<std::string> shifter(Input linesVector)
{           
    //will hold each final shifted sentence
    std::vector<std::string> resultsVector;

    std::cout<<"#############"<<std::endl;
    std::cout<<"##  Output: ##"<<std::endl;
    std::cout<<"#############"<<std::endl;

    //shifting done here
    for(int i = 0; i < linesVector.size(); i++)
    {   
        
        std::string result;
        for(int j = 0; j < linesVector.size(); j++)
        {   
            result += linesVector[j];
            result += " ";
        }

        //shift results and push to new vector
        std::cout<<"\n";
        std::rotate(linesVector.begin(), linesVector.begin() + 1, linesVector.end()); 
        resultsVector.push_back(result);
        
        //Alphabetizer alph;
        //alph.alphabetizeObj();

        //alphabetize the vector
        std::sort(resultsVector.begin(), resultsVector.end());
        result = "";
    }

    //display the results
    for(int p = 0; p < resultsVector.size(); p++)
    {
        std::cout<<resultsVector[p]<<std::endl;
    }
    
    return resultsVector;
}

//destructor
CircularShift::~CircularShift() 
{

}