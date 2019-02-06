#ifndef _STOPWORDS_REMOVER_H_
#define _STOPWORDS_REMOVER_H_


#include <fstream>
#include <iostream>
#include <vector>

#include "Filter.h"

class StopwordsRemover : public Filter
{ 

    public:   
        
        //constructor
        StopwordsRemover();

        //destructor
        ~StopwordsRemover();

};

#endif //!defined _STOPWORDS_REMOVER_H_