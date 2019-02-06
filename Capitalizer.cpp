#include "Capitalizer.h"

#include <iostream>          //cin and cout
#include <fstream>
#include <vector>

//constructor
Capitalizer::Capitalizer(void) 
{

}

std::vector<std::string> capitalizeOld(CircularShift resultsVector) 
{
   //populate word vector
   while(linesplitter >> word) 
   {     
      //if nothing in vector, capitalize the first word
      if(wordsVector.empty())
      {
         std::transform( word.begin(), word.begin(), word.begin(), &toupper );

         wordsVector.push_back(word);
         
      } else {
         wordsVector.push_back(word);
      }
   }
}

std::vector <std::string> capitalizeNew(CircularShift resultsVector)
{
   for(int j = 0; j < wordsVector.size(); j++)
   {      
      if (std::find(stopwordsVector.begin(), stopwordsVector.end(), wordsVector[0]) != stopwordsVector.end())
      {
         result = " ";
      } else {
         result += wordsVector[j];
         result += " ";
      }
   }
}

Capitalizer::~Capitalizer() 
{

}
