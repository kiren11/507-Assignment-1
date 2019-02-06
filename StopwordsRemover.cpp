#include "StopwordsRemover.h"

#include <iostream>
#include <fstream>
#include <vector>

StopwordsRemover::StopwordsRemover() 
{

}

StopwordsRemover::stopwords() 
{
   //noise words to be avoided
   const char * stopwords[] = {"a", "an", "the", "to", "of", "in", "I", 
                              "is", "that", "it", "on", "you", "this", 
                              "for", "but", "with", "are", "have", "be",
                              "at", "or", "as", "was","so", "if", "out", "not"};

}

StopwordsRemover::~StopwordsRemover() 
{
    
}