#ifndef _INPUT_H_
#define _INPUT_H_

#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Input 
{ 
    public:   

        //constructor
        Input();

        // std::vector<std::string> readFile();

        //destructor
        ~Input();

    protected:

        std::vector<std::string> linesVector;
};

#endif //!defined _INPUT_H_