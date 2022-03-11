// g++ -o main test_cpp.cpp
#include <iostream>
#include "Init.h"
 
using namespace std;

class Ele
{
   public:
     Ele(); 
     ~Ele(){};
     Init _init;
};
