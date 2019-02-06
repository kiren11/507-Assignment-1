#ifndef _CAPITALIZER_H_
#define _CAPITALIZER_H_

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Capitalizer : public Filter
{ 
    public:   

        //constructor
        Capitalizer();

        //destructor
        ~Capitalizer();

};

#endif //!defined _CAPITALIZER_H_