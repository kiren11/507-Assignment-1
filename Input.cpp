#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

#include "Input.h"

//check the syntax of this
Input::Input(void)
{

}

// std::vector<std::string> Input::readFile()
// {
//     std::cout<<" "<<std::endl;
//     std::cout<<"#############"<<std::endl;
//     std::cout<<"##  Input: ##"<<std::endl;
//     std::cout<<"#############"<<std::endl;

//     std::vector<std::string> linesVector;

//     std::ifstream inputFile("input.txt");
//     std::string line;
//     std::string word;

//    while(std::getline(inputFile, line)) { 

//     //   //get sentence
//     //   std::stringstream linestream(line);

//     //   //capitalize the original lines
//     //   std::transform( line.begin(), line.begin() + line.find(' '), line.begin(), &toupper );
//     //   linesVector.push_back(line);

//     //   for(int k = 0; k < linesVector.size(); k++)
//     //   {
//     //      std::cout<<linesVector[k]<<std::endl;
//     //   }

//     //   //make sure word vector is clear before starting new sentence   
//     //   std::string word;
//     //   wordsVector.clear();

//     //   //stream to split the lines  
//     //   std::istringstream linesplitter(line);

//     //   //populate word vector
//     //   while(linesplitter >> word) 
//     //   {     
//     //      //if nothing in vector, capitalize the first word
//     //      if(wordsVector.empty())
//     //      {
//     //         std::transform( word.begin(), word.begin(), word.begin(), &toupper );

//     //         wordsVector.push_back(word);
            
//     //      } else {
//     //         wordsVector.push_back(word);
//     //      }
//     //   }

//     // return linesVector;

// }   

Input::~Input() {

}

