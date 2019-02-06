#ifndef _ALPHABETIZER_H_
#define _ALPHABETIZER_H_

#include <fstream>
#include <iostream>
#include <vector>

#include "CircularShift.h"

class Alphabetizer : public Filter
{ 
    public:   
        //constructor
        Alphabetizer();

        std::vector<std::string> alphabetizeOriginal(CircularShift);

        //destructor
        ~Alphabetizer();
};

#endif //!defined _ALPHABETIZER_H_