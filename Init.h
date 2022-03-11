// g++ -o main test_cpp.cpp
#include <iostream>
 
using namespace std;


class Init
{
        public:
          Init(int e = 0)
          {
                  cout << "init  " << e <<endl;
          }
          ~Init(){};
};
