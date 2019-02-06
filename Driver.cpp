//BY: KIREN KAUR

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

/*
I had trouble linking my files together, therefore as a last attempt to 
show that my code works at the least, I shifted all of my code to the driver
however, all of the code in the classes can be seen as well.
*/

#include "Driver.h"

Driver::Driver() 
{

}

void Driver::menu()
{
    std::cout<< "KWIC (Keyword in Context) System:"<<std::endl;
    std::cout<<" "<<std::endl;
}

// void Driver::readFile() 
// {
//    inputObj.readFile();
// }

// void Driver::circularshift()
// {
//    circularshifter.shifter(inputObj);
// }

// void Driver::alphabetize() 
// {
//    alphabetizer.alphabetize(circularshifter);

// }

Driver::~Driver() 
{

}

int main() {
   Driver driver;
   driver.menu();

   // Program methods 
   // driver.readFile();
   // driver.shifter(inputObj);
   // driver.alphabetize(circularshift);
   // driver.output();

   // Input inputObj;
   // inputObj.readFile();
   
   // //noise words to be avoided
   std::vector<std::string> stopwordsVector = {"a", "an", "the", "to", "of", "in", "I", 
                              "is", "that", "it", "on", "you", "this", 
                              "for", "but", "with", "are", "have", "be",
                              "at", "or", "as", "was","so", "if", "out", "not", "and"};

   std::vector<std::string> linesVector;
   std::vector<std::string> resultsVector;
   std::vector<std::string> wordsVector;

   std::ifstream inputFile("input.txt");
   std::string line;
   std::string word;

   while(std::getline(inputFile, line)) { 

      //get sentence
      std::stringstream linestream(line);

      //capitalize the original lines
      std::transform( line.begin(), line.begin() + line.find(' '), line.begin(), &toupper );
      linesVector.push_back(line);

      for(int k = 0; k < linesVector.size(); k++)
      {
         std::cout<<linesVector[k]<<std::endl;
      }

      //make sure word vector is clear before starting new sentence   
      std::string word;
      wordsVector.clear();

      //stream to split the lines  
      std::istringstream linesplitter(line);

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

      //shift and display the circular shifts
      for(int i = 0; i < wordsVector.size(); i++)
      {   

         std::string result;
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

         std::cout<<"\n";
         std::rotate(wordsVector.begin(), wordsVector.begin() + 1, wordsVector.end()); 
         resultsVector.push_back(result);

         result = "";
      }


      //alphabetize them
      std::sort(resultsVector.begin(), resultsVector.end());
   }

   //display the results
   std::cout<<"##### CIRCULARLY SHIFTED RESULTS ####"<<std::endl;
   for(int p = 0; p < resultsVector.size(); p++)
   {
      std::cout<<resultsVector[p]<<std::endl;
   }

   std::cout<<" "<<std::endl;
   std::cout<<" "<<std::endl;
   std::cout<<" "<<std::endl;
    
}