#ifndef _DRIVER_H_
#define _DRIVER_H_

#include "Input.h"
#include "CircularShift.h"
#include "Alphabetizer.h"
#include "Capitalizer.h"
#include "Output.h"
#include "StopwordsRemover.h"

class Driver {

   private:
      Input inputObj;
      // CircularShift circularshifter;
      // Alphabetizer alphabetizer;

   public:
      Driver();
      ~Driver();

      void menu();
      void readFile();
      // void shifter();
      // void alphabetize();
};


#endif //!defined _DRIVER_H_