#ifndef _CIRCULARSHIFT_H_
#define _CIRCULARSHIFT_H_


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

#include "Input.h"

class CircularShift : public Filter
{ 
    public:  

        //constructor
        CircularShift();

        std::vector<std::string> shifter(std::string, Input);

        //destructor
        ~CircularShift();
};

#endif //!defined _CIRCULARSHIFT_H_