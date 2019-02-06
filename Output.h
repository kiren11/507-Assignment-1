#ifndef _OUTPUT_H_
#define _OUTPUT_H_

#include <iostream>
#include <fstream>
#include <vector>

#include "Filter.h"

class Output : public Filter
 {

    public: 
        //constructor
        Output();

        void displayResults(CircularShift);

        //destructor
        ~Output();
};

#endif //!defined _OUTPUT_H_